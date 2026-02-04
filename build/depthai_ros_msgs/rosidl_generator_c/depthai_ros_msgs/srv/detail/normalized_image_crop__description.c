// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__srv__NormalizedImageCrop__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x66, 0x86, 0xf3, 0xc4, 0x71, 0xb4, 0x90,
      0x89, 0x55, 0xce, 0xd5, 0x81, 0xb0, 0xb7, 0x73,
      0x4f, 0xc3, 0x76, 0xf7, 0x3d, 0xd5, 0xf2, 0x8f,
      0xfd, 0xed, 0xf6, 0x4f, 0xe6, 0x66, 0x72, 0x29,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x74, 0xee, 0xd0, 0xac, 0xd8, 0x5d, 0xb0,
      0xa3, 0x6d, 0xa8, 0x34, 0xff, 0x26, 0x23, 0x9c,
      0xc5, 0x11, 0x2b, 0x34, 0xef, 0xee, 0xba, 0x09,
      0x98, 0x6e, 0xa9, 0xe5, 0xc6, 0x15, 0x06, 0x7c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0xf8, 0x9e, 0x17, 0xee, 0xb1, 0x16, 0x3b,
      0x8a, 0xc0, 0x4c, 0x52, 0x5b, 0x71, 0xb7, 0x35,
      0x67, 0xf3, 0x19, 0xc2, 0x34, 0x2f, 0xbf, 0x22,
      0x3d, 0x46, 0x8d, 0x54, 0xf2, 0x5d, 0x53, 0x05,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0xa5, 0xcb, 0x29, 0xc7, 0xf6, 0x44, 0x69,
      0x2d, 0x67, 0x68, 0x95, 0xfe, 0x0c, 0xcc, 0x08,
      0x6d, 0xa3, 0xe0, 0x56, 0x57, 0x68, 0xa9, 0xe0,
      0xe2, 0x83, 0x3b, 0x5a, 0x89, 0x19, 0xcd, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xd6, 0x8e, 0xfa, 0x5b, 0x46, 0xe7, 0x0f, 0x7b,
    0x16, 0xca, 0x23, 0x08, 0x54, 0x74, 0xfd, 0xac,
    0x5a, 0x44, 0xb6, 0x38, 0x78, 0x3e, 0xc4, 0x2f,
    0x66, 0x1d, 0xa6, 0x4d, 0xa4, 0x72, 0x4c, 0xcc,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char depthai_ros_msgs__srv__NormalizedImageCrop__TYPE_NAME[] = "depthai_ros_msgs/srv/NormalizedImageCrop";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char depthai_ros_msgs__srv__NormalizedImageCrop_Event__TYPE_NAME[] = "depthai_ros_msgs/srv/NormalizedImageCrop_Event";
static char depthai_ros_msgs__srv__NormalizedImageCrop_Request__TYPE_NAME[] = "depthai_ros_msgs/srv/NormalizedImageCrop_Request";
static char depthai_ros_msgs__srv__NormalizedImageCrop_Response__TYPE_NAME[] = "depthai_ros_msgs/srv/NormalizedImageCrop_Response";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char depthai_ros_msgs__srv__NormalizedImageCrop__FIELD_NAME__request_message[] = "request_message";
static char depthai_ros_msgs__srv__NormalizedImageCrop__FIELD_NAME__response_message[] = "response_message";
static char depthai_ros_msgs__srv__NormalizedImageCrop__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__srv__NormalizedImageCrop__FIELDS[] = {
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {depthai_ros_msgs__srv__NormalizedImageCrop_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {depthai_ros_msgs__srv__NormalizedImageCrop_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {depthai_ros_msgs__srv__NormalizedImageCrop_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__srv__NormalizedImageCrop__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__srv__NormalizedImageCrop__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__srv__NormalizedImageCrop__TYPE_NAME, 40, 40},
      {depthai_ros_msgs__srv__NormalizedImageCrop__FIELDS, 3, 3},
    },
    {depthai_ros_msgs__srv__NormalizedImageCrop__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char depthai_ros_msgs__srv__NormalizedImageCrop_Request__FIELD_NAME__top_left[] = "top_left";
static char depthai_ros_msgs__srv__NormalizedImageCrop_Request__FIELD_NAME__bottom_right[] = "bottom_right";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__srv__NormalizedImageCrop_Request__FIELDS[] = {
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Request__FIELD_NAME__top_left, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Request__FIELD_NAME__bottom_right, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__srv__NormalizedImageCrop_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__srv__NormalizedImageCrop_Request__TYPE_NAME, 48, 48},
      {depthai_ros_msgs__srv__NormalizedImageCrop_Request__FIELDS, 2, 2},
    },
    {depthai_ros_msgs__srv__NormalizedImageCrop_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char depthai_ros_msgs__srv__NormalizedImageCrop_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__srv__NormalizedImageCrop_Response__FIELDS[] = {
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__srv__NormalizedImageCrop_Response__TYPE_NAME, 49, 49},
      {depthai_ros_msgs__srv__NormalizedImageCrop_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char depthai_ros_msgs__srv__NormalizedImageCrop_Event__FIELD_NAME__info[] = "info";
static char depthai_ros_msgs__srv__NormalizedImageCrop_Event__FIELD_NAME__request[] = "request";
static char depthai_ros_msgs__srv__NormalizedImageCrop_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__srv__NormalizedImageCrop_Event__FIELDS[] = {
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {depthai_ros_msgs__srv__NormalizedImageCrop_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {depthai_ros_msgs__srv__NormalizedImageCrop_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__srv__NormalizedImageCrop_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__srv__NormalizedImageCrop_Event__TYPE_NAME, 46, 46},
      {depthai_ros_msgs__srv__NormalizedImageCrop_Event__FIELDS, 3, 3},
    },
    {depthai_ros_msgs__srv__NormalizedImageCrop_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Pose2D top_left\n"
  "geometry_msgs/Pose2D bottom_right\n"
  "---\n"
  "int64 status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__srv__NormalizedImageCrop__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__srv__NormalizedImageCrop__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 80, 80},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__srv__NormalizedImageCrop_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__srv__NormalizedImageCrop__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__srv__NormalizedImageCrop__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_individual_type_description_source(NULL);
    sources[3] = *depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_individual_type_description_source(NULL);
    sources[4] = *depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_individual_type_description_source(NULL);
    sources[3] = *depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
