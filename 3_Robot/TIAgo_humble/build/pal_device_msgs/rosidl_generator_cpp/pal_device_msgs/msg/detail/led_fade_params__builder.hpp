// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedFadeParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_fade_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedFadeParams_reverse_fade
{
public:
  explicit Init_LedFadeParams_reverse_fade(::pal_device_msgs::msg::LedFadeParams & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::msg::LedFadeParams reverse_fade(::pal_device_msgs::msg::LedFadeParams::_reverse_fade_type arg)
  {
    msg_.reverse_fade = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFadeParams msg_;
};

class Init_LedFadeParams_transition_duration
{
public:
  explicit Init_LedFadeParams_transition_duration(::pal_device_msgs::msg::LedFadeParams & msg)
  : msg_(msg)
  {}
  Init_LedFadeParams_reverse_fade transition_duration(::pal_device_msgs::msg::LedFadeParams::_transition_duration_type arg)
  {
    msg_.transition_duration = std::move(arg);
    return Init_LedFadeParams_reverse_fade(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFadeParams msg_;
};

class Init_LedFadeParams_second_color
{
public:
  explicit Init_LedFadeParams_second_color(::pal_device_msgs::msg::LedFadeParams & msg)
  : msg_(msg)
  {}
  Init_LedFadeParams_transition_duration second_color(::pal_device_msgs::msg::LedFadeParams::_second_color_type arg)
  {
    msg_.second_color = std::move(arg);
    return Init_LedFadeParams_transition_duration(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFadeParams msg_;
};

class Init_LedFadeParams_first_color
{
public:
  Init_LedFadeParams_first_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedFadeParams_second_color first_color(::pal_device_msgs::msg::LedFadeParams::_first_color_type arg)
  {
    msg_.first_color = std::move(arg);
    return Init_LedFadeParams_second_color(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFadeParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedFadeParams>()
{
  return pal_device_msgs::msg::builder::Init_LedFadeParams_first_color();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__BUILDER_HPP_
