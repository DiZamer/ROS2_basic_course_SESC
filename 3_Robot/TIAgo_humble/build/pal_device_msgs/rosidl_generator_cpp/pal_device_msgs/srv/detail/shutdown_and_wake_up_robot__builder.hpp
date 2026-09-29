// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:srv/ShutdownAndWakeUpRobot.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__BUILDER_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/srv/detail/shutdown_and_wake_up_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace srv
{

namespace builder
{

class Init_ShutdownAndWakeUpRobot_Request_shutdown_duration
{
public:
  Init_ShutdownAndWakeUpRobot_Request_shutdown_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request shutdown_duration(::pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request::_shutdown_duration_type arg)
  {
    msg_.shutdown_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request>()
{
  return pal_device_msgs::srv::builder::Init_ShutdownAndWakeUpRobot_Request_shutdown_duration();
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response>()
{
  return ::pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__BUILDER_HPP_
