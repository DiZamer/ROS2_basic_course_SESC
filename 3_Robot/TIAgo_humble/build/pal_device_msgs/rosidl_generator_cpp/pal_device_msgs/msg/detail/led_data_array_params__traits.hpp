// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:msg/LedDataArrayParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__TRAITS_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/msg/detail/led_data_array_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace pal_device_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedDataArrayParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const LedDataArrayParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedDataArrayParams & msg, bool use_flow_style = false)
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
  const pal_device_msgs::msg::LedDataArrayParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::msg::LedDataArrayParams & msg)
{
  return pal_device_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::msg::LedDataArrayParams>()
{
  return "pal_device_msgs::msg::LedDataArrayParams";
}

template<>
inline const char * name<pal_device_msgs::msg::LedDataArrayParams>()
{
  return "pal_device_msgs/msg/LedDataArrayParams";
}

template<>
struct has_fixed_size<pal_device_msgs::msg::LedDataArrayParams>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pal_device_msgs::msg::LedDataArrayParams>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pal_device_msgs::msg::LedDataArrayParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__TRAITS_HPP_
