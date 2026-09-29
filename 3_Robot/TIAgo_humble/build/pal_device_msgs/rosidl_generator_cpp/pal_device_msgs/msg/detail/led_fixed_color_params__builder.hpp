// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedFixedColorParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FIXED_COLOR_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FIXED_COLOR_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_fixed_color_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedFixedColorParams_color
{
public:
  Init_LedFixedColorParams_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::msg::LedFixedColorParams color(::pal_device_msgs::msg::LedFixedColorParams::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFixedColorParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedFixedColorParams>()
{
  return pal_device_msgs::msg::builder::Init_LedFixedColorParams_color();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FIXED_COLOR_PARAMS__BUILDER_HPP_
