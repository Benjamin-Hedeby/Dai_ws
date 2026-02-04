// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:msg/SpatialDetection.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/msg/detail/spatial_detection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__msg__SpatialDetection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0x19, 0xec, 0x29, 0x0c, 0xf5, 0x1c, 0x3d,
      0x7f, 0xa0, 0x3f, 0xb7, 0x0d, 0x4e, 0x2e, 0x98,
      0x18, 0x85, 0xa4, 0xa5, 0x8a, 0xb5, 0x10, 0xc3,
      0x92, 0x55, 0x55, 0xa2, 0x08, 0xf6, 0x70, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "vision_msgs/msg/detail/object_hypothesis__functions.h"
#include "vision_msgs/msg/detail/pose2_d__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "vision_msgs/msg/detail/point2_d__functions.h"
#include "vision_msgs/msg/detail/bounding_box2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
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

static char depthai_ros_msgs__msg__SpatialDetection__TYPE_NAME[] = "depthai_ros_msgs/msg/SpatialDetection";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char vision_msgs__msg__BoundingBox2D__TYPE_NAME[] = "vision_msgs/msg/BoundingBox2D";
static char vision_msgs__msg__ObjectHypothesis__TYPE_NAME[] = "vision_msgs/msg/ObjectHypothesis";
static char vision_msgs__msg__Point2D__TYPE_NAME[] = "vision_msgs/msg/Point2D";
static char vision_msgs__msg__Pose2D__TYPE_NAME[] = "vision_msgs/msg/Pose2D";

// Define type names, field names, and default values
static char depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__results[] = "results";
static char depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__bbox[] = "bbox";
static char depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__position[] = "position";
static char depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__is_tracking[] = "is_tracking";
static char depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__tracking_id[] = "tracking_id";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__msg__SpatialDetection__FIELDS[] = {
  {
    {depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__results, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {vision_msgs__msg__ObjectHypothesis__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__bbox, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vision_msgs__msg__BoundingBox2D__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__is_tracking, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__SpatialDetection__FIELD_NAME__tracking_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__msg__SpatialDetection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
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
depthai_ros_msgs__msg__SpatialDetection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__msg__SpatialDetection__TYPE_NAME, 37, 37},
      {depthai_ros_msgs__msg__SpatialDetection__FIELDS, 5, 5},
    },
    {depthai_ros_msgs__msg__SpatialDetection__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__BoundingBox2D__EXPECTED_HASH, vision_msgs__msg__BoundingBox2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = vision_msgs__msg__BoundingBox2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__ObjectHypothesis__EXPECTED_HASH, vision_msgs__msg__ObjectHypothesis__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = vision_msgs__msg__ObjectHypothesis__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Point2D__EXPECTED_HASH, vision_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = vision_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Pose2D__EXPECTED_HASH, vision_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = vision_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# Class probabilities\n"
  "vision_msgs/ObjectHypothesis[] results\n"
  "\n"
  "# 2D bounding box surrounding the object.\n"
  "vision_msgs/BoundingBox2D bbox\n"
  "\n"
  "# Center of the detected object in meters \n"
  "geometry_msgs/Point position\n"
  "\n"
  "# If true, this message contains object tracking information.\n"
  "bool is_tracking\n"
  "\n"
  "# ID used for consistency across multiple detection messages. This value will\n"
  "# likely differ from the id field set in each individual ObjectHypothesis.\n"
  "# If you set this field, be sure to also set is_tracking to True.\n"
  "string tracking_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__msg__SpatialDetection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__msg__SpatialDetection__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 527, 527},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__msg__SpatialDetection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__msg__SpatialDetection__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *vision_msgs__msg__BoundingBox2D__get_individual_type_description_source(NULL);
    sources[3] = *vision_msgs__msg__ObjectHypothesis__get_individual_type_description_source(NULL);
    sources[4] = *vision_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[5] = *vision_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
