// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:msg/LedGroup.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__STRUCT_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__msg__LedGroup __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__msg__LedGroup __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedGroup_
{
  using Type = LedGroup_<ContainerAllocator>;

  explicit LedGroup_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_mask = 0ul;
    }
  }

  explicit LedGroup_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_mask = 0ul;
    }
  }

  // field types and members
  using _led_mask_type =
    uint32_t;
  _led_mask_type led_mask;

  // setters for named parameter idiom
  Type & set__led_mask(
    const uint32_t & _arg)
  {
    this->led_mask = _arg;
    return *this;
  }

  // constant declarations
  static constexpr unsigned char LEFT_EAR =
    1;
  static constexpr unsigned char RIGHT_EAR =
    2;

  // pointer types
  using RawPtr =
    pal_device_msgs::msg::LedGroup_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::msg::LedGroup_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedGroup_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedGroup_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedGroup_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedGroup_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedGroup_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedGroup_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedGroup_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedGroup_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__msg__LedGroup
    std::shared_ptr<pal_device_msgs::msg::LedGroup_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__msg__LedGroup
    std::shared_ptr<pal_device_msgs::msg::LedGroup_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedGroup_ & other) const
  {
    if (this->led_mask != other.led_mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedGroup_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedGroup_

// alias to use template instance with default allocator
using LedGroup =
  pal_device_msgs::msg::LedGroup_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char LedGroup_<ContainerAllocator>::LEFT_EAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char LedGroup_<ContainerAllocator>::RIGHT_EAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__STRUCT_HPP_
