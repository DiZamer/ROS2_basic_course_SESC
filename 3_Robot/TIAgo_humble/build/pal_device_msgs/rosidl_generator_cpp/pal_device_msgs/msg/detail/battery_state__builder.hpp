// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryState_battery_percentage
{
public:
  explicit Init_BatteryState_battery_percentage(::pal_device_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::msg::BatteryState battery_percentage(::pal_device_msgs::msg::BatteryState::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_charge_state
{
public:
  Init_BatteryState_charge_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryState_battery_percentage charge_state(::pal_device_msgs::msg::BatteryState::_charge_state_type arg)
  {
    msg_.charge_state = std::move(arg);
    return Init_BatteryState_battery_percentage(msg_);
  }

private:
  ::pal_device_msgs::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::BatteryState>()
{
  return pal_device_msgs::msg::builder::Init_BatteryState_charge_state();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
