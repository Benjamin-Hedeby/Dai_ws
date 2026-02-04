// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace depthai_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void NormalizedImageCrop_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) depthai_ros_msgs::srv::NormalizedImageCrop_Request(_init);
}

void NormalizedImageCrop_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<depthai_ros_msgs::srv::NormalizedImageCrop_Request *>(message_memory);
  typed_message->~NormalizedImageCrop_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NormalizedImageCrop_Request_message_member_array[2] = {
  {
    "top_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs::srv::NormalizedImageCrop_Request, top_left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bottom_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs::srv::NormalizedImageCrop_Request, bottom_right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NormalizedImageCrop_Request_message_members = {
  "depthai_ros_msgs::srv",  // message namespace
  "NormalizedImageCrop_Request",  // message name
  2,  // number of fields
  sizeof(depthai_ros_msgs::srv::NormalizedImageCrop_Request),
  false,  // has_any_key_member_
  NormalizedImageCrop_Request_message_member_array,  // message members
  NormalizedImageCrop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NormalizedImageCrop_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NormalizedImageCrop_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NormalizedImageCrop_Request_message_members,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace depthai_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop_Request>()
{
  return &::depthai_ros_msgs::srv::rosidl_typesupport_introspection_cpp::NormalizedImageCrop_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, depthai_ros_msgs, srv, NormalizedImageCrop_Request)() {
  return &::depthai_ros_msgs::srv::rosidl_typesupport_introspection_cpp::NormalizedImageCrop_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace depthai_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void NormalizedImageCrop_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) depthai_ros_msgs::srv::NormalizedImageCrop_Response(_init);
}

void NormalizedImageCrop_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<depthai_ros_msgs::srv::NormalizedImageCrop_Response *>(message_memory);
  typed_message->~NormalizedImageCrop_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NormalizedImageCrop_Response_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs::srv::NormalizedImageCrop_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NormalizedImageCrop_Response_message_members = {
  "depthai_ros_msgs::srv",  // message namespace
  "NormalizedImageCrop_Response",  // message name
  1,  // number of fields
  sizeof(depthai_ros_msgs::srv::NormalizedImageCrop_Response),
  false,  // has_any_key_member_
  NormalizedImageCrop_Response_message_member_array,  // message members
  NormalizedImageCrop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NormalizedImageCrop_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NormalizedImageCrop_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NormalizedImageCrop_Response_message_members,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace depthai_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop_Response>()
{
  return &::depthai_ros_msgs::srv::rosidl_typesupport_introspection_cpp::NormalizedImageCrop_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, depthai_ros_msgs, srv, NormalizedImageCrop_Response)() {
  return &::depthai_ros_msgs::srv::rosidl_typesupport_introspection_cpp::NormalizedImageCrop_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace depthai_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void NormalizedImageCrop_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) depthai_ros_msgs::srv::NormalizedImageCrop_Event(_init);
}

void NormalizedImageCrop_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<depthai_ros_msgs::srv::NormalizedImageCrop_Event *>(message_memory);
  typed_message->~NormalizedImageCrop_Event();
}

size_t size_function__NormalizedImageCrop_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<depthai_ros_msgs::srv::NormalizedImageCrop_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NormalizedImageCrop_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<depthai_ros_msgs::srv::NormalizedImageCrop_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__NormalizedImageCrop_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<depthai_ros_msgs::srv::NormalizedImageCrop_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__NormalizedImageCrop_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const depthai_ros_msgs::srv::NormalizedImageCrop_Request *>(
    get_const_function__NormalizedImageCrop_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<depthai_ros_msgs::srv::NormalizedImageCrop_Request *>(untyped_value);
  value = item;
}

void assign_function__NormalizedImageCrop_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<depthai_ros_msgs::srv::NormalizedImageCrop_Request *>(
    get_function__NormalizedImageCrop_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const depthai_ros_msgs::srv::NormalizedImageCrop_Request *>(untyped_value);
  item = value;
}

