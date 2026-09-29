// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:msg/LedEffectParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__TRAITS_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/msg/detail/led_effect_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fixed_color'
#include "pal_device_msgs/msg/detail/led_fixed_color_params__traits.hpp"
// Member 'rainbow'
#include "pal_device_msgs/msg/detail/led_rainbow_params__traits.hpp"
// Member 'fade'
#include "pal_device_msgs/msg/detail/led_fade_params__traits.hpp"
// Member 'blink'
#include "pal_device_msgs/msg/detail/led_blink_params__traits.hpp"
// Member 'progress'
#include "pal_device_msgs/msg/detail/led_progress_params__traits.hpp"
// Member 'flow'
#include "pal_device_msgs/msg/detail/led_flow_params__traits.hpp"
// Member 'preprogrammed'
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__traits.hpp"
// Member 'effect_via_topic'
#include "pal_device_msgs/msg/detail/led_effect_via_topic_params__traits.hpp"
// Member 'data_array'
#include "pal_device_msgs/msg/detail/led_data_array_params__traits.hpp"

namespace pal_device_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedEffectParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: effect_type
  {
    out << "effect_type: ";
    rosidl_generator_traits::value_to_yaml(msg.effect_type, out);
    out << ", ";
  }

  // member: fixed_color
  {
    out << "fixed_color: ";
    to_flow_style_yaml(msg.fixed_color, out);
    out << ", ";
  }

  // member: rainbow
  {
    out << "rainbow: ";
    to_flow_style_yaml(msg.rainbow, out);
    out << ", ";
  }

  // member: fade
  {
    out << "fade: ";
    to_flow_style_yaml(msg.fade, out);
    out << ", ";
  }

  // member: blink
  {
    out << "blink: ";
    to_flow_style_yaml(msg.blink, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    to_flow_style_yaml(msg.progress, out);
    out << ", ";
  }

  // member: flow
  {
    out << "flow: ";
    to_flow_style_yaml(msg.flow, out);
    out << ", ";
  }

  // member: preprogrammed
  {
    out << "preprogrammed: ";
    to_flow_style_yaml(msg.preprogrammed, out);
    out << ", ";
  }

  // member: effect_via_topic
  {
    out << "effect_via_topic: ";
    to_flow_style_yaml(msg.effect_via_topic, out);
    out << ", ";
  }

  // member: data_array
  {
    out << "data_array: ";
    to_flow_style_yaml(msg.data_array, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedEffectParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: effect_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effect_type: ";
    rosidl_generator_traits::value_to_yaml(msg.effect_type, out);
    out << "\n";
  }

  // member: fixed_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_color:\n";
    to_block_style_yaml(msg.fixed_color, out, indentation + 2);
  }

  // member: rainbow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rainbow:\n";
    to_block_style_yaml(msg.rainbow, out, indentation + 2);
  }

  // member: fade
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fade:\n";
    to_block_style_yaml(msg.fade, out, indentation + 2);
  }

  // member: blink
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blink:\n";
    to_block_style_yaml(msg.blink, out, indentation + 2);
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress:\n";
    to_block_style_yaml(msg.progress, out, indentation + 2);
  }

  // member: flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flow:\n";
    to_block_style_yaml(msg.flow, out, indentation + 2);
  }

  // member: preprogrammed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preprogrammed:\n";
    to_block_style_yaml(msg.preprogrammed, out, indentation + 2);
  }

  // member: effect_via_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effect_via_topic:\n";
    to_block_style_yaml(msg.effect_via_topic, out, indentation + 2);
  }

  // member: data_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_array:\n";
    to_block_style_yaml(msg.data_array, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedEffectParams & msg, bool use_flow_style = false)
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
  const pal_device_msgs::msg::LedEffectParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::msg::LedEffectParams & msg)
{
  return pal_device_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::msg::LedEffectParams>()
{
  return "pal_device_msgs::msg::LedEffectParams";
}

template<>
inline const char * name<pal_device_msgs::msg::LedEffectParams>()
{
  return "pal_device_msgs/msg/LedEffectParams";
}

template<>
struct has_fixed_size<pal_device_msgs::msg::LedEffectParams>
  : std::integral_constant<bool, has_fixed_size<pal_device_msgs::msg::LedBlinkParams>::value && has_fixed_size<pal_device_msgs::msg::LedDataArrayParams>::value && has_fixed_size<pal_device_msgs::msg::LedEffectViaTopicParams>::value && has_fixed_size<pal_device_msgs::msg::LedFadeParams>::value && has_fixed_size<pal_device_msgs::msg::LedFixedColorParams>::value && has_fixed_size<pal_device_msgs::msg::LedFlowParams>::value && has_fixed_size<pal_device_msgs::msg::LedPreProgrammedParams>::value && has_fixed_size<pal_device_msgs::msg::LedProgressParams>::value && has_fixed_size<pal_device_msgs::msg::LedRainbowParams>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::msg::LedEffectParams>
  : std::integral_constant<bool, has_bounded_size<pal_device_msgs::msg::LedBlinkParams>::value && has_bounded_size<pal_device_msgs::msg::LedDataArrayParams>::value && has_bounded_size<pal_device_msgs::msg::LedEffectViaTopicParams>::value && has_bounded_size<pal_device_msgs::msg::LedFadeParams>::value && has_bounded_size<pal_device_msgs::msg::LedFixedColorParams>::value && has_bounded_size<pal_device_msgs::msg::LedFlowParams>::value && has_bounded_size<pal_device_msgs::msg::LedPreProgrammedParams>::value && has_bounded_size<pal_device_msgs::msg::LedProgressParams>::value && has_bounded_size<pal_device_msgs::msg::LedRainbowParams>::value> {};

template<>
struct is_message<pal_device_msgs::msg::LedEffectParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__TRAITS_HPP_
