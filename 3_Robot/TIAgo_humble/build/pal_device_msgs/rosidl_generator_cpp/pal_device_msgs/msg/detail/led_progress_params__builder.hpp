// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedProgressParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_PROGRESS_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_PROGRESS_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_progress_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedProgressParams_led_offset
{
public:
  explicit Init_LedProgressParams_led_offset(::pal_device_msgs::msg::LedProgressParams & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::msg::LedProgressParams led_offset(::pal_device_msgs::msg::LedProgressParams::_led_offset_type arg)
  {
    msg_.led_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedProgressParams msg_;
};

class Init_LedProgressParams_percentage
{
public:
  explicit Init_LedProgressParams_percentage(::pal_device_msgs::msg::LedProgressParams & msg)
  : msg_(msg)
  {}
  Init_LedProgressParams_led_offset percentage(::pal_device_msgs::msg::LedProgressParams::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return Init_LedProgressParams_led_offset(msg_);
  }

private:
  ::pal_device_msgs::msg::LedProgressParams msg_;
};

class Init_LedProgressParams_second_color
{
public:
  explicit Init_LedProgressParams_second_color(::pal_device_msgs::msg::LedProgressParams & msg)
  : msg_(msg)
  {}
  Init_LedProgressParams_percentage second_color(::pal_device_msgs::msg::LedProgressParams::_second_color_type arg)
  {
    msg_.second_color = std::move(arg);
    return Init_LedProgressParams_percentage(msg_);
  }

private:
  ::pal_device_msgs::msg::LedProgressParams msg_;
};

class Init_LedProgressParams_first_color
{
public:
  Init_LedProgressParams_first_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedProgressParams_second_color first_color(::pal_device_msgs::msg::LedProgressParams::_first_color_type arg)
  {
    msg_.first_color = std::move(arg);
    return Init_LedProgressParams_second_color(msg_);
  }

private:
  ::pal_device_msgs::msg::LedProgressParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedProgressParams>()
{
  return pal_device_msgs::msg::builder::Init_LedProgressParams_first_color();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_PROGRESS_PARAMS__BUILDER_HPP_
