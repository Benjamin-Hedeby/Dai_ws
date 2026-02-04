#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo, PointCloud2, PointField
from vision_msgs.msg import Detection3DArray
from visualization_msgs.msg import Marker, MarkerArray
from cv_bridge import CvBridge, CvBridgeError
import sensor_msgs_py.point_cloud2 as pc2
import cv2

LABELS = [
    "ALOMY","ANGAR","APESV","ARTVU","AVEFA","BROST","BRSNN",
    "CAPBP","CENCY","CHEAL","CHYSE","CIRAR","CONAR","EPHHE",
    "EPHPE","EROCI","FUMOF","GALAP","GERMO","LAPCO","LOLMU",
    "LYCAR","MATCH","MATIN","MELNO","MYOAR","PAPRH","PLALA",
    "PLAMA","POAAN","POLAV","POLCO","POLLA","POLPE","RUMCR",
    "SENVU","SINAR","SOLNI","SONAS","SONOL","STEME","THLAR",
    "URTUR","VERAR","VERPE","VICHI","VIOAR"
]

class SpatialOverlay(Node):
    def __init__(self):
        super().__init__('spatial_overlay')
        self.bridge = CvBridge()
        self.detections = []
        self.fx = self.fy = self.cx = self.cy = None

        # Unit conversion: raw sensor units → metres
        self.unit_scale = 0.1   # adjust for raw units
        self.depth_calib = 2.5  # calibration factor if needed

        # Publishers
        self.img_pub  = self.create_publisher(Image,      '/spatial_overlay/image_rect', 1)
        self.mark_pub = self.create_publisher(MarkerArray,'/spatial_overlay/markers',    1)
        self.pc_pub   = self.create_publisher(PointCloud2, '/spatial_overlay/points',     1)

        # Subscriptions
        self.create_subscription(CameraInfo,       '/oak/rgb/camera_info',       self.caminfo_cb, 10)
        self.create_subscription(Image,            '/oak/rgb/image_rect',        self.image_cb,   1)
        self.create_subscription(Detection3DArray, '/oak/nn/spatial_detections', self.dets_cb,    1)

        self.get_logger().info('Overlay on /oak/rgb/image_rect active.')

    def mm_to_m(self, p):
        x_m = p.x * self.unit_scale
        y_m = p.y * self.unit_scale
        z_m = p.z * self.unit_scale
        return x_m * self.depth_calib, y_m * self.depth_calib, z_m * self.depth_calib

    def caminfo_cb(self, msg: CameraInfo):
        self.fx, self.fy = msg.k[0], msg.k[4]
        self.cx, self.cy = msg.k[2], msg.k[5]

    def dets_cb(self, msg: Detection3DArray):
        self.detections = msg.detections

        positions = [self.mm_to_m(det.results[0].pose.pose.position)
                     for det in self.detections]

        # RViz markers
        ma = MarkerArray()
        for i, ((x, y, z), det) in enumerate(zip(positions, self.detections)):
            m = Marker()
            m.header = msg.header; m.ns = 'plants'; m.id = i
            m.type = Marker.SPHERE; m.action = Marker.ADD
            m.pose.position.x = -x; m.pose.position.y = -y; m.pose.position.z = z
            m.pose.orientation.w = 1.0
            m.scale.x = m.scale.y = m.scale.z = 0.125
            m.color.r = 0.0; m.color.g = 1.0; m.color.b = 0.0; m.color.a = 0.8
            ma.markers.append(m)
        self.mark_pub.publish(ma)

        # PointCloud2
        fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
        ]
        points = [[-x, -y, z] for (x, y, z) in positions]
        pc2_msg = pc2.create_cloud(header=msg.header, fields=fields, points=points)
        self.pc_pub.publish(pc2_msg)

    def image_cb(self, msg: Image):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
            frame = cv2.flip(frame, 0)
        except CvBridgeError as e:
            self.get_logger().error(f'CV convert failed: {e}')
            return

        # Recompute positions here for image_cb
        positions = [self.mm_to_m(det.results[0].pose.pose.position)
                     for det in self.detections]

        overlay = frame.copy()

        # Summary
        if not self.detections:
            cv2.putText(overlay, '0 detected', (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1.0, (0,128,255), 2)
        else:
            y0 = 30; counts = {}
            for det in self.detections:
                cid = int(det.results[0].hypothesis.class_id)
                label = LABELS[cid] if 0 <= cid < len(LABELS) else str(cid)
                counts[label] = counts.get(label, 0) + 1
            for label, c in counts.items():
                cv2.putText(overlay, f'{c} of type {label}', (10, y0), cv2.FONT_HERSHEY_SIMPLEX, 1.0, (0,128,255), 2)
                y0 += 40

        # Draw 2D markers & text
        if None not in (self.fx, self.fy, self.cx, self.cy):
            for (x, y, z), det in zip(positions, self.detections):
                if z <= 0.0: continue
                u = int(self.fx * x / z + self.cx)
                v = int(self.fy * y / z + self.cy)
                cv2.circle(overlay, (u, v), 20, (0,0,255), -1)
                cv2.putText(overlay, f'{z:.2f}m', (u+56, v-6), cv2.FONT_HERSHEY_SIMPLEX, 2.5, (0,0,255), 5)

        try:
            out = self.bridge.cv2_to_imgmsg(overlay, 'bgr8')
            out.header = msg.header
            self.img_pub.publish(out)
        except CvBridgeError as e:
            self.get_logger().error(f'Publish failed: {e}')


def main(args=None):
    rclpy.init(args=args)
    node = SpatialOverlay()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