void resize_function__NormalizedImageCrop_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<depthai_ros_msgs::srv::NormalizedImageCrop_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NormalizedImageCrop_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<depthai_ros_msgs::srv::NormalizedImageCrop_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NormalizedImageCrop_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<depthai_ros_msgs::srv::NormalizedImageCrop_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__NormalizedImageCrop_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<depthai_ros_msgs::srv::NormalizedImageCrop_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__NormalizedImageCrop_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const depthai_ros_msgs::srv::NormalizedImageCrop_Response *>(
    get_const_function__NormalizedImageCrop_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<depthai_ros_msgs::srv::NormalizedImageCrop_Response *>(untyped_value);
  value = item;
}

void assign_function__NormalizedImageCrop_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<depthai_ros_msgs::srv::NormalizedImageCrop_Response *>(
    get_function__NormalizedImageCrop_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const depthai_ros_msgs::srv::NormalizedImageCrop_Response *>(untyped_value);
  item = value;
}

void resize_function__NormalizedImageCrop_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<depthai_ros_msgs::srv::NormalizedImageCrop_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NormalizedImageCrop_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs::srv::NormalizedImageCrop_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(depthai_ros_msgs::srv::NormalizedImageCrop_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__NormalizedImageCrop_Event__request,  // size() function pointer
    get_const_function__NormalizedImageCrop_Event__request,  // get_const(index) function pointer
    get_function__NormalizedImageCrop_Event__request,  // get(index) function pointer
    fetch_function__NormalizedImageCrop_Event__request,  // fetch(index, &value) function pointer
    assign_function__NormalizedImageCrop_Event__request,  // assign(index, value) function pointer
    resize_function__NormalizedImageCrop_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(depthai_ros_msgs::srv::NormalizedImageCrop_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__NormalizedImageCrop_Event__response,  // size() function pointer
    get_const_function__NormalizedImageCrop_Event__response,  // get_const(index) function pointer
    get_function__NormalizedImageCrop_Event__response,  // get(index) function pointer
    fetch_function__NormalizedImageCrop_Event__response,  // fetch(index, &value) function pointer
    assign_function__NormalizedImageCrop_Event__response,  // assign(index, value) function pointer
    resize_function__NormalizedImageCrop_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NormalizedImageCrop_Event_message_members = {
  "depthai_ros_msgs::srv",  // message namespace
  "NormalizedImageCrop_Event",  // message name
  3,  // number of fields
  sizeof(depthai_ros_msgs::srv::NormalizedImageCrop_Event),
  false,  // has_any_key_member_
  NormalizedImageCrop_Event_message_member_array,  // message members
  NormalizedImageCrop_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  NormalizedImageCrop_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NormalizedImageCrop_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NormalizedImageCrop_Event_message_members,
  get_message_typesupport_handle_function,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace depthai_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop_Event>()
{
  return &::depthai_ros_msgs::srv::rosidl_typesupport_introspection_cpp::NormalizedImageCrop_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, depthai_ros_msgs, srv, NormalizedImageCrop_Event)() {
  return &::depthai_ros_msgs::srv::rosidl_typesupport_introspection_cpp::NormalizedImageCrop_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"
// already included above
// #include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace depthai_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers NormalizedImageCrop_service_members = {
  "depthai_ros_msgs::srv",  // service namespace
  "NormalizedImageCrop",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t NormalizedImageCrop_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NormalizedImageCrop_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<depthai_ros_msgs::srv::NormalizedImageCrop>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<depthai_ros_msgs::srv::NormalizedImageCrop>,
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_hash,
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_description,
  &depthai_ros_msgs__srv__NormalizedImageCrop__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace depthai_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::depthai_ros_msgs::srv::rosidl_typesupport_introspection_cpp::NormalizedImageCrop_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::depthai_ros_msgs::srv::NormalizedImageCrop_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::depthai_ros_msgs::srv::NormalizedImageCrop_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::depthai_ros_msgs::srv::NormalizedImageCrop_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, depthai_ros_msgs, srv, NormalizedImageCrop)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<depthai_ros_msgs::srv::NormalizedImageCrop>();
}

#ifdef __cplusplus
}
#endif
