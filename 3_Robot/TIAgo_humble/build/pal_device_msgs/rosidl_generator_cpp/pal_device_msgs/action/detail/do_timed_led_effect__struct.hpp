// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_device_msgs:action/DoTimedLedEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__STRUCT_HPP_
#define PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'params'
#include "pal_device_msgs/msg/detail/led_effect_params__struct.hpp"
// Member 'effect_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Goal __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DoTimedLedEffect_Goal_
{
  using Type = DoTimedLedEffect_Goal_<ContainerAllocator>;

  explicit DoTimedLedEffect_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params(_init),
    effect_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0;
    }
  }

  explicit DoTimedLedEffect_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params(_alloc, _init),
    effect_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0;
    }
  }

  // field types and members
  using _devices_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _devices_type devices;
  using _params_type =
    pal_device_msgs::msg::LedEffectParams_<ContainerAllocator>;
  _params_type params;
  using _effect_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _effect_duration_type effect_duration;
  using _priority_type =
    uint8_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__devices(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->devices = _arg;
    return *this;
  }
  Type & set__params(
    const pal_device_msgs::msg::LedEffectParams_<ContainerAllocator> & _arg)
  {
    this->params = _arg;
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
    pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Goal
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Goal
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoTimedLedEffect_Goal_ & other) const
  {
    if (this->devices != other.devices) {
      return false;
    }
    if (this->params != other.params) {
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
  bool operator!=(const DoTimedLedEffect_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoTimedLedEffect_Goal_

// alias to use template instance with default allocator
using DoTimedLedEffect_Goal =
  pal_device_msgs::action::DoTimedLedEffect_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pal_device_msgs


#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Result __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Result __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DoTimedLedEffect_Result_
{
  using Type = DoTimedLedEffect_Result_<ContainerAllocator>;

  explicit DoTimedLedEffect_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit DoTimedLedEffect_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Result
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Result
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoTimedLedEffect_Result_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoTimedLedEffect_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoTimedLedEffect_Result_

// alias to use template instance with default allocator
using DoTimedLedEffect_Result =
  pal_device_msgs::action::DoTimedLedEffect_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pal_device_msgs


#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Feedback __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DoTimedLedEffect_Feedback_
{
  using Type = DoTimedLedEffect_Feedback_<ContainerAllocator>;

  explicit DoTimedLedEffect_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit DoTimedLedEffect_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Feedback
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_Feedback
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoTimedLedEffect_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoTimedLedEffect_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoTimedLedEffect_Feedback_

// alias to use template instance with default allocator
using DoTimedLedEffect_Feedback =
  pal_device_msgs::action::DoTimedLedEffect_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pal_device_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DoTimedLedEffect_SendGoal_Request_
{
  using Type = DoTimedLedEffect_SendGoal_Request_<ContainerAllocator>;

  explicit DoTimedLedEffect_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DoTimedLedEffect_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pal_device_msgs::action::DoTimedLedEffect_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoTimedLedEffect_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoTimedLedEffect_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoTimedLedEffect_SendGoal_Request_

// alias to use template instance with default allocator
using DoTimedLedEffect_SendGoal_Request =
  pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pal_device_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DoTimedLedEffect_SendGoal_Response_
{
  using Type = DoTimedLedEffect_SendGoal_Response_<ContainerAllocator>;

  explicit DoTimedLedEffect_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DoTimedLedEffect_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoTimedLedEffect_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoTimedLedEffect_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoTimedLedEffect_SendGoal_Response_

// alias to use template instance with default allocator
using DoTimedLedEffect_SendGoal_Response =
  pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pal_device_msgs

namespace pal_device_msgs
{

namespace action
{

struct DoTimedLedEffect_SendGoal
{
  using Request = pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request;
  using Response = pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response;
};

}  // namespace action

}  // namespace pal_device_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_GetResult_Request __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DoTimedLedEffect_GetResult_Request_
{
  using Type = DoTimedLedEffect_GetResult_Request_<ContainerAllocator>;

  explicit DoTimedLedEffect_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DoTimedLedEffect_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_GetResult_Request
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_GetResult_Request
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoTimedLedEffect_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoTimedLedEffect_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoTimedLedEffect_GetResult_Request_

// alias to use template instance with default allocator
using DoTimedLedEffect_GetResult_Request =
  pal_device_msgs::action::DoTimedLedEffect_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pal_device_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_GetResult_Response __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DoTimedLedEffect_GetResult_Response_
{
  using Type = DoTimedLedEffect_GetResult_Response_<ContainerAllocator>;

  explicit DoTimedLedEffect_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DoTimedLedEffect_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pal_device_msgs::action::DoTimedLedEffect_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_GetResult_Response
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_GetResult_Response
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoTimedLedEffect_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoTimedLedEffect_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoTimedLedEffect_GetResult_Response_

// alias to use template instance with default allocator
using DoTimedLedEffect_GetResult_Response =
  pal_device_msgs::action::DoTimedLedEffect_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pal_device_msgs

namespace pal_device_msgs
{

namespace action
{

struct DoTimedLedEffect_GetResult
{
  using Request = pal_device_msgs::action::DoTimedLedEffect_GetResult_Request;
  using Response = pal_device_msgs::action::DoTimedLedEffect_GetResult_Response;
};

}  // namespace action

}  // namespace pal_device_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage __declspec(deprecated)
#endif

namespace pal_device_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DoTimedLedEffect_FeedbackMessage_
{
  using Type = DoTimedLedEffect_FeedbackMessage_<ContainerAllocator>;

  explicit DoTimedLedEffect_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DoTimedLedEffect_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pal_device_msgs::action::DoTimedLedEffect_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage
    std::shared_ptr<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoTimedLedEffect_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoTimedLedEffect_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoTimedLedEffect_FeedbackMessage_

// alias to use template instance with default allocator
using DoTimedLedEffect_FeedbackMessage =
  pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pal_device_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace pal_device_msgs
{

namespace action
{

struct DoTimedLedEffect
{
  /// The goal message defined in the action definition.
  using Goal = pal_device_msgs::action::DoTimedLedEffect_Goal;
  /// The result message defined in the action definition.
  using Result = pal_device_msgs::action::DoTimedLedEffect_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pal_device_msgs::action::DoTimedLedEffect_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pal_device_msgs::action::DoTimedLedEffect_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pal_device_msgs::action::DoTimedLedEffect_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DoTimedLedEffect DoTimedLedEffect;

}  // namespace action

}  // namespace pal_device_msgs

#endif  // PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__STRUCT_HPP_
