// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:msg/LedPreProgrammedParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__STRUCT_HPP_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__msg__LedPreProgrammedParams __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__msg__LedPreProgrammedParams __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedPreProgrammedParams_
{
  using Type = LedPreProgrammedParams_<ContainerAllocator>;

  explicit LedPreProgrammedParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preprogrammed_id = 0;
    }
  }

  explicit LedPreProgrammedParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preprogrammed_id = 0;
    }
  }

  // field types and members
  using _preprogrammed_id_type =
    uint8_t;
  _preprogrammed_id_type preprogrammed_id;

  // setters for named parameter idiom
  Type & set__preprogrammed_id(
    const uint8_t & _arg)
  {
    this->preprogrammed_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__msg__LedPreProgrammedParams
    std::shared_ptr<pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__msg__LedPreProgrammedParams
    std::shared_ptr<pal_device_msgs::msg::LedPreProgrammedParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedPreProgrammedParams_ & other) const
  {
    if (this->preprogrammed_id != other.preprogrammed_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedPreProgrammedParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedPreProgrammedParams_

// alias to use template instance with default allocator
using LedPreProgrammedParams =
  pal_device_msgs::msg::LedPreProgrammedParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__STRUCT_HPP_
