// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:msg/ImuWithMagneticField.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/msg/detail/imu_with_magnetic_field__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__msg__ImuWithMagneticField__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0x72, 0x8c, 0xed, 0xfb, 0xb8, 0x88, 0xa6,
      0x13, 0xf2, 0xe8, 0xaf, 0x22, 0x30, 0x2c, 0xa2,
      0x2d, 0x63, 0xfd, 0x01, 0xf0, 0x80, 0x1a, 0xf9,
      0xad, 0x48, 0xbc, 0xec, 0xb0, 0xad, 0x63, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "sensor_msgs/msg/detail/magnetic_field__functions.h"
#include "sensor_msgs/msg/detail/imu__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Imu__EXPECTED_HASH = {1, {
    0x7d, 0x9a, 0x00, 0xff, 0x13, 0x10, 0x80, 0x89,
    0x7a, 0x5e, 0xc7, 0xe2, 0x6e, 0x31, 0x59, 0x54,
    0xb8, 0xea, 0xe3, 0x35, 0x3c, 0x3f, 0x99, 0x5c,
    0x55, 0xfa, 0xf7, 0x15, 0x74, 0x00, 0x0b, 0x5b,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__MagneticField__EXPECTED_HASH = {1, {
    0xe8, 0x0f, 0x32, 0xf5, 0x6a, 0x20, 0x48, 0x6c,
    0x99, 0x23, 0x00, 0x8f, 0xc1, 0xa1, 0xdb, 0x07,
    0xbb, 0xb2, 0x73, 0xcb, 0xbf, 0x6a, 0x5b, 0x3b,
    0xfa, 0x00, 0x83, 0x5e, 0xe0, 0x0e, 0x4d, 0xff,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char depthai_ros_msgs__msg__ImuWithMagneticField__TYPE_NAME[] = "depthai_ros_msgs/msg/ImuWithMagneticField";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char sensor_msgs__msg__Imu__TYPE_NAME[] = "sensor_msgs/msg/Imu";
static char sensor_msgs__msg__MagneticField__TYPE_NAME[] = "sensor_msgs/msg/MagneticField";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char depthai_ros_msgs__msg__ImuWithMagneticField__FIELD_NAME__header[] = "header";
static char depthai_ros_msgs__msg__ImuWithMagneticField__FIELD_NAME__imu[] = "imu";
static char depthai_ros_msgs__msg__ImuWithMagneticField__FIELD_NAME__field[] = "field";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__msg__ImuWithMagneticField__FIELDS[] = {
  {
    {depthai_ros_msgs__msg__ImuWithMagneticField__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__ImuWithMagneticField__FIELD_NAME__imu, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__Imu__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__ImuWithMagneticField__FIELD_NAME__field, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__MagneticField__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__msg__ImuWithMagneticField__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Imu__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__MagneticField__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__msg__ImuWithMagneticField__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__msg__ImuWithMagneticField__TYPE_NAME, 41, 41},
      {depthai_ros_msgs__msg__ImuWithMagneticField__FIELDS, 3, 3},
    },
    {depthai_ros_msgs__msg__ImuWithMagneticField__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Imu__EXPECTED_HASH, sensor_msgs__msg__Imu__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = sensor_msgs__msg__Imu__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__MagneticField__EXPECTED_HASH, sensor_msgs__msg__MagneticField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = sensor_msgs__msg__MagneticField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "sensor_msgs/Imu imu\n"
  "sensor_msgs/MagneticField field";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__msg__ImuWithMagneticField__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__msg__ImuWithMagneticField__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 74, 74},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__msg__ImuWithMagneticField__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__msg__ImuWithMagneticField__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[4] = *sensor_msgs__msg__Imu__get_individual_type_description_source(NULL);
    sources[5] = *sensor_msgs__msg__MagneticField__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
