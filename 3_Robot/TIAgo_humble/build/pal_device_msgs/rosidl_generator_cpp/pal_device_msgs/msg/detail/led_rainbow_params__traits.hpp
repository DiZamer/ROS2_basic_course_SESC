// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:msg/LedRainbowParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__TRAITS_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/msg/detail/led_rainbow_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'transition_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace pal_device_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedRainbowParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: transition_duration
  {
    out << "transition_duration: ";
    to_flow_style_yaml(msg.transition_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedRainbowParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transition_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transition_duration:\n";
    to_block_style_yaml(msg.transition_duration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedRainbowParams & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::msg::LedRainbowParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::msg::LedRainbowParams & msg)
{
  return pal_device_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::msg::LedRainbowParams>()
{
  return "pal_device_msgs::msg::LedRainbowParams";
}

template<>
inline const char * name<pal_device_msgs::msg::LedRainbowParams>()
{
  return "pal_device_msgs/msg/LedRainbowParams";
}

template<>
struct has_fixed_size<pal_device_msgs::msg::LedRainbowParams>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::msg::LedRainbowParams>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<pal_device_msgs::msg::LedRainbowParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__TRAITS_HPP_
