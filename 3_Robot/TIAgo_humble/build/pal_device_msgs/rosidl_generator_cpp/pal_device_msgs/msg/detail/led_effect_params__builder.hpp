// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedEffectParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_effect_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedEffectParams_data_array
{
public:
  explicit Init_LedEffectParams_data_array(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  ::pal_device_msgs::msg::LedEffectParams data_array(::pal_device_msgs::msg::LedEffectParams::_data_array_type arg)
  {
    msg_.data_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_effect_via_topic
{
public:
  explicit Init_LedEffectParams_effect_via_topic(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  Init_LedEffectParams_data_array effect_via_topic(::pal_device_msgs::msg::LedEffectParams::_effect_via_topic_type arg)
  {
    msg_.effect_via_topic = std::move(arg);
    return Init_LedEffectParams_data_array(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_preprogrammed
{
public:
  explicit Init_LedEffectParams_preprogrammed(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  Init_LedEffectParams_effect_via_topic preprogrammed(::pal_device_msgs::msg::LedEffectParams::_preprogrammed_type arg)
  {
    msg_.preprogrammed = std::move(arg);
    return Init_LedEffectParams_effect_via_topic(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_flow
{
public:
  explicit Init_LedEffectParams_flow(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  Init_LedEffectParams_preprogrammed flow(::pal_device_msgs::msg::LedEffectParams::_flow_type arg)
  {
    msg_.flow = std::move(arg);
    return Init_LedEffectParams_preprogrammed(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_progress
{
public:
  explicit Init_LedEffectParams_progress(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  Init_LedEffectParams_flow progress(::pal_device_msgs::msg::LedEffectParams::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_LedEffectParams_flow(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_blink
{
public:
  explicit Init_LedEffectParams_blink(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  Init_LedEffectParams_progress blink(::pal_device_msgs::msg::LedEffectParams::_blink_type arg)
  {
    msg_.blink = std::move(arg);
    return Init_LedEffectParams_progress(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_fade
{
public:
  explicit Init_LedEffectParams_fade(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  Init_LedEffectParams_blink fade(::pal_device_msgs::msg::LedEffectParams::_fade_type arg)
  {
    msg_.fade = std::move(arg);
    return Init_LedEffectParams_blink(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_rainbow
{
public:
  explicit Init_LedEffectParams_rainbow(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  Init_LedEffectParams_fade rainbow(::pal_device_msgs::msg::LedEffectParams::_rainbow_type arg)
  {
    msg_.rainbow = std::move(arg);
    return Init_LedEffectParams_fade(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_fixed_color
{
public:
  explicit Init_LedEffectParams_fixed_color(::pal_device_msgs::msg::LedEffectParams & msg)
  : msg_(msg)
  {}
  Init_LedEffectParams_rainbow fixed_color(::pal_device_msgs::msg::LedEffectParams::_fixed_color_type arg)
  {
    msg_.fixed_color = std::move(arg);
    return Init_LedEffectParams_rainbow(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

class Init_LedEffectParams_effect_type
{
public:
  Init_LedEffectParams_effect_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedEffectParams_fixed_color effect_type(::pal_device_msgs::msg::LedEffectParams::_effect_type_type arg)
  {
    msg_.effect_type = std::move(arg);
    return Init_LedEffectParams_fixed_color(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedEffectParams>()
{
  return pal_device_msgs::msg::builder::Init_LedEffectParams_effect_type();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__BUILDER_HPP_
