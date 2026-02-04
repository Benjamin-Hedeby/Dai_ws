// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__msg__AutoFocusCtrl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x7e, 0xba, 0x09, 0x73, 0x94, 0x34, 0xa8,
      0x9e, 0x1a, 0x66, 0x3c, 0x8d, 0x4f, 0x4d, 0xbf,
      0x82, 0x47, 0x0e, 0xc3, 0x3d, 0xc8, 0xb2, 0xb8,
      0x27, 0x1d, 0x8b, 0x48, 0xb9, 0xee, 0x0a, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char depthai_ros_msgs__msg__AutoFocusCtrl__TYPE_NAME[] = "depthai_ros_msgs/msg/AutoFocusCtrl";

// Define type names, field names, and default values
static char depthai_ros_msgs__msg__AutoFocusCtrl__FIELD_NAME__auto_focus_mode[] = "auto_focus_mode";
static char depthai_ros_msgs__msg__AutoFocusCtrl__FIELD_NAME__trigger_auto_focus[] = "trigger_auto_focus";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__msg__AutoFocusCtrl__FIELDS[] = {
  {
    {depthai_ros_msgs__msg__AutoFocusCtrl__FIELD_NAME__auto_focus_mode, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__msg__AutoFocusCtrl__FIELD_NAME__trigger_auto_focus, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__msg__AutoFocusCtrl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__msg__AutoFocusCtrl__TYPE_NAME, 34, 34},
      {depthai_ros_msgs__msg__AutoFocusCtrl__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 AF_MODE_AUTO = 0\n"
  "uint8 AF_MODE_MACRO = 1\n"
  "uint8 AF_MODE_CONTINUOUS_VIDEO = 2\n"
  "uint8 AF_MODE_CONTINUOUS_PICTURE = 3\n"
  "uint8 AF_MODE_EDOF = 4\n"
  "\n"
  "uint8 auto_focus_mode\n"
  "\n"
  "bool trigger_auto_focus";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__msg__AutoFocusCtrl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__msg__AutoFocusCtrl__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 190, 190},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__msg__AutoFocusCtrl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__msg__AutoFocusCtrl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
