// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedPreProgrammedParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_pre_programmed_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedPreProgrammedParams_preprogrammed_id
{
public:
  Init_LedPreProgrammedParams_preprogrammed_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::msg::LedPreProgrammedParams preprogrammed_id(::pal_device_msgs::msg::LedPreProgrammedParams::_preprogrammed_id_type arg)
  {
    msg_.preprogrammed_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedPreProgrammedParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedPreProgrammedParams>()
{
  return pal_device_msgs::msg::builder::Init_LedPreProgrammedParams_preprogrammed_id();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__BUILDER_HPP_
