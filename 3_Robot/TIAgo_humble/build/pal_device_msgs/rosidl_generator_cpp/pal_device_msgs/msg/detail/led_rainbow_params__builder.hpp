// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedRainbowParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_rainbow_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedRainbowParams_transition_duration
{
public:
  Init_LedRainbowParams_transition_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::msg::LedRainbowParams transition_duration(::pal_device_msgs::msg::LedRainbowParams::_transition_duration_type arg)
  {
    msg_.transition_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedRainbowParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedRainbowParams>()
{
  return pal_device_msgs::msg::builder::Init_LedRainbowParams_transition_duration();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__BUILDER_HPP_
