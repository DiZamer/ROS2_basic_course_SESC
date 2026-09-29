// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__msg__BatteryState __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__msg__BatteryState __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryState_
{
  using Type = BatteryState_<ContainerAllocator>;

  explicit BatteryState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charge_state = 0;
      this->battery_percentage = 0.0f;
    }
  }

  explicit BatteryState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charge_state = 0;
      this->battery_percentage = 0.0f;
    }
  }

  // field types and members
  using _charge_state_type =
    int8_t;
  _charge_state_type charge_state;
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;

  // setters for named parameter idiom
  Type & set__charge_state(
    const int8_t & _arg)
  {
    this->charge_state = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }

  // constant declarations
  static constexpr unsigned char FULL =
    5;
  static constexpr unsigned char HIGH =
    4;
  static constexpr unsigned char MEDIUM =
    3;
  static constexpr unsigned char LOW =
    2;
  static constexpr unsigned char CRITICAL_LOW =
    1;

  // pointer types
  using RawPtr =
    pal_device_msgs::msg::BatteryState_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::msg::BatteryState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::msg::BatteryState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::msg::BatteryState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::BatteryState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::BatteryState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::BatteryState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::BatteryState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::msg::BatteryState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::msg::BatteryState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__msg__BatteryState
    std::shared_ptr<pal_device_msgs::msg::BatteryState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__msg__BatteryState
    std::shared_ptr<pal_device_msgs::msg::BatteryState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryState_ & other) const
  {
    if (this->charge_state != other.charge_state) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryState_

// alias to use template instance with default allocator
using BatteryState =
  pal_device_msgs::msg::BatteryState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char BatteryState_<ContainerAllocator>::FULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char BatteryState_<ContainerAllocator>::HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char BatteryState_<ContainerAllocator>::MEDIUM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char BatteryState_<ContainerAllocator>::LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char BatteryState_<ContainerAllocator>::CRITICAL_LOW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
