// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:msg/HandLandmarkArray.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/msg/detail/hand_landmark_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__msg__HandLandmarkArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xe3, 0xa8, 0xc9, 0x45, 0x1a, 0x61, 0x70,
      0xc8, 0xf2, 0x8c, 0xa8, 0x3b, 0x59, 0xca, 0xa4,
      0x68, 0x89, 0x3e, 0x54, 0xb7, 0x35, 0x20, 0x3b,
      0xeb, 0x12, 0xdd, 0x25, 0x8f, 0x8c, 0x43, 0x61,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "depthai_ros_msgs/msg/detail/hand_landmark__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t depthai_ros_msgs__msg__HandLandmark__EXPECTED_HASH = {1, {
    0xfb, 0xab, 0x74, 0xa0, 0x46, 0x6b, 0x3b, 0x31,
    0x6e, 0x2b, 0xf0, 0x77, 0xf3, 0xcb, 0x89, 0x0c,
    0xd8, 0x35, 0xec, 0xaa, 0x42, 0x88, 0xb7, 0x7e,
    0x82, 0xe8, 0x3f, 0x51, 0xc0, 0x4b, 0x5a, 0xaa,
  }};
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char depthai_ros_msgs__msg__HandLandmarkArray__TYPE_NAME[] = "depthai_ros_msgs/msg/HandLandmarkArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char depthai_ros_msgs__msg__HandLandmark__TYPE_NAME[] = "depthai_ros_msgs/msg/HandLandmark";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char depthai_ros_msgs__msg__HandLandmarkArray__FIELD_NAME__header[] = "header";
static char depthai_ros_msgs__msg__HandLandmarkArray__FIELD_NAME__landmarks[] = "landmarks";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__msg__HandLandmarkArray__FIELDS[] = {
  {
    {depthai_ros_msgs__msg__HandLandmarkArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__HandLandmarkArray__FIELD_NAME__landmarks, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {depthai_ros_msgs__msg__HandLandmark__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__msg__HandLandmarkArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__HandLandmark__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__msg__HandLandmarkArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__msg__HandLandmarkArray__TYPE_NAME, 38, 38},
      {depthai_ros_msgs__msg__HandLandmarkArray__FIELDS, 2, 2},
    },
    {depthai_ros_msgs__msg__HandLandmarkArray__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&depthai_ros_msgs__msg__HandLandmark__EXPECTED_HASH, depthai_ros_msgs__msg__HandLandmark__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = depthai_ros_msgs__msg__HandLandmark__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A list of hand landmark detections\n"
  "\n"
  "std_msgs/Header header\n"
  "# A list of the detected proposals. A multi-proposal detector might generate along with the 3D depth information\n"
  "#   this list with many candidate detections generated from a single input.\n"
  "HandLandmark[] landmarks";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__msg__HandLandmarkArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__msg__HandLandmarkArray__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 275, 275},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__msg__HandLandmarkArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__msg__HandLandmarkArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *depthai_ros_msgs__msg__HandLandmark__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
