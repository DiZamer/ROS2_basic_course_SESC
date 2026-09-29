// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedGroup.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedGroup_led_mask
{
public:
  Init_LedGroup_led_mask()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::msg::LedGroup led_mask(::pal_device_msgs::msg::LedGroup::_led_mask_type arg)
  {
    msg_.led_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedGroup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedGroup>()
{
  return pal_device_msgs::msg::builder::Init_LedGroup_led_mask();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__BUILDER_HPP_
