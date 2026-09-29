// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedFlowParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_flow_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedFlowParams_velocity
{
public:
  explicit Init_LedFlowParams_velocity(::pal_device_msgs::msg::LedFlowParams & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::msg::LedFlowParams velocity(::pal_device_msgs::msg::LedFlowParams::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFlowParams msg_;
};

class Init_LedFlowParams_percentage
{
public:
  explicit Init_LedFlowParams_percentage(::pal_device_msgs::msg::LedFlowParams & msg)
  : msg_(msg)
  {}
  Init_LedFlowParams_velocity percentage(::pal_device_msgs::msg::LedFlowParams::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return Init_LedFlowParams_velocity(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFlowParams msg_;
};

class Init_LedFlowParams_second_color
{
public:
  explicit Init_LedFlowParams_second_color(::pal_device_msgs::msg::LedFlowParams & msg)
  : msg_(msg)
  {}
  Init_LedFlowParams_percentage second_color(::pal_device_msgs::msg::LedFlowParams::_second_color_type arg)
  {
    msg_.second_color = std::move(arg);
    return Init_LedFlowParams_percentage(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFlowParams msg_;
};

class Init_LedFlowParams_first_color
{
public:
  Init_LedFlowParams_first_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedFlowParams_second_color first_color(::pal_device_msgs::msg::LedFlowParams::_first_color_type arg)
  {
    msg_.first_color = std::move(arg);
    return Init_LedFlowParams_second_color(msg_);
  }

private:
  ::pal_device_msgs::msg::LedFlowParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedFlowParams>()
{
  return pal_device_msgs::msg::builder::Init_LedFlowParams_first_color();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__BUILDER_HPP_
