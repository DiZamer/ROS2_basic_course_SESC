// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:srv/TimedColourEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__BUILDER_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/srv/detail/timed_colour_effect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace srv
{

namespace builder
{

class Init_TimedColourEffect_Request_priority
{
public:
  explicit Init_TimedColourEffect_Request_priority(::pal_device_msgs::srv::TimedColourEffect_Request & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::srv::TimedColourEffect_Request priority(::pal_device_msgs::srv::TimedColourEffect_Request::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedColourEffect_Request msg_;
};

class Init_TimedColourEffect_Request_effect_duration
{
public:
  explicit Init_TimedColourEffect_Request_effect_duration(::pal_device_msgs::srv::TimedColourEffect_Request & msg)
  : msg_(msg)
  {}
  Init_TimedColourEffect_Request_priority effect_duration(::pal_device_msgs::srv::TimedColourEffect_Request::_effect_duration_type arg)
  {
    msg_.effect_duration = std::move(arg);
    return Init_TimedColourEffect_Request_priority(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedColourEffect_Request msg_;
};

class Init_TimedColourEffect_Request_color
{
public:
  explicit Init_TimedColourEffect_Request_color(::pal_device_msgs::srv::TimedColourEffect_Request & msg)
  : msg_(msg)
  {}
  Init_TimedColourEffect_Request_effect_duration color(::pal_device_msgs::srv::TimedColourEffect_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TimedColourEffect_Request_effect_duration(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedColourEffect_Request msg_;
};

class Init_TimedColourEffect_Request_leds
{
public:
  Init_TimedColourEffect_Request_leds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedColourEffect_Request_color leds(::pal_device_msgs::srv::TimedColourEffect_Request::_leds_type arg)
  {
    msg_.leds = std::move(arg);
    return Init_TimedColourEffect_Request_color(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedColourEffect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::srv::TimedColourEffect_Request>()
{
  return pal_device_msgs::srv::builder::Init_TimedColourEffect_Request_leds();
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace srv
{

namespace builder
{

class Init_TimedColourEffect_Response_effect_id
{
public:
  Init_TimedColourEffect_Response_effect_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::srv::TimedColourEffect_Response effect_id(::pal_device_msgs::srv::TimedColourEffect_Response::_effect_id_type arg)
  {
    msg_.effect_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedColourEffect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::srv::TimedColourEffect_Response>()
{
  return pal_device_msgs::srv::builder::Init_TimedColourEffect_Response_effect_id();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__BUILDER_HPP_
