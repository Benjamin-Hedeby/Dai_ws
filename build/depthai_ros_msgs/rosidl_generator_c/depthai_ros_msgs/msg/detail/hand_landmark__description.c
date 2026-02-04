// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/msg/detail/hand_landmark__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__msg__HandLandmark__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xab, 0x74, 0xa0, 0x46, 0x6b, 0x3b, 0x31,
      0x6e, 0x2b, 0xf0, 0x77, 0xf3, 0xcb, 0x89, 0x0c,
      0xd8, 0x35, 0xec, 0xaa, 0x42, 0x88, 0xb7, 0x7e,
      0x82, 0xe8, 0x3f, 0x51, 0xc0, 0x4b, 0x5a, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xd6, 0x8e, 0xfa, 0x5b, 0x46, 0xe7, 0x0f, 0x7b,
    0x16, 0xca, 0x23, 0x08, 0x54, 0x74, 0xfd, 0xac,
    0x5a, 0x44, 0xb6, 0x38, 0x78, 0x3e, 0xc4, 0x2f,
    0x66, 0x1d, 0xa6, 0x4d, 0xa4, 0x72, 0x4c, 0xcc,
  }};
#endif

static char depthai_ros_msgs__msg__HandLandmark__TYPE_NAME[] = "depthai_ros_msgs/msg/HandLandmark";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";

// Define type names, field names, and default values
static char depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__label[] = "label";
static char depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__lm_score[] = "lm_score";
static char depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__landmark[] = "landmark";
static char depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__position[] = "position";
static char depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__is_spatial[] = "is_spatial";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__msg__HandLandmark__FIELDS[] = {
  {
    {depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__label, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__lm_score, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__landmark, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__HandLandmark__FIELD_NAME__is_spatial, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__msg__HandLandmark__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__msg__HandLandmark__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__msg__HandLandmark__TYPE_NAME, 33, 33},
      {depthai_ros_msgs__msg__HandLandmark__FIELDS, 5, 5},
    },
    {depthai_ros_msgs__msg__HandLandmark__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# Center of the \n"
  "\n"
  "string label\n"
  "\n"
  "# Landmarks score.\n"
  "float32 lm_score\n"
  "\n"
  "geometry_msgs/Pose2D[] landmark\n"
  "\n"
  "geometry_msgs/Point position\n"
  "bool is_spatial";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__msg__HandLandmark__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__msg__HandLandmark__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__msg__HandLandmark__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__msg__HandLandmark__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
