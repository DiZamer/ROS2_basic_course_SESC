// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:srv/TimedColourEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__STRUCT_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__STRUCT_HPP_

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
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"
// Member 'effect_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__srv__TimedColourEffect_Request __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__srv__TimedColourEffect_Request __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TimedColourEffect_Request_
{
  using Type = TimedColourEffect_Request_<ContainerAllocator>;

  explicit TimedColourEffect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : leds(_init),
    color(_init),
    effect_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0;
    }
  }

  explicit TimedColourEffect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : leds(_alloc, _init),
    color(_alloc, _init),
    effect_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0;
    }
  }

  // field types and members
  using _leds_type =
    pal_device_msgs::msg::LedGroup_<ContainerAllocator>;
  _leds_type leds;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;
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
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
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
    pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__srv__TimedColourEffect_Request
    std::shared_ptr<pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__srv__TimedColourEffect_Request
    std::shared_ptr<pal_device_msgs::srv::TimedColourEffect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimedColourEffect_Request_ & other) const
  {
    if (this->leds != other.leds) {
      return false;
    }
    if (this->color != other.color) {
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
  bool operator!=(const TimedColourEffect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimedColourEffect_Request_

// alias to use template instance with default allocator
using TimedColourEffect_Request =
  pal_device_msgs::srv::TimedColourEffect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pal_device_msgs


#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__srv__TimedColourEffect_Response __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__srv__TimedColourEffect_Response __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TimedColourEffect_Response_
{
  using Type = TimedColourEffect_Response_<ContainerAllocator>;

  explicit TimedColourEffect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->effect_id = 0ul;
    }
  }

  explicit TimedColourEffect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__srv__TimedColourEffect_Response
    std::shared_ptr<pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__srv__TimedColourEffect_Response
    std::shared_ptr<pal_device_msgs::srv::TimedColourEffect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimedColourEffect_Response_ & other) const
  {
    if (this->effect_id != other.effect_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimedColourEffect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimedColourEffect_Response_

// alias to use template instance with default allocator
using TimedColourEffect_Response =
  pal_device_msgs::srv::TimedColourEffect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pal_device_msgs

namespace pal_device_msgs
{

namespace srv
{

struct TimedColourEffect
{
  using Request = pal_device_msgs::srv::TimedColourEffect_Request;
  using Response = pal_device_msgs::srv::TimedColourEffect_Response;
};

}  // namespace srv

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__STRUCT_HPP_
