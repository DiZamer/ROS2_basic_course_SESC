// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:msg/LedEffectParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__STRUCT_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fixed_color'
#include "pal_device_msgs/msg/detail/led_fixed_color_params__struct.hpp"
// Member 'rainbow'
#include "pal_device_msgs/msg/detail/led_rainbow_params__struct.hpp"
// Member 'fade'
#include "pal_device_msgs/msg/detail/led_fade_params__struct.hpp"
// Member 'blink'
#include "pal_device_msgs/msg/detail/led_blink_params__struct.hpp"
// Member 'progress'
#include "pal_device_msgs/msg/detail/led_progress_params__struct.hpp"
// Member 'flow'
#include "pal_device_msgs/msg/detail/led_flow_params__struct.hpp"
// Member 'preprogrammed'
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__struct.hpp"
// Member 'effect_via_topic'
#include "pal_device_msgs/msg/detail/led_effect_via_topic_params__struct.hpp"
// Member 'data_array'
#include "pal_device_msgs/msg/detail/led_data_array_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__msg__LedEffectParams __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__msg__LedEffectParams __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedEffectParams_
{
  using Type = LedEffectParams_<ContainerAllocator>;

  explicit LedEffectParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fixed_color(_init),
    rainbow(_init),
    fade(_init),
    blink(_init),
    progress(_init),
    flow(_init),
    preprogrammed(_init),
    effect_via_topic(_init),
    data_array(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->effect_type = 0;
    }
  }

  explicit LedEffectParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fixed_color(_alloc, _init),
    rainbow(_alloc, _init),
    fade(_alloc, _init),
    blink(_alloc, _init),
    progress(_alloc, _init),
    flow(_alloc, _init),
    preprogrammed(_alloc, _init),
    effect_via_topic(_alloc, _init),
    data_array(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->effect_type = 0;
    }
  }

  // field types and members
  using _effect_type_type =
    uint8_t;
  _effect_type_type effect_type;
  using _fixed_color_type =
    pal_device_msgs::msg::LedFixedColorParams_<ContainerAllocator>;
  _fixed_color_type fixed_color;
  using _rainbow_type =
    pal_device_msgs::msg::LedRainbowParams_<ContainerAllocator>;
  _rainbow_type rainbow;
  using _fade_type =
    pal_device_msgs::msg::LedFadeParams_<ContainerAllocator>;
  _fade_type fade;
  using _blink_type =
    pal_device_msgs::msg::LedBlinkParams_<ContainerAllocator>;
  _blink_type blink;
  using _progress_type =
    pal_device_msgs::msg::LedProgressParams_<ContainerAllocator>;
  _progress_type progress;
  using _flow_type =
    pal_device_msgs::msg::LedFlowParams_<ContainerAllocator>;
  _flow_type flow;
  using _preprogrammed_type =
    pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator>;
  _preprogrammed_type preprogrammed;
  using _effect_via_topic_type =
    pal_device_msgs::msg::LedEffectViaTopicParams_<ContainerAllocator>;
  _effect_via_topic_type effect_via_topic;
  using _data_array_type =
    pal_device_msgs::msg::LedDataArrayParams_<ContainerAllocator>;
  _data_array_type data_array;

  // setters for named parameter idiom
  Type & set__effect_type(
    const uint8_t & _arg)
  {
    this->effect_type = _arg;
    return *this;
  }
  Type & set__fixed_color(
    const pal_device_msgs::msg::LedFixedColorParams_<ContainerAllocator> & _arg)
  {
    this->fixed_color = _arg;
    return *this;
  }
  Type & set__rainbow(
    const pal_device_msgs::msg::LedRainbowParams_<ContainerAllocator> & _arg)
  {
    this->rainbow = _arg;
    return *this;
  }
  Type & set__fade(
    const pal_device_msgs::msg::LedFadeParams_<ContainerAllocator> & _arg)
  {
    this->fade = _arg;
    return *this;
  }
  Type & set__blink(
    const pal_device_msgs::msg::LedBlinkParams_<ContainerAllocator> & _arg)
  {
    this->blink = _arg;
    return *this;
  }
  Type & set__progress(
    const pal_device_msgs::msg::LedProgressParams_<ContainerAllocator> & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__flow(
    const pal_device_msgs::msg::LedFlowParams_<ContainerAllocator> & _arg)
  {
    this->flow = _arg;
    return *this;
  }
  Type & set__preprogrammed(
    const pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator> & _arg)
  {
    this->preprogrammed = _arg;
    return *this;
  }
  Type & set__effect_via_topic(
    const pal_device_msgs::msg::LedEffectViaTopicParams_<ContainerAllocator> & _arg)
  {
    this->effect_via_topic = _arg;
    return *this;
  }
  Type & set__data_array(
    const pal_device_msgs::msg::LedDataArrayParams_<ContainerAllocator> & _arg)
  {
    this->data_array = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FIXED_COLOR =
    0u;
  static constexpr uint8_t RAINBOW =
    1u;
  static constexpr uint8_t FADE =
    2u;
  static constexpr uint8_t BLINK =
    3u;
  static constexpr uint8_t PROGRESS =
    4u;
  static constexpr uint8_t FLOW =
    5u;
  static constexpr uint8_t PREPROGRAMMED_EFFECT =
    6u;
  static constexpr uint8_t EFFECT_VIA_TOPIC =
    7u;
  static constexpr uint8_t DATA_ARRAY =
    8u;

  // pointer types
  using RawPtr =
    pal_device_msgs::msg::LedEffectParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::msg::LedEffectParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedEffectParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedEffectParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedEffectParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedEffectParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedEffectParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedEffectParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedEffectParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedEffectParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__msg__LedEffectParams
    std::shared_ptr<pal_device_msgs::msg::LedEffectParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__msg__LedEffectParams
    std::shared_ptr<pal_device_msgs::msg::LedEffectParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedEffectParams_ & other) const
  {
    if (this->effect_type != other.effect_type) {
      return false;
    }
    if (this->fixed_color != other.fixed_color) {
      return false;
    }
    if (this->rainbow != other.rainbow) {
      return false;
    }
    if (this->fade != other.fade) {
      return false;
    }
    if (this->blink != other.blink) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    if (this->flow != other.flow) {
      return false;
    }
    if (this->preprogrammed != other.preprogrammed) {
      return false;
    }
    if (this->effect_via_topic != other.effect_via_topic) {
      return false;
    }
    if (this->data_array != other.data_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedEffectParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedEffectParams_

// alias to use template instance with default allocator
using LedEffectParams =
  pal_device_msgs::msg::LedEffectParams_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::FIXED_COLOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::RAINBOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::FADE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::BLINK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::PROGRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::FLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::PREPROGRAMMED_EFFECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::EFFECT_VIA_TOPIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedEffectParams_<ContainerAllocator>::DATA_ARRAY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__STRUCT_HPP_
