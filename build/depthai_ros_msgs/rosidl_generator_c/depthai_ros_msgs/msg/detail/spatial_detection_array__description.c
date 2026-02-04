// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:msg/SpatialDetectionArray.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/msg/detail/spatial_detection_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__msg__SpatialDetectionArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0x58, 0x85, 0xac, 0x61, 0xc1, 0x9e, 0x4b,
      0xe3, 0xf6, 0x3e, 0xcd, 0x5a, 0x2d, 0x66, 0x99,
      0xa2, 0x92, 0x3f, 0xb4, 0x56, 0xef, 0x1f, 0x11,
      0x2d, 0xff, 0x50, 0x84, 0xed, 0xe2, 0x47, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "vision_msgs/msg/detail/object_hypothesis__functions.h"
#include "vision_msgs/msg/detail/pose2_d__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "vision_msgs/msg/detail/point2_d__functions.h"
#include "vision_msgs/msg/detail/bounding_box2_d__functions.h"
#include "depthai_ros_msgs/msg/detail/spatial_detection__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t depthai_ros_msgs__msg__SpatialDetection__EXPECTED_HASH = {1, {
    0x40, 0x19, 0xec, 0x29, 0x0c, 0xf5, 0x1c, 0x3d,
    0x7f, 0xa0, 0x3f, 0xb7, 0x0d, 0x4e, 0x2e, 0x98,
    0x18, 0x85, 0xa4, 0xa5, 0x8a, 0xb5, 0x10, 0xc3,
    0x92, 0x55, 0x55, 0xa2, 0x08, 0xf6, 0x70, 0xf1,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
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

static char depthai_ros_msgs__msg__SpatialDetectionArray__TYPE_NAME[] = "depthai_ros_msgs/msg/SpatialDetectionArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char depthai_ros_msgs__msg__SpatialDetection__TYPE_NAME[] = "depthai_ros_msgs/msg/SpatialDetection";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char vision_msgs__msg__BoundingBox2D__TYPE_NAME[] = "vision_msgs/msg/BoundingBox2D";
static char vision_msgs__msg__ObjectHypothesis__TYPE_NAME[] = "vision_msgs/msg/ObjectHypothesis";
static char vision_msgs__msg__Point2D__TYPE_NAME[] = "vision_msgs/msg/Point2D";
static char vision_msgs__msg__Pose2D__TYPE_NAME[] = "vision_msgs/msg/Pose2D";

// Define type names, field names, and default values
static char depthai_ros_msgs__msg__SpatialDetectionArray__FIELD_NAME__header[] = "header";
static char depthai_ros_msgs__msg__SpatialDetectionArray__FIELD_NAME__detections[] = "detections";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__msg__SpatialDetectionArray__FIELDS[] = {
  {
    {depthai_ros_msgs__msg__SpatialDetectionArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__SpatialDetectionArray__FIELD_NAME__detections, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {depthai_ros_msgs__msg__SpatialDetection__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__msg__SpatialDetectionArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__SpatialDetection__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
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
    {vision_msgs__msg__Point2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__Pose2D__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__msg__SpatialDetectionArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__msg__SpatialDetectionArray__TYPE_NAME, 42, 42},
      {depthai_ros_msgs__msg__SpatialDetectionArray__FIELDS, 2, 2},
    },
    {depthai_ros_msgs__msg__SpatialDetectionArray__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&depthai_ros_msgs__msg__SpatialDetection__EXPECTED_HASH, depthai_ros_msgs__msg__SpatialDetection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = depthai_ros_msgs__msg__SpatialDetection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__BoundingBox2D__EXPECTED_HASH, vision_msgs__msg__BoundingBox2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = vision_msgs__msg__BoundingBox2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__ObjectHypothesis__EXPECTED_HASH, vision_msgs__msg__ObjectHypothesis__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = vision_msgs__msg__ObjectHypothesis__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Point2D__EXPECTED_HASH, vision_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = vision_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Pose2D__EXPECTED_HASH, vision_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = vision_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A list of 2D detections, for a multi-object 2D detector along with 3D depth information.\n"
  "\n"
  "std_msgs/Header header\n"
  "# A list of the detected proposals. A multi-proposal detector might generate along with the 3D depth information\n"
  "#   this list with many candidate detections generated from a single input.\n"
  "SpatialDetection[] detections\n"
  "\n"
  "## These messages are created as close as possible to the official vision_msgs(http://wiki.ros.org/vision_msgs)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__msg__SpatialDetectionArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__msg__SpatialDetectionArray__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 446, 446},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__msg__SpatialDetectionArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__msg__SpatialDetectionArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *depthai_ros_msgs__msg__SpatialDetection__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[5] = *vision_msgs__msg__BoundingBox2D__get_individual_type_description_source(NULL);
    sources[6] = *vision_msgs__msg__ObjectHypothesis__get_individual_type_description_source(NULL);
    sources[7] = *vision_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[8] = *vision_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
