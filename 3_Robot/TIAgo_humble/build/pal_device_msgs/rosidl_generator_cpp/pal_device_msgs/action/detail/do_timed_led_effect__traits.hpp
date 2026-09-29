// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_device_msgs:action/DoTimedLedEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__TRAITS_HPP_
#define PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'params'
#include "pal_device_msgs/msg/detail/led_effect_params__traits.hpp"
// Member 'effect_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace pal_device_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DoTimedLedEffect_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: devices
  {
    if (msg.devices.size() == 0) {
      out << "devices: []";
    } else {
      out << "devices: [";
      size_t pending_items = msg.devices.size();
      for (auto item : msg.devices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: params
  {
    out << "params: ";
    to_flow_style_yaml(msg.params, out);
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
  const DoTimedLedEffect_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: devices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.devices.size() == 0) {
      out << "devices: []\n";
    } else {
      out << "devices:\n";
      for (auto item : msg.devices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params:\n";
    to_block_style_yaml(msg.params, out, indentation + 2);
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

inline std::string to_yaml(const DoTimedLedEffect_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::action::DoTimedLedEffect_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::action::DoTimedLedEffect_Goal & msg)
{
  return pal_device_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_Goal>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_Goal";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_Goal>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_Goal";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pal_device_msgs::action::DoTimedLedEffect_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pal_device_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DoTimedLedEffect_Result & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoTimedLedEffect_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoTimedLedEffect_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::action::DoTimedLedEffect_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::action::DoTimedLedEffect_Result & msg)
{
  return pal_device_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_Result>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_Result";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_Result>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_Result";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pal_device_msgs::action::DoTimedLedEffect_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pal_device_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DoTimedLedEffect_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoTimedLedEffect_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoTimedLedEffect_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::action::DoTimedLedEffect_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::action::DoTimedLedEffect_Feedback & msg)
{
  return pal_device_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_Feedback>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_Feedback";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_Feedback>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_Feedback";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pal_device_msgs::action::DoTimedLedEffect_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pal_device_msgs/action/detail/do_timed_led_effect__traits.hpp"

namespace pal_device_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DoTimedLedEffect_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoTimedLedEffect_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoTimedLedEffect_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request & msg)
{
  return pal_device_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_SendGoal_Request";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pal_device_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DoTimedLedEffect_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoTimedLedEffect_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoTimedLedEffect_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response & msg)
{
  return pal_device_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_SendGoal_Response";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_SendGoal>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_SendGoal";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_SendGoal>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_SendGoal";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>::value &&
    has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>::value &&
    has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pal_device_msgs::action::DoTimedLedEffect_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace pal_device_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DoTimedLedEffect_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoTimedLedEffect_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoTimedLedEffect_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::action::DoTimedLedEffect_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::action::DoTimedLedEffect_GetResult_Request & msg)
{
  return pal_device_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_GetResult_Request";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_GetResult_Request";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__traits.hpp"

namespace pal_device_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DoTimedLedEffect_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoTimedLedEffect_GetResult_Response & msg,
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

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoTimedLedEffect_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::action::DoTimedLedEffect_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::action::DoTimedLedEffect_GetResult_Response & msg)
{
  return pal_device_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_GetResult_Response";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_GetResult_Response";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_Result>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_Result>::value> {};

template<>
struct is_message<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_GetResult>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_GetResult";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_GetResult>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_GetResult";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>::value &&
    has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>::value &&
    has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pal_device_msgs::action::DoTimedLedEffect_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__traits.hpp"

namespace pal_device_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DoTimedLedEffect_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoTimedLedEffect_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoTimedLedEffect_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pal_device_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_device_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_device_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_device_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage & msg)
{
  return pal_device_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage>()
{
  return "pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage";
}

template<>
inline const char * name<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage>()
{
  return "pal_device_msgs/action/DoTimedLedEffect_FeedbackMessage";
}

template<>
struct has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pal_device_msgs::action::DoTimedLedEffect_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pal_device_msgs::action::DoTimedLedEffect_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pal_device_msgs::action::DoTimedLedEffect>
  : std::true_type
{
};

template<>
struct is_action_goal<pal_device_msgs::action::DoTimedLedEffect_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pal_device_msgs::action::DoTimedLedEffect_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pal_device_msgs::action::DoTimedLedEffect_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__TRAITS_HPP_
