// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:msg/LedGroup.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__TRAITS_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/msg/detail/led_group__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pal_device_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedGroup & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_mask
  {
    out << "led_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.led_mask, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedGroup & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.led_mask, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedGroup & msg, bool use_flow_style = false)
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
  const pal_device_msgs::msg::LedGroup & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::msg::LedGroup & msg)
{
  return pal_device_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::msg::LedGroup>()
{
  return "pal_device_msgs::msg::LedGroup";
}

template<>
inline const char * name<pal_device_msgs::msg::LedGroup>()
{
  return "pal_device_msgs/msg/LedGroup";
}

template<>
struct has_fixed_size<pal_device_msgs::msg::LedGroup>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pal_device_msgs::msg::LedGroup>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pal_device_msgs::msg::LedGroup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__TRAITS_HPP_
