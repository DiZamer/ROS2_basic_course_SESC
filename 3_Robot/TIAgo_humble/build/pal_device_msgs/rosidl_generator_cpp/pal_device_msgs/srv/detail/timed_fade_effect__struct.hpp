// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:srv/TimedFadeEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_FADE_EFFECT__STRUCT_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_FADE_EFFECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'leds'
#include "pal_device_msgs/msg/detail/led_group__struct.hpp"
// Member 'first_color'
// Member 'second_color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"
// Member 'color_change_duration'
// Member 'effect_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__srv__TimedFadeEffect_Request __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__srv__TimedFadeEffect_Request __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TimedFadeEffect_Request_
{
  using Type = TimedFadeEffect_Request_<ContainerAllocator>;

  explicit TimedFadeEffect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : leds(_init),
    first_color(_init),
    second_color(_init),
    color_change_duration(_init),
    effect_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reverse_fade = false;
      this->priority = 0;
    }
  }

  explicit TimedFadeEffect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : leds(_alloc, _init),
    first_color(_alloc, _init),
    second_color(_alloc, _init),
    color_change_duration(_alloc, _init),
    effect_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reverse_fade = false;
      this->priority = 0;
    }
  }

  // field types and members
  using _leds_type =
    pal_device_msgs::msg::LedGroup_<ContainerAllocator>;
  _leds_type leds;
  using _first_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _first_color_type first_color;
  using _second_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _second_color_type second_color;
  using _color_change_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _color_change_duration_type color_change_duration;
  using _reverse_fade_type =
    bool;
  _reverse_fade_type reverse_fade;
  using _effect_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _effect_duration_type effect_duration;
  using _priority_type =
    uint8_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__leds(
    const pal_device_msgs::msg::LedGroup_<ContainerAllocator> & _arg)
  {
    this->leds = _arg;
    return *this;
  }
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
  Type & set__color_change_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->color_change_duration = _arg;
    return *this;
  }
  Type & set__reverse_fade(
    const bool & _arg)
  {
    this->reverse_fade = _arg;
    return *this;
  }
  Type & set__effect_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->effect_duration = _arg;
    return *this;
  }
  Type & set__priority(
    const uint8_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__srv__TimedFadeEffect_Request
    std::shared_ptr<pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__srv__TimedFadeEffect_Request
    std::shared_ptr<pal_device_msgs::srv::TimedFadeEffect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimedFadeEffect_Request_ & other) const
  {
    if (this->leds != other.leds) {
      return false;
    }
    if (this->first_color != other.first_color) {
      return false;
    }
    if (this->second_color != other.second_color) {
      return false;
    }
    if (this->color_change_duration != other.color_change_duration) {
      return false;
    }
    if (this->reverse_fade != other.reverse_fade) {
      return false;
    }
    if (this->effect_duration != other.effect_duration) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimedFadeEffect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimedFadeEffect_Request_

// alias to use template instance with default allocator
using TimedFadeEffect_Request =
  pal_device_msgs::srv::TimedFadeEffect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pal_device_msgs


#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__srv__TimedFadeEffect_Response __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__srv__TimedFadeEffect_Response __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TimedFadeEffect_Response_
{
  using Type = TimedFadeEffect_Response_<ContainerAllocator>;

  explicit TimedFadeEffect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->effect_id = 0ul;
    }
  }

  explicit TimedFadeEffect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->effect_id = 0ul;
    }
  }

  // field types and members
  using _effect_id_type =
    uint32_t;
  _effect_id_type effect_id;

  // setters for named parameter idiom
  Type & set__effect_id(
    const uint32_t & _arg)
  {
    this->effect_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__srv__TimedFadeEffect_Response
    std::shared_ptr<pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__srv__TimedFadeEffect_Response
    std::shared_ptr<pal_device_msgs::srv::TimedFadeEffect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimedFadeEffect_Response_ & other) const
  {
    if (this->effect_id != other.effect_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimedFadeEffect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimedFadeEffect_Response_

// alias to use template instance with default allocator
using TimedFadeEffect_Response =
  pal_device_msgs::srv::TimedFadeEffect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pal_device_msgs

namespace pal_device_msgs
{

namespace srv
{

struct TimedFadeEffect
{
  using Request = pal_device_msgs::srv::TimedFadeEffect_Request;
  using Response = pal_device_msgs::srv::TimedFadeEffect_Response;
};

}  // namespace srv

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_FADE_EFFECT__STRUCT_HPP_
