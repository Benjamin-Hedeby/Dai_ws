// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/hand_landmark__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "depthai_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "depthai_ros_msgs/msg/detail/hand_landmark__struct.h"
#include "depthai_ros_msgs/msg/detail/hand_landmark__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // position
#include "geometry_msgs/msg/detail/pose2_d__functions.h"  // landmark
#include "rosidl_runtime_c/string.h"  // label
#include "rosidl_runtime_c/string_functions.h"  // label

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

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


using _HandLandmark__ros_msg_type = depthai_ros_msgs__msg__HandLandmark;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_depthai_ros_msgs__msg__HandLandmark(
  const depthai_ros_msgs__msg__HandLandmark * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: label
  {
    const rosidl_runtime_c__String * str = &ros_message->label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lm_score
  {
    cdr << ros_message->lm_score;
  }

  // Field name: landmark
  {
    size_t size = ros_message->landmark.size;
    auto array_ptr = ros_message->landmark.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Pose2D(
        &array_ptr[i], cdr);
    }
  }

  // Field name: position
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  // Field name: is_spatial
  {
    cdr << (ros_message->is_spatial ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_deserialize_depthai_ros_msgs__msg__HandLandmark(
  eprosima::fastcdr::Cdr & cdr,
  depthai_ros_msgs__msg__HandLandmark * ros_message)
{
  // Field name: label
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->label.data) {
      rosidl_runtime_c__String__init(&ros_message->label);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->label,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'label'\n");
      return false;
    }
  }

  // Field name: lm_score
  {
    cdr >> ros_message->lm_score;
  }

  // Field name: landmark
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->landmark.data) {
      geometry_msgs__msg__Pose2D__Sequence__fini(&ros_message->landmark);
    }
    if (!geometry_msgs__msg__Pose2D__Sequence__init(&ros_message->landmark, size)) {
      fprintf(stderr, "failed to create array for field 'landmark'");
      return false;
    }
    auto array_ptr = ros_message->landmark.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Pose2D(cdr, &array_ptr[i]);
    }
  }

  // Field name: position
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->position);
  }

  // Field name: is_spatial
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_spatial = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_depthai_ros_msgs__msg__HandLandmark(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandLandmark__ros_msg_type * ros_message = static_cast<const _HandLandmark__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->label.size + 1);

  // Field name: lm_score
  {
    size_t item_size = sizeof(ros_message->lm_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: landmark
  {
    size_t array_size = ros_message->landmark.size;
    auto array_ptr = ros_message->landmark.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: position
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  // Field name: is_spatial
  {
    size_t item_size = sizeof(ros_message->is_spatial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_depthai_ros_msgs__msg__HandLandmark(
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

  // Field name: label
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: lm_score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: landmark
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
        max_serialized_size_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: is_spatial
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = depthai_ros_msgs__msg__HandLandmark;
    is_plain =
      (
      offsetof(DataType, is_spatial) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
bool cdr_serialize_key_depthai_ros_msgs__msg__HandLandmark(
  const depthai_ros_msgs__msg__HandLandmark * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: label
  {
    const rosidl_runtime_c__String * str = &ros_message->label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lm_score
  {
    cdr << ros_message->lm_score;
  }

  // Field name: landmark
  {
    size_t size = ros_message->landmark.size;
    auto array_ptr = ros_message->landmark.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Pose2D(
        &array_ptr[i], cdr);
    }
  }

  // Field name: position
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  // Field name: is_spatial
  {
    cdr << (ros_message->is_spatial ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t get_serialized_size_key_depthai_ros_msgs__msg__HandLandmark(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandLandmark__ros_msg_type * ros_message = static_cast<const _HandLandmark__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->label.size + 1);

  // Field name: lm_score
  {
    size_t item_size = sizeof(ros_message->lm_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: landmark
  {
    size_t array_size = ros_message->landmark.size;
    auto array_ptr = ros_message->landmark.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose2D(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  // Field name: is_spatial
  {
    size_t item_size = sizeof(ros_message->is_spatial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_depthai_ros_msgs
size_t max_serialized_size_key_depthai_ros_msgs__msg__HandLandmark(
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
  // Field name: label
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: lm_score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: landmark
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
        max_serialized_size_key_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: is_spatial
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = depthai_ros_msgs__msg__HandLandmark;
    is_plain =
      (
      offsetof(DataType, is_spatial) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _HandLandmark__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const depthai_ros_msgs__msg__HandLandmark * ros_message = static_cast<const depthai_ros_msgs__msg__HandLandmark *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_depthai_ros_msgs__msg__HandLandmark(ros_message, cdr);
}

static bool _HandLandmark__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  depthai_ros_msgs__msg__HandLandmark * ros_message = static_cast<depthai_ros_msgs__msg__HandLandmark *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_depthai_ros_msgs__msg__HandLandmark(cdr, ros_message);
}

static uint32_t _HandLandmark__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_depthai_ros_msgs__msg__HandLandmark(
      untyped_ros_message, 0));
}

static size_t _HandLandmark__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_depthai_ros_msgs__msg__HandLandmark(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandLandmark = {
  "depthai_ros_msgs::msg",
  "HandLandmark",
  _HandLandmark__cdr_serialize,
  _HandLandmark__cdr_deserialize,
  _HandLandmark__get_serialized_size,
  _HandLandmark__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandLandmark__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandLandmark,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__msg__HandLandmark__get_type_hash,
  &depthai_ros_msgs__msg__HandLandmark__get_type_description,
  &depthai_ros_msgs__msg__HandLandmark__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, depthai_ros_msgs, msg, HandLandmark)() {
  return &_HandLandmark__type_support;
}

#if defined(__cplusplus)
}
#endif
