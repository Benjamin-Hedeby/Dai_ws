// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:msg/TrackDetection2D.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/msg/detail/track_detection2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__msg__TrackDetection2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0xc5, 0x87, 0x35, 0x99, 0xe8, 0x14, 0x57,
      0xa5, 0x1e, 0x8c, 0x25, 0xe7, 0x31, 0x57, 0xce,
      0xc7, 0x20, 0x7a, 0xd5, 0x1f, 0xd1, 0x39, 0x9e,
      0x05, 0xfb, 0x87, 0x65, 0x67, 0x66, 0x5d, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "vision_msgs/msg/detail/object_hypothesis__functions.h"
#include "vision_msgs/msg/detail/pose2_d__functions.h"
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "vision_msgs/msg/detail/point2_d__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "vision_msgs/msg/detail/bounding_box2_d__functions.h"
#include "vision_msgs/msg/detail/object_hypothesis_with_pose__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH = {1, {
    0x9a, 0x7c, 0x0f, 0xd2, 0x34, 0xb7, 0xf4, 0x5c,
    0x60, 0x98, 0x74, 0x5e, 0xcc, 0xcd, 0x77, 0x3c,
    0xa1, 0x08, 0x56, 0x70, 0xe6, 0x41, 0x07, 0x13,
    0x53, 0x97, 0xae, 0xe3, 0x1c, 0x02, 0xe1, 0xbb,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t vision_msgs__msg__BoundingBox2D__EXPECTED_HASH = {1, {
    0x00, 0x8e, 0xac, 0xbb, 0x0c, 0xf8, 0xf2, 0x6e,
    0x83, 0x79, 0x55, 0x47, 0xbe, 0xd0, 0x13, 0xee,
    0xc3, 0x67, 0x54, 0x85, 0xef, 0x38, 0x6e, 0xc0,
    0x56, 0xd8, 0x0e, 0xaa, 0xf1, 0xc1, 0xce, 0x2f,
  }};
static const rosidl_type_hash_t vision_msgs__msg__ObjectHypothesis__EXPECTED_HASH = {1, {
    0x51, 0xda, 0x43, 0xce, 0xc1, 0x1c, 0x01, 0x95,
    0x7a, 0x64, 0xd1, 0xe0, 0x5a, 0x24, 0xac, 0xd1,
    0x8a, 0xae, 0x77, 0x45, 0xec, 0x30, 0xb7, 0x43,
    0x48, 0xad, 0x5f, 0x6d, 0x63, 0x4f, 0x7f, 0x90,
  }};
static const rosidl_type_hash_t vision_msgs__msg__ObjectHypothesisWithPose__EXPECTED_HASH = {1, {
    0x41, 0xc1, 0x23, 0x44, 0xc0, 0x39, 0x6c, 0x48,
    0xb8, 0x1d, 0xf1, 0x24, 0x67, 0xc1, 0x92, 0xd9,
    0x9b, 0x2a, 0x0e, 0xb1, 0x46, 0x3c, 0x5c, 0x37,
    0x19, 0x4e, 0x42, 0x23, 0x25, 0x1c, 0x80, 0xbc,
  }};
static const rosidl_type_hash_t vision_msgs__msg__Point2D__EXPECTED_HASH = {1, {
    0xea, 0xb0, 0xe8, 0x3f, 0x44, 0xab, 0x4d, 0xe9,
    0x2c, 0xea, 0xf7, 0x6d, 0xd7, 0xd0, 0xe7, 0x63,
    0x8f, 0x2b, 0xdd, 0x1d, 0x16, 0xff, 0xbe, 0x16,
    0xc7, 0xa1, 0x36, 0xc4, 0x8e, 0x40, 0x72, 0x47,
  }};
static const rosidl_type_hash_t vision_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xb0, 0xb5, 0xd1, 0xd7, 0xb4, 0xc2, 0x0d, 0xd4,
    0xfc, 0xde, 0x3e, 0xd1, 0xd4, 0xb2, 0x89, 0xa9,
    0x19, 0x29, 0x05, 0x72, 0x00, 0x7d, 0x67, 0xa9,
    0x70, 0x43, 0x81, 0x4d, 0xb2, 0x5d, 0x36, 0x48,
  }};
#endif

