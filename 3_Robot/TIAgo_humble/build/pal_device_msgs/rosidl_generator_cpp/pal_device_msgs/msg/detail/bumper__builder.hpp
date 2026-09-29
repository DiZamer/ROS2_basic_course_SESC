// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/bumper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_Bumper_is_pressed
{
public:
  explicit Init_Bumper_is_pressed(::pal_device_msgs::msg::Bumper & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::msg::Bumper is_pressed(::pal_device_msgs::msg::Bumper::_is_pressed_type arg)
  {
    msg_.is_pressed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::Bumper msg_;
};

class Init_Bumper_header
{
public:
  Init_Bumper_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bumper_is_pressed header(::pal_device_msgs::msg::Bumper::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Bumper_is_pressed(msg_);
  }

private:
  ::pal_device_msgs::msg::Bumper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::Bumper>()
{
  return pal_device_msgs::msg::builder::Init_Bumper_header();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_
