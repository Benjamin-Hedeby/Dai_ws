// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "rosidl_typesupport_interface/macros.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__type_support.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.h"
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  depthai_ros_msgs,
  srv,
  NormalizedImageCrop
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  depthai_ros_msgs__srv__NormalizedImageCrop_Event * event_msg = (depthai_ros_msgs__srv__NormalizedImageCrop_Event *)(allocator->allocate(sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Event), allocator->state));
  if (!depthai_ros_msgs__srv__NormalizedImageCrop_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!depthai_ros_msgs__srv__NormalizedImageCrop_Request__copy((const depthai_ros_msgs__srv__NormalizedImageCrop_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!depthai_ros_msgs__srv__NormalizedImageCrop_Response__copy((const depthai_ros_msgs__srv__NormalizedImageCrop_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  depthai_ros_msgs,
  srv,
  NormalizedImageCrop
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  depthai_ros_msgs__srv__NormalizedImageCrop_Event * _event_msg = (depthai_ros_msgs__srv__NormalizedImageCrop_Event *)(event_msg);

  depthai_ros_msgs__srv__NormalizedImageCrop_Event__fini((depthai_ros_msgs__srv__NormalizedImageCrop_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
