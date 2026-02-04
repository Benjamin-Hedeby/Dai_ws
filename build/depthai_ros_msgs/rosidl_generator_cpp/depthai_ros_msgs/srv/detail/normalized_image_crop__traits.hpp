// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "depthai_ros_msgs/srv/normalized_image_crop.hpp"


#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'top_left'
// Member 'bottom_right'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace depthai_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const NormalizedImageCrop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: top_left
  {
    out << "top_left: ";
    to_flow_style_yaml(msg.top_left, out);
    out << ", ";
  }

  // member: bottom_right
  {
    out << "bottom_right: ";
    to_flow_style_yaml(msg.bottom_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NormalizedImageCrop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: top_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_left:\n";
    to_block_style_yaml(msg.top_left, out, indentation + 2);
  }

  // member: bottom_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_right:\n";
    to_block_style_yaml(msg.bottom_right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NormalizedImageCrop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace depthai_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use depthai_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const depthai_ros_msgs::srv::NormalizedImageCrop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::srv::NormalizedImageCrop_Request & msg)
{
  return depthai_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::srv::NormalizedImageCrop_Request>()
{
  return "depthai_ros_msgs::srv::NormalizedImageCrop_Request";
}

template<>
inline const char * name<depthai_ros_msgs::srv::NormalizedImageCrop_Request>()
{
  return "depthai_ros_msgs/srv/NormalizedImageCrop_Request";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::NormalizedImageCrop_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::NormalizedImageCrop_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<depthai_ros_msgs::srv::NormalizedImageCrop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace depthai_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const NormalizedImageCrop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NormalizedImageCrop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NormalizedImageCrop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace depthai_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use depthai_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const depthai_ros_msgs::srv::NormalizedImageCrop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::srv::NormalizedImageCrop_Response & msg)
{
  return depthai_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::srv::NormalizedImageCrop_Response>()
{
  return "depthai_ros_msgs::srv::NormalizedImageCrop_Response";
}

template<>
inline const char * name<depthai_ros_msgs::srv::NormalizedImageCrop_Response>()
{
  return "depthai_ros_msgs/srv/NormalizedImageCrop_Response";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::NormalizedImageCrop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::NormalizedImageCrop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<depthai_ros_msgs::srv::NormalizedImageCrop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace depthai_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const NormalizedImageCrop_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NormalizedImageCrop_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NormalizedImageCrop_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace depthai_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use depthai_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const depthai_ros_msgs::srv::NormalizedImageCrop_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::srv::NormalizedImageCrop_Event & msg)
{
  return depthai_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::srv::NormalizedImageCrop_Event>()
{
  return "depthai_ros_msgs::srv::NormalizedImageCrop_Event";
}

template<>
inline const char * name<depthai_ros_msgs::srv::NormalizedImageCrop_Event>()
{
  return "depthai_ros_msgs/srv/NormalizedImageCrop_Event";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::NormalizedImageCrop_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::NormalizedImageCrop_Event>
  : std::integral_constant<bool, has_bounded_size<depthai_ros_msgs::srv::NormalizedImageCrop_Request>::value && has_bounded_size<depthai_ros_msgs::srv::NormalizedImageCrop_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<depthai_ros_msgs::srv::NormalizedImageCrop_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<depthai_ros_msgs::srv::NormalizedImageCrop>()
{
  return "depthai_ros_msgs::srv::NormalizedImageCrop";
}

template<>
inline const char * name<depthai_ros_msgs::srv::NormalizedImageCrop>()
{
  return "depthai_ros_msgs/srv/NormalizedImageCrop";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::NormalizedImageCrop>
  : std::integral_constant<
    bool,
    has_fixed_size<depthai_ros_msgs::srv::NormalizedImageCrop_Request>::value &&
    has_fixed_size<depthai_ros_msgs::srv::NormalizedImageCrop_Response>::value
  >
{
};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::NormalizedImageCrop>
  : std::integral_constant<
    bool,
    has_bounded_size<depthai_ros_msgs::srv::NormalizedImageCrop_Request>::value &&
    has_bounded_size<depthai_ros_msgs::srv::NormalizedImageCrop_Response>::value
  >
{
};

template<>
struct is_service<depthai_ros_msgs::srv::NormalizedImageCrop>
  : std::true_type
{
};

template<>
struct is_service_request<depthai_ros_msgs::srv::NormalizedImageCrop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<depthai_ros_msgs::srv::NormalizedImageCrop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__TRAITS_HPP_
