// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:srv/CancelEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__BUILDER_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/srv/detail/cancel_effect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelEffect_Request_effect_id
{
public:
  Init_CancelEffect_Request_effect_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::srv::CancelEffect_Request effect_id(::pal_device_msgs::srv::CancelEffect_Request::_effect_id_type arg)
  {
    msg_.effect_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::srv::CancelEffect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::srv::CancelEffect_Request>()
{
  return pal_device_msgs::srv::builder::Init_CancelEffect_Request_effect_id();
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
auto build<::pal_device_msgs::srv::CancelEffect_Response>()
{
  return ::pal_device_msgs::srv::CancelEffect_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__BUILDER_HPP_
