// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from depthai_ros_msgs:msg/TrackDetection2DArray.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/track_detection2_d_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "depthai_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "depthai_ros_msgs/msg/detail/track_detection2_d_array__struct.h"
#include "depthai_ros_msgs/msg/detail/track_detection2_d_array__functions.h"
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

#include "depthai_ros_msgs/msg/detail/track_detection2_d__functions.h"  // detections
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_depthai_ros_msgs__msg__TrackDetection2D(
  const depthai_ros_msgs__msg__TrackDetection2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_depthai_ros_msgs__msg__TrackDetection2D(
  eprosima::fastcdr::Cdr & cdr,
  depthai_ros_msgs__msg__TrackDetection2D * ros_message);

size_t get_serialized_size_depthai_ros_msgs__msg__TrackDetection2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_depthai_ros_msgs__msg__TrackDetection2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_depthai_ros_msgs__msg__TrackDetection2D(
  const depthai_ros_msgs__msg__TrackDetection2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_depthai_ros_msgs__msg__TrackDetection2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_depthai_ros_msgs__msg__TrackDetection2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, msg, TrackDetection2D)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TrackDetection2DArray__ros_msg_type = depthai_ros_msgs__msg__TrackDetection2DArray;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_depthai_ros_msgs__msg__TrackDetection2DArray(
  const depthai_ros_msgs__msg__TrackDetection2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: detections
  {
    size_t size = ros_message->detections.size;
    auto array_ptr = ros_message->detections.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_depthai_ros_msgs__msg__TrackDetection2D(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_deserialize_depthai_ros_msgs__msg__TrackDetection2DArray(
  eprosima::fastcdr::Cdr & cdr,
  depthai_ros_msgs__msg__TrackDetection2DArray * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: detections
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->detections.data) {
      depthai_ros_msgs__msg__TrackDetection2D__Sequence__fini(&ros_message->detections);
    }
    if (!depthai_ros_msgs__msg__TrackDetection2D__Sequence__init(&ros_message->detections, size)) {
      fprintf(stderr, "failed to create array for field 'detections'");
      return false;
    }
    auto array_ptr = ros_message->detections.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_depthai_ros_msgs__msg__TrackDetection2D(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_depthai_ros_msgs__msg__TrackDetection2DArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackDetection2DArray__ros_msg_type * ros_message = static_cast<const _TrackDetection2DArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: detections
  {
    size_t array_size = ros_message->detections.size;
    auto array_ptr = ros_message->detections.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_depthai_ros_msgs__msg__TrackDetection2D(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_depthai_ros_msgs__msg__TrackDetection2DArray(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: detections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_depthai_ros_msgs__msg__TrackDetection2D(
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
    using DataType = depthai_ros_msgs__msg__TrackDetection2DArray;
    is_plain =
      (
      offsetof(DataType, detections) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_key_depthai_ros_msgs__msg__TrackDetection2DArray(
  const depthai_ros_msgs__msg__TrackDetection2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: detections
  {
    size_t size = ros_message->detections.size;
    auto array_ptr = ros_message->detections.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_depthai_ros_msgs__msg__TrackDetection2D(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_key_depthai_ros_msgs__msg__TrackDetection2DArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackDetection2DArray__ros_msg_type * ros_message = static_cast<const _TrackDetection2DArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: detections
  {
    size_t array_size = ros_message->detections.size;
    auto array_ptr = ros_message->detections.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_depthai_ros_msgs__msg__TrackDetection2D(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_key_depthai_ros_msgs__msg__TrackDetection2DArray(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: detections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_depthai_ros_msgs__msg__TrackDetection2D(
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
    using DataType = depthai_ros_msgs__msg__TrackDetection2DArray;
    is_plain =
      (
      offsetof(DataType, detections) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TrackDetection2DArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const depthai_ros_msgs__msg__TrackDetection2DArray * ros_message = static_cast<const depthai_ros_msgs__msg__TrackDetection2DArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_depthai_ros_msgs__msg__TrackDetection2DArray(ros_message, cdr);
}

static bool _TrackDetection2DArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  depthai_ros_msgs__msg__TrackDetection2DArray * ros_message = static_cast<depthai_ros_msgs__msg__TrackDetection2DArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_depthai_ros_msgs__msg__TrackDetection2DArray(cdr, ros_message);
}

static uint32_t _TrackDetection2DArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_depthai_ros_msgs__msg__TrackDetection2DArray(
      untyped_ros_message, 0));
}

static size_t _TrackDetection2DArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_depthai_ros_msgs__msg__TrackDetection2DArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrackDetection2DArray = {
  "depthai_ros_msgs::msg",
  "TrackDetection2DArray",
  _TrackDetection2DArray__cdr_serialize,
  _TrackDetection2DArray__cdr_deserialize,
  _TrackDetection2DArray__get_serialized_size,
  _TrackDetection2DArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TrackDetection2DArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrackDetection2DArray,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__msg__TrackDetection2DArray__get_type_hash,
  &depthai_ros_msgs__msg__TrackDetection2DArray__get_type_description,
  &depthai_ros_msgs__msg__TrackDetection2DArray__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, msg, TrackDetection2DArray)() {
  return &_TrackDetection2DArray__type_support;
}

#if defined(__cplusplus)
}
#endif
