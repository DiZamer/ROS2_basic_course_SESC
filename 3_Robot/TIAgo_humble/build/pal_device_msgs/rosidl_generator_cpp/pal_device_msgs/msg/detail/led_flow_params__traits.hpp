// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:msg/LedFlowParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__TRAITS_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/msg/detail/led_flow_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'first_color'
// Member 'second_color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace pal_device_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedFlowParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_color
  {
    out << "first_color: ";
    to_flow_style_yaml(msg.first_color, out);
    out << ", ";
  }

  // member: second_color
  {
    out << "second_color: ";
    to_flow_style_yaml(msg.second_color, out);
    out << ", ";
  }

  // member: percentage
  {
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedFlowParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_color:\n";
    to_block_style_yaml(msg.first_color, out, indentation + 2);
  }

  // member: second_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second_color:\n";
    to_block_style_yaml(msg.second_color, out, indentation + 2);
  }

  // member: percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedFlowParams & msg, bool use_flow_style = false)
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
  const pal_device_msgs::msg::LedFlowParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::msg::LedFlowParams & msg)
{
  return pal_device_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::msg::LedFlowParams>()
{
  return "pal_device_msgs::msg::LedFlowParams";
}

template<>
inline const char * name<pal_device_msgs::msg::LedFlowParams>()
{
  return "pal_device_msgs/msg/LedFlowParams";
}

template<>
struct has_fixed_size<pal_device_msgs::msg::LedFlowParams>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::msg::LedFlowParams>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct is_message<pal_device_msgs::msg::LedFlowParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__TRAITS_HPP_
