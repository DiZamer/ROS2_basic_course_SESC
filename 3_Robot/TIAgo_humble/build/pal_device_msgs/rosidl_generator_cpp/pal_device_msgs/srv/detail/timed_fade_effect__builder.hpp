// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:srv/TimedFadeEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_FADE_EFFECT__BUILDER_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_FADE_EFFECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/srv/detail/timed_fade_effect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace srv
{

namespace builder
{

class Init_TimedFadeEffect_Request_priority
{
public:
  explicit Init_TimedFadeEffect_Request_priority(::pal_device_msgs::srv::TimedFadeEffect_Request & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::srv::TimedFadeEffect_Request priority(::pal_device_msgs::srv::TimedFadeEffect_Request::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedFadeEffect_Request msg_;
};

class Init_TimedFadeEffect_Request_effect_duration
{
public:
  explicit Init_TimedFadeEffect_Request_effect_duration(::pal_device_msgs::srv::TimedFadeEffect_Request & msg)
  : msg_(msg)
  {}
  Init_TimedFadeEffect_Request_priority effect_duration(::pal_device_msgs::srv::TimedFadeEffect_Request::_effect_duration_type arg)
  {
    msg_.effect_duration = std::move(arg);
    return Init_TimedFadeEffect_Request_priority(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedFadeEffect_Request msg_;
};

class Init_TimedFadeEffect_Request_reverse_fade
{
public:
  explicit Init_TimedFadeEffect_Request_reverse_fade(::pal_device_msgs::srv::TimedFadeEffect_Request & msg)
  : msg_(msg)
  {}
  Init_TimedFadeEffect_Request_effect_duration reverse_fade(::pal_device_msgs::srv::TimedFadeEffect_Request::_reverse_fade_type arg)
  {
    msg_.reverse_fade = std::move(arg);
    return Init_TimedFadeEffect_Request_effect_duration(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedFadeEffect_Request msg_;
};

class Init_TimedFadeEffect_Request_color_change_duration
{
public:
  explicit Init_TimedFadeEffect_Request_color_change_duration(::pal_device_msgs::srv::TimedFadeEffect_Request & msg)
  : msg_(msg)
  {}
  Init_TimedFadeEffect_Request_reverse_fade color_change_duration(::pal_device_msgs::srv::TimedFadeEffect_Request::_color_change_duration_type arg)
  {
    msg_.color_change_duration = std::move(arg);
    return Init_TimedFadeEffect_Request_reverse_fade(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedFadeEffect_Request msg_;
};

class Init_TimedFadeEffect_Request_second_color
{
public:
  explicit Init_TimedFadeEffect_Request_second_color(::pal_device_msgs::srv::TimedFadeEffect_Request & msg)
  : msg_(msg)
  {}
  Init_TimedFadeEffect_Request_color_change_duration second_color(::pal_device_msgs::srv::TimedFadeEffect_Request::_second_color_type arg)
  {
    msg_.second_color = std::move(arg);
    return Init_TimedFadeEffect_Request_color_change_duration(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedFadeEffect_Request msg_;
};

class Init_TimedFadeEffect_Request_first_color
{
public:
  explicit Init_TimedFadeEffect_Request_first_color(::pal_device_msgs::srv::TimedFadeEffect_Request & msg)
  : msg_(msg)
  {}
  Init_TimedFadeEffect_Request_second_color first_color(::pal_device_msgs::srv::TimedFadeEffect_Request::_first_color_type arg)
  {
    msg_.first_color = std::move(arg);
    return Init_TimedFadeEffect_Request_second_color(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedFadeEffect_Request msg_;
};

class Init_TimedFadeEffect_Request_leds
{
public:
  Init_TimedFadeEffect_Request_leds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedFadeEffect_Request_first_color leds(::pal_device_msgs::srv::TimedFadeEffect_Request::_leds_type arg)
  {
    msg_.leds = std::move(arg);
    return Init_TimedFadeEffect_Request_first_color(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedFadeEffect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::srv::TimedFadeEffect_Request>()
{
  return pal_device_msgs::srv::builder::Init_TimedFadeEffect_Request_leds();
}

}  // namespace pal_device_msgs


namespace pal_device_msgs
{

namespace srv
{

namespace builder
{

class Init_TimedFadeEffect_Response_effect_id
{
public:
  Init_TimedFadeEffect_Response_effect_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::srv::TimedFadeEffect_Response effect_id(::pal_device_msgs::srv::TimedFadeEffect_Response::_effect_id_type arg)
  {
    msg_.effect_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::srv::TimedFadeEffect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::srv::TimedFadeEffect_Response>()
{
  return pal_device_msgs::srv::builder::Init_TimedFadeEffect_Response_effect_id();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_FADE_EFFECT__BUILDER_HPP_
