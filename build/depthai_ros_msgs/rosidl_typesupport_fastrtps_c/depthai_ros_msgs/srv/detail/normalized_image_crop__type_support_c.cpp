// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "depthai_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose2_d__functions.h"  // bottom_right, top_left

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_serialize_geometry_msgs__msg__Pose2D(
  const geometry_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_deserialize_geometry_msgs__msg__Pose2D(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose2D * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_serialize_key_geometry_msgs__msg__Pose2D(
  const geometry_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D)();


using _NormalizedImageCrop_Request__ros_msg_type = depthai_ros_msgs__srv__NormalizedImageCrop_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: top_left
  {
    cdr_serialize_geometry_msgs__msg__Pose2D(
      &ros_message->top_left, cdr);
  }

  // Field name: bottom_right
  {
    cdr_serialize_geometry_msgs__msg__Pose2D(
      &ros_message->bottom_right, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  eprosima::fastcdr::Cdr & cdr,
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * ros_message)
{
  // Field name: top_left
  {
    cdr_deserialize_geometry_msgs__msg__Pose2D(cdr, &ros_message->top_left);
  }

  // Field name: bottom_right
  {
    cdr_deserialize_geometry_msgs__msg__Pose2D(cdr, &ros_message->bottom_right);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NormalizedImageCrop_Request__ros_msg_type * ros_message = static_cast<const _NormalizedImageCrop_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: top_left
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
    &(ros_message->top_left), current_alignment);

  // Field name: bottom_right
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
    &(ros_message->bottom_right), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: top_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bottom_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = depthai_ros_msgs__srv__NormalizedImageCrop_Request;
    is_plain =
      (
      offsetof(DataType, bottom_right) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: top_left
  {
    cdr_serialize_key_geometry_msgs__msg__Pose2D(
      &ros_message->top_left, cdr);
  }

  // Field name: bottom_right
  {
    cdr_serialize_key_geometry_msgs__msg__Pose2D(
      &ros_message->bottom_right, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NormalizedImageCrop_Request__ros_msg_type * ros_message = static_cast<const _NormalizedImageCrop_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: top_left
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose2D(
    &(ros_message->top_left), current_alignment);

  // Field name: bottom_right
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose2D(
    &(ros_message->bottom_right), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: top_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bottom_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = depthai_ros_msgs__srv__NormalizedImageCrop_Request;
    is_plain =
      (
      offsetof(DataType, bottom_right) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NormalizedImageCrop_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request * ros_message = static_cast<const depthai_ros_msgs__srv__NormalizedImageCrop_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Request(ros_message, cdr);
}

static bool _NormalizedImageCrop_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * ros_message = static_cast<depthai_ros_msgs__srv__NormalizedImageCrop_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Request(cdr, ros_message);
}

static uint32_t _NormalizedImageCrop_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
      untyped_ros_message, 0));
}

static size_t _NormalizedImageCrop_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NormalizedImageCrop_Request = {
  "depthai_ros_msgs::srv",
  "NormalizedImageCrop_Request",
  _NormalizedImageCrop_Request__cdr_serialize,
  _NormalizedImageCrop_Request__cdr_deserialize,
  _NormalizedImageCrop_Request__get_serialized_size,
  _NormalizedImageCrop_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NormalizedImageCrop_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NormalizedImageCrop_Request,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, srv, NormalizedImageCrop_Request)() {
  return &_NormalizedImageCrop_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "depthai_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NormalizedImageCrop_Response__ros_msg_type = depthai_ros_msgs__srv__NormalizedImageCrop_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  eprosima::fastcdr::Cdr & cdr,
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * ros_message)
{
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NormalizedImageCrop_Response__ros_msg_type * ros_message = static_cast<const _NormalizedImageCrop_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = depthai_ros_msgs__srv__NormalizedImageCrop_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NormalizedImageCrop_Response__ros_msg_type * ros_message = static_cast<const _NormalizedImageCrop_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = depthai_ros_msgs__srv__NormalizedImageCrop_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NormalizedImageCrop_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response * ros_message = static_cast<const depthai_ros_msgs__srv__NormalizedImageCrop_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Response(ros_message, cdr);
}

static bool _NormalizedImageCrop_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * ros_message = static_cast<depthai_ros_msgs__srv__NormalizedImageCrop_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Response(cdr, ros_message);
}

static uint32_t _NormalizedImageCrop_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
      untyped_ros_message, 0));
}

