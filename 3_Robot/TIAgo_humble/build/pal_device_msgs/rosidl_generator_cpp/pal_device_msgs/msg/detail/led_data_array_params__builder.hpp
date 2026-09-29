// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedDataArrayParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_data_array_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedDataArrayParams_data
{
public:
  Init_LedDataArrayParams_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::msg::LedDataArrayParams data(::pal_device_msgs::msg::LedDataArrayParams::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedDataArrayParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedDataArrayParams>()
{
  return pal_device_msgs::msg::builder::Init_LedDataArrayParams_data();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__BUILDER_HPP_
