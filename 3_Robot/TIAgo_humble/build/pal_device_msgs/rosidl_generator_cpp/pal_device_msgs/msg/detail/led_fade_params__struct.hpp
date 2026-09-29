// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:msg/LedFadeParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__STRUCT_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'first_color'
// Member 'second_color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"
// Member 'transition_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__msg__LedFadeParams __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__msg__LedFadeParams __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedFadeParams_
{
  using Type = LedFadeParams_<ContainerAllocator>;

  explicit LedFadeParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_color(_init),
    second_color(_init),
    transition_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reverse_fade = false;
    }
  }

  explicit LedFadeParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_color(_alloc, _init),
    second_color(_alloc, _init),
    transition_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reverse_fade = false;
    }
  }

  // field types and members
  using _first_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _first_color_type first_color;
  using _second_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _second_color_type second_color;
  using _transition_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _transition_duration_type transition_duration;
  using _reverse_fade_type =
    bool;
  _reverse_fade_type reverse_fade;

  // setters for named parameter idiom
  Type & set__first_color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->first_color = _arg;
    return *this;
  }
  Type & set__second_color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->second_color = _arg;
    return *this;
  }
  Type & set__transition_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->transition_duration = _arg;
    return *this;
  }
  Type & set__reverse_fade(
    const bool & _arg)
  {
    this->reverse_fade = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::msg::LedFadeParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::msg::LedFadeParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedFadeParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedFadeParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedFadeParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedFadeParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedFadeParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedFadeParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedFadeParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedFadeParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__msg__LedFadeParams
    std::shared_ptr<pal_device_msgs::msg::LedFadeParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__msg__LedFadeParams
    std::shared_ptr<pal_device_msgs::msg::LedFadeParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedFadeParams_ & other) const
  {
    if (this->first_color != other.first_color) {
      return false;
    }
    if (this->second_color != other.second_color) {
      return false;
    }
    if (this->transition_duration != other.transition_duration) {
      return false;
    }
    if (this->reverse_fade != other.reverse_fade) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedFadeParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedFadeParams_

// alias to use template instance with default allocator
using LedFadeParams =
  pal_device_msgs::msg::LedFadeParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__STRUCT_HPP_