static char depthai_ros_msgs__msg__TrackDetection2D__TYPE_NAME[] = "depthai_ros_msgs/msg/TrackDetection2D";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseWithCovariance__TYPE_NAME[] = "geometry_msgs/msg/PoseWithCovariance";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char vision_msgs__msg__BoundingBox2D__TYPE_NAME[] = "vision_msgs/msg/BoundingBox2D";
static char vision_msgs__msg__ObjectHypothesis__TYPE_NAME[] = "vision_msgs/msg/ObjectHypothesis";
static char vision_msgs__msg__ObjectHypothesisWithPose__TYPE_NAME[] = "vision_msgs/msg/ObjectHypothesisWithPose";
static char vision_msgs__msg__Point2D__TYPE_NAME[] = "vision_msgs/msg/Point2D";
static char vision_msgs__msg__Pose2D__TYPE_NAME[] = "vision_msgs/msg/Pose2D";

// Define type names, field names, and default values
static char depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__results[] = "results";
static char depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__bbox[] = "bbox";
static char depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__is_tracking[] = "is_tracking";
static char depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__tracking_id[] = "tracking_id";
static char depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__tracking_age[] = "tracking_age";
static char depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__tracking_status[] = "tracking_status";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__msg__TrackDetection2D__FIELDS[] = {
  {
    {depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__results, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {vision_msgs__msg__ObjectHypothesisWithPose__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__bbox, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vision_msgs__msg__BoundingBox2D__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__is_tracking, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__tracking_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__tracking_age, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__TrackDetection2D__FIELD_NAME__tracking_status, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__msg__TrackDetection2D__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseWithCovariance__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__BoundingBox2D__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__ObjectHypothesis__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__ObjectHypothesisWithPose__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__Point2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__Pose2D__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__msg__TrackDetection2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__msg__TrackDetection2D__TYPE_NAME, 37, 37},
      {depthai_ros_msgs__msg__TrackDetection2D__FIELDS, 6, 6},
    },
    {depthai_ros_msgs__msg__TrackDetection2D__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH, geometry_msgs__msg__PoseWithCovariance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PoseWithCovariance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__BoundingBox2D__EXPECTED_HASH, vision_msgs__msg__BoundingBox2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = vision_msgs__msg__BoundingBox2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__ObjectHypothesis__EXPECTED_HASH, vision_msgs__msg__ObjectHypothesis__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = vision_msgs__msg__ObjectHypothesis__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__ObjectHypothesisWithPose__EXPECTED_HASH, vision_msgs__msg__ObjectHypothesisWithPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = vision_msgs__msg__ObjectHypothesisWithPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Point2D__EXPECTED_HASH, vision_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = vision_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Pose2D__EXPECTED_HASH, vision_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = vision_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# Class probabilities\n"
  "vision_msgs/ObjectHypothesisWithPose[] results\n"
  "\n"
  "# 2D bounding box surrounding the object.\n"
  "vision_msgs/BoundingBox2D bbox\n"
  "\n"
  "# If true, this message contains object tracking information.\n"
  "bool is_tracking\n"
  "\n"
  "# ID used for consistency across multiple detection messages. This value will\n"
  "# likely differ from the id field set in each individual ObjectHypothesis.\n"
  "# If you set this field, be sure to also set is_tracking to True.\n"
  "string tracking_id\n"
  "\n"
  "# Age: number of frames the object is being tracked\n"
  "int32 tracking_age\n"
  "\n"
  "# Status of the tracking:\n"
  "# 0 = NEW -> the object is newly added.\n"
  "# 1 = TRACKED -> the object is being tracked.\n"
  "# 2 = LOST -> the object gets lost now. The object can be tracked again automatically (long term tracking) \n"
  "#\\t\\t\\t  or by specifying detected object manually (short term and zero term tracking).\n"
  "# 3 = REMOVED -> the object is removed.\n"
  "int32 tracking_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__msg__TrackDetection2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__msg__TrackDetection2D__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 903, 903},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__msg__TrackDetection2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__msg__TrackDetection2D__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PoseWithCovariance__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *vision_msgs__msg__BoundingBox2D__get_individual_type_description_source(NULL);
    sources[6] = *vision_msgs__msg__ObjectHypothesis__get_individual_type_description_source(NULL);
    sources[7] = *vision_msgs__msg__ObjectHypothesisWithPose__get_individual_type_description_source(NULL);
    sources[8] = *vision_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[9] = *vision_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
