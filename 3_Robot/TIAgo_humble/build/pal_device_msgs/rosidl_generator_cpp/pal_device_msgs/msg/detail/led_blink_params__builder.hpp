// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedBlinkParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_BLINK_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_BLINK_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_blink_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedBlinkParams_second_color_duration
{
public:
  explicit Init_LedBlinkParams_second_color_duration(::pal_device_msgs::msg::LedBlinkParams & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::msg::LedBlinkParams second_color_duration(::pal_device_msgs::msg::LedBlinkParams::_second_color_duration_type arg)
  {
    msg_.second_color_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedBlinkParams msg_;
};

class Init_LedBlinkParams_first_color_duration
{
public:
  explicit Init_LedBlinkParams_first_color_duration(::pal_device_msgs::msg::LedBlinkParams & msg)
  : msg_(msg)
  {}
  Init_LedBlinkParams_second_color_duration first_color_duration(::pal_device_msgs::msg::LedBlinkParams::_first_color_duration_type arg)
  {
    msg_.first_color_duration = std::move(arg);
    return Init_LedBlinkParams_second_color_duration(msg_);
  }

private:
  ::pal_device_msgs::msg::LedBlinkParams msg_;
};

class Init_LedBlinkParams_second_color
{
public:
  explicit Init_LedBlinkParams_second_color(::pal_device_msgs::msg::LedBlinkParams & msg)
  : msg_(msg)
  {}
  Init_LedBlinkParams_first_color_duration second_color(::pal_device_msgs::msg::LedBlinkParams::_second_color_type arg)
  {
    msg_.second_color = std::move(arg);
    return Init_LedBlinkParams_first_color_duration(msg_);
  }

private:
  ::pal_device_msgs::msg::LedBlinkParams msg_;
};

class Init_LedBlinkParams_first_color
{
public:
  Init_LedBlinkParams_first_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedBlinkParams_second_color first_color(::pal_device_msgs::msg::LedBlinkParams::_first_color_type arg)
  {
    msg_.first_color = std::move(arg);
    return Init_LedBlinkParams_second_color(msg_);
  }

private:
  ::pal_device_msgs::msg::LedBlinkParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedBlinkParams>()
{
  return pal_device_msgs::msg::builder::Init_LedBlinkParams_first_color();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_BLINK_PARAMS__BUILDER_HPP_
