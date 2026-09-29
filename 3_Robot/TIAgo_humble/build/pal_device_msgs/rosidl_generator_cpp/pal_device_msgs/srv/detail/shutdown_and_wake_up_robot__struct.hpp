// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:srv/ShutdownAndWakeUpRobot.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__STRUCT_HPP_
#define PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'shutdown_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ShutdownAndWakeUpRobot_Request_
{
  using Type = ShutdownAndWakeUpRobot_Request_<ContainerAllocator>;

  explicit ShutdownAndWakeUpRobot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shutdown_duration(_init)
  {
    (void)_init;
  }

  explicit ShutdownAndWakeUpRobot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shutdown_duration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _shutdown_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _shutdown_duration_type shutdown_duration;

  // setters for named parameter idiom
  Type & set__shutdown_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->shutdown_duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request
    std::shared_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request
    std::shared_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShutdownAndWakeUpRobot_Request_ & other) const
  {
    if (this->shutdown_duration != other.shutdown_duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShutdownAndWakeUpRobot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShutdownAndWakeUpRobot_Request_

// alias to use template instance with default allocator
using ShutdownAndWakeUpRobot_Request =
  pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pal_device_msgs


#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ShutdownAndWakeUpRobot_Response_
{
  using Type = ShutdownAndWakeUpRobot_Response_<ContainerAllocator>;

  explicit ShutdownAndWakeUpRobot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ShutdownAndWakeUpRobot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response
    std::shared_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response
    std::shared_ptr<pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShutdownAndWakeUpRobot_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShutdownAndWakeUpRobot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShutdownAndWakeUpRobot_Response_

// alias to use template instance with default allocator
using ShutdownAndWakeUpRobot_Response =
  pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pal_device_msgs

namespace pal_device_msgs
{

namespace srv
{

struct ShutdownAndWakeUpRobot
{
  using Request = pal_device_msgs::srv::ShutdownAndWakeUpRobot_Request;
  using Response = pal_device_msgs::srv::ShutdownAndWakeUpRobot_Response;
};

}  // namespace srv

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__STRUCT_HPP_
