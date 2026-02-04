// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:srv/TriggerNamed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "depthai_ros_msgs/srv/trigger_named.hpp"


#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "depthai_ros_msgs/srv/detail/trigger_named__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace depthai_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerNamed_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerNamed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerNamed_Request & msg, bool use_flow_style = false)
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
  const depthai_ros_msgs::srv::TriggerNamed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::srv::TriggerNamed_Request & msg)
{
  return depthai_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::srv::TriggerNamed_Request>()
{
  return "depthai_ros_msgs::srv::TriggerNamed_Request";
}

template<>
inline const char * name<depthai_ros_msgs::srv::TriggerNamed_Request>()
{
  return "depthai_ros_msgs/srv/TriggerNamed_Request";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<depthai_ros_msgs::srv::TriggerNamed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace depthai_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerNamed_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerNamed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerNamed_Response & msg, bool use_flow_style = false)
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
  const depthai_ros_msgs::srv::TriggerNamed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::srv::TriggerNamed_Response & msg)
{
  return depthai_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::srv::TriggerNamed_Response>()
{
  return "depthai_ros_msgs::srv::TriggerNamed_Response";
}

template<>
inline const char * name<depthai_ros_msgs::srv::TriggerNamed_Response>()
{
  return "depthai_ros_msgs/srv/TriggerNamed_Response";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<depthai_ros_msgs::srv::TriggerNamed_Response>
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
  const TriggerNamed_Event & msg,
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
  const TriggerNamed_Event & msg,
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

inline std::string to_yaml(const TriggerNamed_Event & msg, bool use_flow_style = false)
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
  const depthai_ros_msgs::srv::TriggerNamed_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::srv::TriggerNamed_Event & msg)
{
  return depthai_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::srv::TriggerNamed_Event>()
{
  return "depthai_ros_msgs::srv::TriggerNamed_Event";
}

template<>
inline const char * name<depthai_ros_msgs::srv::TriggerNamed_Event>()
{
  return "depthai_ros_msgs/srv/TriggerNamed_Event";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Event>
  : std::integral_constant<bool, has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Request>::value && has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<depthai_ros_msgs::srv::TriggerNamed_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<depthai_ros_msgs::srv::TriggerNamed>()
{
  return "depthai_ros_msgs::srv::TriggerNamed";
}

template<>
inline const char * name<depthai_ros_msgs::srv::TriggerNamed>()
{
  return "depthai_ros_msgs/srv/TriggerNamed";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::TriggerNamed>
  : std::integral_constant<
    bool,
    has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Request>::value &&
    has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Response>::value
  >
{
};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::TriggerNamed>
  : std::integral_constant<
    bool,
    has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Request>::value &&
    has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Response>::value
  >
{
};

template<>
struct is_service<depthai_ros_msgs::srv::TriggerNamed>
  : std::true_type
{
};

template<>
struct is_service_request<depthai_ros_msgs::srv::TriggerNamed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<depthai_ros_msgs::srv::TriggerNamed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__TRAITS_HPP_
