// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_device_msgs:msg/LedEffectViaTopicParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_VIA_TOPIC_PARAMS__BUILDER_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_VIA_TOPIC_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_device_msgs/msg/detail/led_effect_via_topic_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_device_msgs
{

namespace msg
{

namespace builder
{

class Init_LedEffectViaTopicParams_topic_name
{
public:
  Init_LedEffectViaTopicParams_topic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_device_msgs::msg::LedEffectViaTopicParams topic_name(::pal_device_msgs::msg::LedEffectViaTopicParams::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_device_msgs::msg::LedEffectViaTopicParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_device_msgs::msg::LedEffectViaTopicParams>()
{
  return pal_device_msgs::msg::builder::Init_LedEffectViaTopicParams_topic_name();
}

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_VIA_TOPIC_PARAMS__BUILDER_HPP_
