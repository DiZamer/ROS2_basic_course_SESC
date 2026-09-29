// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:srv/CancelEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__TRAITS_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/srv/detail/cancel_effect__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pal_device_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CancelEffect_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: effect_id
  {
    out << "effect_id: ";
    rosidl_generator_traits::value_to_yaml(msg.effect_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CancelEffect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: effect_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effect_id: ";
    rosidl_generator_traits::value_to_yaml(msg.effect_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CancelEffect_Request & msg, bool use_flow_style = false)
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

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::srv::CancelEffect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::srv::CancelEffect_Request & msg)
{
  return pal_device_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::srv::CancelEffect_Request>()
{
  return "pal_device_msgs::srv::CancelEffect_Request";
}

template<>
inline const char * name<pal_device_msgs::srv::CancelEffect_Request>()
{
  return "pal_device_msgs/srv/CancelEffect_Request";
}

template<>
struct has_fixed_size<pal_device_msgs::srv::CancelEffect_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pal_device_msgs::srv::CancelEffect_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pal_device_msgs::srv::CancelEffect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pal_device_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CancelEffect_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CancelEffect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CancelEffect_Response & msg, bool use_flow_style = false)
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

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::srv::CancelEffect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::srv::CancelEffect_Response & msg)
{
  return pal_device_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::srv::CancelEffect_Response>()
{
  return "pal_device_msgs::srv::CancelEffect_Response";
}

template<>
inline const char * name<pal_device_msgs::srv::CancelEffect_Response>()
{
  return "pal_device_msgs/srv/CancelEffect_Response";
}

template<>
struct has_fixed_size<pal_device_msgs::srv::CancelEffect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pal_device_msgs::srv::CancelEffect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pal_device_msgs::srv::CancelEffect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pal_device_msgs::srv::CancelEffect>()
{
  return "pal_device_msgs::srv::CancelEffect";
}

template<>
inline const char * name<pal_device_msgs::srv::CancelEffect>()
{
  return "pal_device_msgs/srv/CancelEffect";
}

template<>
struct has_fixed_size<pal_device_msgs::srv::CancelEffect>
  : std::integral_constant<
    bool,
    has_fixed_size<pal_device_msgs::srv::CancelEffect_Request>::value &&
    has_fixed_size<pal_device_msgs::srv::CancelEffect_Response>::value
  >
{
};

template<>
struct has_bounded_size<pal_device_msgs::srv::CancelEffect>
  : std::integral_constant<
    bool,
    has_bounded_size<pal_device_msgs::srv::CancelEffect_Request>::value &&
    has_bounded_size<pal_device_msgs::srv::CancelEffect_Response>::value
  >
{
};

template<>
struct is_service<pal_device_msgs::srv::CancelEffect>
  : std::true_type
{
};

template<>
struct is_service_request<pal_device_msgs::srv::CancelEffect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pal_device_msgs::srv::CancelEffect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__TRAITS_HPP_