static size_t _NormalizedImageCrop_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NormalizedImageCrop_Response = {
  "depthai_ros_msgs::srv",
  "NormalizedImageCrop_Response",
  _NormalizedImageCrop_Response__cdr_serialize,
  _NormalizedImageCrop_Response__cdr_deserialize,
  _NormalizedImageCrop_Response__get_serialized_size,
  _NormalizedImageCrop_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NormalizedImageCrop_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NormalizedImageCrop_Response,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, srv, NormalizedImageCrop_Response)() {
  return &_NormalizedImageCrop_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "depthai_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  eprosima::fastcdr::Cdr & cdr,
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * ros_message);

size_t get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, srv, NormalizedImageCrop_Request)();

bool cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  eprosima::fastcdr::Cdr & cdr,
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * ros_message);

size_t get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, srv, NormalizedImageCrop_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _NormalizedImageCrop_Event__ros_msg_type = depthai_ros_msgs__srv__NormalizedImageCrop_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
  eprosima::fastcdr::Cdr & cdr,
  depthai_ros_msgs__srv__NormalizedImageCrop_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__fini(&ros_message->request);
    }
    if (!depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__fini(&ros_message->response);
    }
    if (!depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NormalizedImageCrop_Event__ros_msg_type * ros_message = static_cast<const _NormalizedImageCrop_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = depthai_ros_msgs__srv__NormalizedImageCrop_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_key_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
  const depthai_ros_msgs__srv__NormalizedImageCrop_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NormalizedImageCrop_Event__ros_msg_type * ros_message = static_cast<const _NormalizedImageCrop_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_depthai_ros_msgs__srv__NormalizedImageCrop_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = depthai_ros_msgs__srv__NormalizedImageCrop_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NormalizedImageCrop_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const depthai_ros_msgs__srv__NormalizedImageCrop_Event * ros_message = static_cast<const depthai_ros_msgs__srv__NormalizedImageCrop_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_depthai_ros_msgs__srv__NormalizedImageCrop_Event(ros_message, cdr);
}

static bool _NormalizedImageCrop_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  depthai_ros_msgs__srv__NormalizedImageCrop_Event * ros_message = static_cast<depthai_ros_msgs__srv__NormalizedImageCrop_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_depthai_ros_msgs__srv__NormalizedImageCrop_Event(cdr, ros_message);
}

static uint32_t _NormalizedImageCrop_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
      untyped_ros_message, 0));
}

static size_t _NormalizedImageCrop_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_depthai_ros_msgs__srv__NormalizedImageCrop_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NormalizedImageCrop_Event = {
  "depthai_ros_msgs::srv",
  "NormalizedImageCrop_Event",
  _NormalizedImageCrop_Event__cdr_serialize,
  _NormalizedImageCrop_Event__cdr_deserialize,
  _NormalizedImageCrop_Event__get_serialized_size,
  _NormalizedImageCrop_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NormalizedImageCrop_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NormalizedImageCrop_Event,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, srv, NormalizedImageCrop_Event)() {
  return &_NormalizedImageCrop_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "depthai_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "depthai_ros_msgs/srv/normalized_image_crop.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NormalizedImageCrop__callbacks = {
  "depthai_ros_msgs::srv",
  "NormalizedImageCrop",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, srv, NormalizedImageCrop_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, srv, NormalizedImageCrop_Response)(),
};

static rosidl_service_type_support_t NormalizedImageCrop__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NormalizedImageCrop__callbacks,
  get_service_typesupport_handle_function,
  &_NormalizedImageCrop_Request__type_support,
  &_NormalizedImageCrop_Response__type_support,
  &_NormalizedImageCrop_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    depthai_ros_msgs,
    srv,
    NormalizedImageCrop
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    depthai_ros_msgs,
    srv,
    NormalizedImageCrop
  ),
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, srv, NormalizedImageCrop)() {
  return &NormalizedImageCrop__handle;
}

#if defined(__cplusplus)
}
#endif
