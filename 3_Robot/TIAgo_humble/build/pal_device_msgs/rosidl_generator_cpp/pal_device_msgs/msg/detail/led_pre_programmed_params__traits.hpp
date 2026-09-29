// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:msg/LedPreProgrammedParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__TRAITS_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/msg/detail/led_pre_programmed_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pal_device_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedPreProgrammedParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: preprogrammed_id
  {
    out << "preprogrammed_id: ";
    rosidl_generator_traits::value_to_yaml(msg.preprogrammed_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedPreProgrammedParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: preprogrammed_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preprogrammed_id: ";
    rosidl_generator_traits::value_to_yaml(msg.preprogrammed_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedPreProgrammedParams & msg, bool use_flow_style = false)
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
  const pal_device_msgs::msg::LedPreProgrammedParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::msg::LedPreProgrammedParams & msg)
{
  return pal_device_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::msg::LedPreProgrammedParams>()
{
  return "pal_device_msgs::msg::LedPreProgrammedParams";
}

template<>
inline const char * name<pal_device_msgs::msg::LedPreProgrammedParams>()
{
  return "pal_device_msgs/msg/LedPreProgrammedParams";
}

template<>
struct has_fixed_size<pal_device_msgs::msg::LedPreProgrammedParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pal_device_msgs::msg::LedPreProgrammedParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pal_device_msgs::msg::LedPreProgrammedParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__TRAITS_HPP_
