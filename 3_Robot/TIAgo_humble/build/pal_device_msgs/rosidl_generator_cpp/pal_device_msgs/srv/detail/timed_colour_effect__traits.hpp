// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:srv/TimedColourEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__TRAITS_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/srv/detail/timed_colour_effect__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'leds'
#include "pal_device_msgs/msg/detail/led_group__traits.hpp"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'effect_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace pal_device_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TimedColourEffect_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: leds
  {
    out << "leds: ";
    to_flow_style_yaml(msg.leds, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: effect_duration
  {
    out << "effect_duration: ";
    to_flow_style_yaml(msg.effect_duration, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimedColourEffect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: leds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leds:\n";
    to_block_style_yaml(msg.leds, out, indentation + 2);
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: effect_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effect_duration:\n";
    to_block_style_yaml(msg.effect_duration, out, indentation + 2);
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimedColourEffect_Request & msg, bool use_flow_style = false)
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
  const pal_device_msgs::srv::TimedColourEffect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::srv::TimedColourEffect_Request & msg)
{
  return pal_device_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::srv::TimedColourEffect_Request>()
{
  return "pal_device_msgs::srv::TimedColourEffect_Request";
}

template<>
inline const char * name<pal_device_msgs::srv::TimedColourEffect_Request>()
{
  return "pal_device_msgs/srv/TimedColourEffect_Request";
}

template<>
struct has_fixed_size<pal_device_msgs::srv::TimedColourEffect_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<pal_device_msgs::msg::LedGroup>::value && has_fixed_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::srv::TimedColourEffect_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<pal_device_msgs::msg::LedGroup>::value && has_bounded_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct is_message<pal_device_msgs::srv::TimedColourEffect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pal_device_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TimedColourEffect_Response & msg,
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
  const TimedColourEffect_Response & msg,
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

inline std::string to_yaml(const TimedColourEffect_Response & msg, bool use_flow_style = false)
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
  const pal_device_msgs::srv::TimedColourEffect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::srv::TimedColourEffect_Response & msg)
{
  return pal_device_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::srv::TimedColourEffect_Response>()
{
  return "pal_device_msgs::srv::TimedColourEffect_Response";
}

template<>
inline const char * name<pal_device_msgs::srv::TimedColourEffect_Response>()
{
  return "pal_device_msgs/srv/TimedColourEffect_Response";
}

template<>
struct has_fixed_size<pal_device_msgs::srv::TimedColourEffect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pal_device_msgs::srv::TimedColourEffect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pal_device_msgs::srv::TimedColourEffect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pal_device_msgs::srv::TimedColourEffect>()
{
  return "pal_device_msgs::srv::TimedColourEffect";
}

template<>
inline const char * name<pal_device_msgs::srv::TimedColourEffect>()
{
  return "pal_device_msgs/srv/TimedColourEffect";
}

template<>
struct has_fixed_size<pal_device_msgs::srv::TimedColourEffect>
  : std::integral_constant<
    bool,
    has_fixed_size<pal_device_msgs::srv::TimedColourEffect_Request>::value &&
    has_fixed_size<pal_device_msgs::srv::TimedColourEffect_Response>::value
  >
{
};

template<>
struct has_bounded_size<pal_device_msgs::srv::TimedColourEffect>
  : std::integral_constant<
    bool,
    has_bounded_size<pal_device_msgs::srv::TimedColourEffect_Request>::value &&
    has_bounded_size<pal_device_msgs::srv::TimedColourEffect_Response>::value
  >
{
};

template<>
struct is_service<pal_device_msgs::srv::TimedColourEffect>
  : std::true_type
{
};

template<>
struct is_service_request<pal_device_msgs::srv::TimedColourEffect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pal_device_msgs::srv::TimedColourEffect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__TRAITS_HPP_
