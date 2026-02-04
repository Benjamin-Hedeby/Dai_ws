// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from depthai_ros_msgs:srv/TriggerNamed.idl
// generated code does not contain a copyright notice

#include "depthai_ros_msgs/srv/detail/trigger_named__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__srv__TriggerNamed__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x35, 0x21, 0x73, 0xb5, 0xba, 0x0c, 0x11,
      0x23, 0x5a, 0x35, 0x34, 0xd5, 0x89, 0x39, 0x04,
      0xff, 0x87, 0x3b, 0xc8, 0xec, 0xf7, 0x8e, 0x42,
      0x99, 0x5d, 0x40, 0x70, 0x9f, 0xb1, 0x0f, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__srv__TriggerNamed_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0x71, 0x92, 0xde, 0x4f, 0xe0, 0xb6, 0xd0,
      0x40, 0x25, 0x3a, 0x04, 0xa5, 0xc4, 0x2d, 0xf8,
      0x0f, 0x95, 0x21, 0xc8, 0x7f, 0x7a, 0x92, 0x60,
      0x42, 0x15, 0x9b, 0xaa, 0x7c, 0x18, 0xc3, 0x23,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__srv__TriggerNamed_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x08, 0xb9, 0xdf, 0x76, 0x70, 0x0f, 0x76,
      0x6e, 0x50, 0xd7, 0x74, 0xba, 0xe6, 0xcb, 0xa3,
      0xd7, 0x9e, 0x2c, 0x6a, 0xb1, 0x5e, 0x8f, 0x4c,
      0xa0, 0x9f, 0xee, 0x61, 0x7d, 0x0d, 0xe6, 0xaf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
const rosidl_type_hash_t *
depthai_ros_msgs__srv__TriggerNamed_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x68, 0x92, 0xe1, 0xa4, 0xb2, 0x53, 0x9b,
      0x97, 0xfc, 0x42, 0x51, 0x85, 0xf2, 0x3a, 0x03,
      0x19, 0x24, 0xb2, 0xd5, 0x44, 0xaa, 0x84, 0x47,
      0x84, 0xa9, 0x80, 0x1e, 0xce, 0x46, 0xe4, 0xf6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char depthai_ros_msgs__srv__TriggerNamed__TYPE_NAME[] = "depthai_ros_msgs/srv/TriggerNamed";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char depthai_ros_msgs__srv__TriggerNamed_Event__TYPE_NAME[] = "depthai_ros_msgs/srv/TriggerNamed_Event";
static char depthai_ros_msgs__srv__TriggerNamed_Request__TYPE_NAME[] = "depthai_ros_msgs/srv/TriggerNamed_Request";
static char depthai_ros_msgs__srv__TriggerNamed_Response__TYPE_NAME[] = "depthai_ros_msgs/srv/TriggerNamed_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char depthai_ros_msgs__srv__TriggerNamed__FIELD_NAME__request_message[] = "request_message";
static char depthai_ros_msgs__srv__TriggerNamed__FIELD_NAME__response_message[] = "response_message";
static char depthai_ros_msgs__srv__TriggerNamed__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__srv__TriggerNamed__FIELDS[] = {
  {
    {depthai_ros_msgs__srv__TriggerNamed__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {depthai_ros_msgs__srv__TriggerNamed_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {depthai_ros_msgs__srv__TriggerNamed_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {depthai_ros_msgs__srv__TriggerNamed_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__srv__TriggerNamed__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__srv__TriggerNamed__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__srv__TriggerNamed__TYPE_NAME, 33, 33},
      {depthai_ros_msgs__srv__TriggerNamed__FIELDS, 3, 3},
    },
    {depthai_ros_msgs__srv__TriggerNamed__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = depthai_ros_msgs__srv__TriggerNamed_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = depthai_ros_msgs__srv__TriggerNamed_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = depthai_ros_msgs__srv__TriggerNamed_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char depthai_ros_msgs__srv__TriggerNamed_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__srv__TriggerNamed_Request__FIELDS[] = {
  {
    {depthai_ros_msgs__srv__TriggerNamed_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__srv__TriggerNamed_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__srv__TriggerNamed_Request__TYPE_NAME, 41, 41},
      {depthai_ros_msgs__srv__TriggerNamed_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char depthai_ros_msgs__srv__TriggerNamed_Response__FIELD_NAME__success[] = "success";
static char depthai_ros_msgs__srv__TriggerNamed_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__srv__TriggerNamed_Response__FIELDS[] = {
  {
    {depthai_ros_msgs__srv__TriggerNamed_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__srv__TriggerNamed_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__srv__TriggerNamed_Response__TYPE_NAME, 42, 42},
      {depthai_ros_msgs__srv__TriggerNamed_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char depthai_ros_msgs__srv__TriggerNamed_Event__FIELD_NAME__info[] = "info";
static char depthai_ros_msgs__srv__TriggerNamed_Event__FIELD_NAME__request[] = "request";
static char depthai_ros_msgs__srv__TriggerNamed_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field depthai_ros_msgs__srv__TriggerNamed_Event__FIELDS[] = {
  {
    {depthai_ros_msgs__srv__TriggerNamed_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {depthai_ros_msgs__srv__TriggerNamed_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {depthai_ros_msgs__srv__TriggerNamed_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription depthai_ros_msgs__srv__TriggerNamed_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {depthai_ros_msgs__srv__TriggerNamed_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
depthai_ros_msgs__srv__TriggerNamed_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {depthai_ros_msgs__srv__TriggerNamed_Event__TYPE_NAME, 39, 39},
      {depthai_ros_msgs__srv__TriggerNamed_Event__FIELDS, 3, 3},
    },
    {depthai_ros_msgs__srv__TriggerNamed_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = depthai_ros_msgs__srv__TriggerNamed_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = depthai_ros_msgs__srv__TriggerNamed_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__srv__TriggerNamed__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__srv__TriggerNamed__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__srv__TriggerNamed_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__srv__TriggerNamed_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__srv__TriggerNamed_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__srv__TriggerNamed_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
depthai_ros_msgs__srv__TriggerNamed_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {depthai_ros_msgs__srv__TriggerNamed_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__srv__TriggerNamed__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__srv__TriggerNamed__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *depthai_ros_msgs__srv__TriggerNamed_Event__get_individual_type_description_source(NULL);
    sources[3] = *depthai_ros_msgs__srv__TriggerNamed_Request__get_individual_type_description_source(NULL);
    sources[4] = *depthai_ros_msgs__srv__TriggerNamed_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__srv__TriggerNamed_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__srv__TriggerNamed_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__srv__TriggerNamed_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__srv__TriggerNamed_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
depthai_ros_msgs__srv__TriggerNamed_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *depthai_ros_msgs__srv__TriggerNamed_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *depthai_ros_msgs__srv__TriggerNamed_Request__get_individual_type_description_source(NULL);
    sources[3] = *depthai_ros_msgs__srv__TriggerNamed_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
