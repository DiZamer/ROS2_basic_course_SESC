// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:msg/LedFlowParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__STRUCT_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__msg__LedFlowParams __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__msg__LedFlowParams __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedFlowParams_
{
  using Type = LedFlowParams_<ContainerAllocator>;

  explicit LedFlowParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_color(_init),
    second_color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0.0f;
      this->velocity = 0.0f;
    }
  }

  explicit LedFlowParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_color(_alloc, _init),
    second_color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0.0f;
      this->velocity = 0.0f;
    }
  }

  // field types and members
  using _first_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _first_color_type first_color;
  using _second_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _second_color_type second_color;
  using _percentage_type =
    float;
  _percentage_type percentage;
  using _velocity_type =
    float;
  _velocity_type velocity;

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
  Type & set__percentage(
    const float & _arg)
  {
    this->percentage = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::msg::LedFlowParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::msg::LedFlowParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedFlowParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedFlowParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedFlowParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedFlowParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedFlowParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedFlowParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedFlowParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedFlowParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__msg__LedFlowParams
    std::shared_ptr<pal_device_msgs::msg::LedFlowParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__msg__LedFlowParams
    std::shared_ptr<pal_device_msgs::msg::LedFlowParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedFlowParams_ & other) const
  {
    if (this->first_color != other.first_color) {
      return false;
    }
    if (this->second_color != other.second_color) {
      return false;
    }
    if (this->percentage != other.percentage) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedFlowParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedFlowParams_

// alias to use template instance with default allocator
using LedFlowParams =
  pal_device_msgs::msg::LedFlowParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__STRUCT_HPP_
