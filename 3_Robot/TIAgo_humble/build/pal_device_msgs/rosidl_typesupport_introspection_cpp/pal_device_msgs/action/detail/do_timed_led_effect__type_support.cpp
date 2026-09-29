// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pal_device_msgs:action/DoTimedLedEffect.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DoTimedLedEffect_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::action::DoTimedLedEffect_Goal(_init);
}

void DoTimedLedEffect_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::action::DoTimedLedEffect_Goal *>(message_memory);
  typed_message->~DoTimedLedEffect_Goal();
}

size_t size_function__DoTimedLedEffect_Goal__devices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DoTimedLedEffect_Goal__devices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DoTimedLedEffect_Goal__devices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__DoTimedLedEffect_Goal__devices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__DoTimedLedEffect_Goal__devices(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__DoTimedLedEffect_Goal__devices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__DoTimedLedEffect_Goal__devices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__DoTimedLedEffect_Goal__devices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoTimedLedEffect_Goal_message_member_array[4] = {
  {
    "devices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_Goal, devices),  // bytes offset in struct
    nullptr,  // default value
    size_function__DoTimedLedEffect_Goal__devices,  // size() function pointer
    get_const_function__DoTimedLedEffect_Goal__devices,  // get_const(index) function pointer
    get_function__DoTimedLedEffect_Goal__devices,  // get(index) function pointer
    fetch_function__DoTimedLedEffect_Goal__devices,  // fetch(index, &value) function pointer
    assign_function__DoTimedLedEffect_Goal__devices,  // assign(index, value) function pointer
    resize_function__DoTimedLedEffect_Goal__devices  // resize(index) function pointer
  },
  {
    "params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pal_device_msgs::msg::LedEffectParams>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_Goal, params),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "effect_duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_Goal, effect_duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_Goal, priority),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoTimedLedEffect_Goal_message_members = {
  "pal_device_msgs::action",  // message namespace
  "DoTimedLedEffect_Goal",  // message name
  4,  // number of fields
  sizeof(pal_device_msgs::action::DoTimedLedEffect_Goal),
  DoTimedLedEffect_Goal_message_member_array,  // message members
  DoTimedLedEffect_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  DoTimedLedEffect_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoTimedLedEffect_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_Goal>()
{
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_Goal)() {
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DoTimedLedEffect_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::action::DoTimedLedEffect_Result(_init);
}

void DoTimedLedEffect_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::action::DoTimedLedEffect_Result *>(message_memory);
  typed_message->~DoTimedLedEffect_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoTimedLedEffect_Result_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_Result, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoTimedLedEffect_Result_message_members = {
  "pal_device_msgs::action",  // message namespace
  "DoTimedLedEffect_Result",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs::action::DoTimedLedEffect_Result),
  DoTimedLedEffect_Result_message_member_array,  // message members
  DoTimedLedEffect_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  DoTimedLedEffect_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoTimedLedEffect_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_Result>()
{
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_Result)() {
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DoTimedLedEffect_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::action::DoTimedLedEffect_Feedback(_init);
}

void DoTimedLedEffect_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::action::DoTimedLedEffect_Feedback *>(message_memory);
  typed_message->~DoTimedLedEffect_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoTimedLedEffect_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoTimedLedEffect_Feedback_message_members = {
  "pal_device_msgs::action",  // message namespace
  "DoTimedLedEffect_Feedback",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs::action::DoTimedLedEffect_Feedback),
  DoTimedLedEffect_Feedback_message_member_array,  // message members
  DoTimedLedEffect_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  DoTimedLedEffect_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoTimedLedEffect_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_Feedback>()
{
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_Feedback)() {
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DoTimedLedEffect_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request(_init);
}

void DoTimedLedEffect_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request *>(message_memory);
  typed_message->~DoTimedLedEffect_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoTimedLedEffect_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoTimedLedEffect_SendGoal_Request_message_members = {
  "pal_device_msgs::action",  // message namespace
  "DoTimedLedEffect_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request),
  DoTimedLedEffect_SendGoal_Request_message_member_array,  // message members
  DoTimedLedEffect_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DoTimedLedEffect_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoTimedLedEffect_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request>()
{
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_SendGoal_Request)() {
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DoTimedLedEffect_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response(_init);
}

void DoTimedLedEffect_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response *>(message_memory);
  typed_message->~DoTimedLedEffect_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoTimedLedEffect_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoTimedLedEffect_SendGoal_Response_message_members = {
  "pal_device_msgs::action",  // message namespace
  "DoTimedLedEffect_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response),
  DoTimedLedEffect_SendGoal_Response_message_member_array,  // message members
  DoTimedLedEffect_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DoTimedLedEffect_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoTimedLedEffect_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response>()
{
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_SendGoal_Response)() {
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DoTimedLedEffect_SendGoal_service_members = {
  "pal_device_msgs::action",  // service namespace
  "DoTimedLedEffect_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t DoTimedLedEffect_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pal_device_msgs::action::DoTimedLedEffect_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DoTimedLedEffect_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::action::DoTimedLedEffect_GetResult_Request(_init);
}

void DoTimedLedEffect_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request *>(message_memory);
  typed_message->~DoTimedLedEffect_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoTimedLedEffect_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoTimedLedEffect_GetResult_Request_message_members = {
  "pal_device_msgs::action",  // message namespace
  "DoTimedLedEffect_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs::action::DoTimedLedEffect_GetResult_Request),
  DoTimedLedEffect_GetResult_Request_message_member_array,  // message members
  DoTimedLedEffect_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DoTimedLedEffect_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoTimedLedEffect_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_GetResult_Request>()
{
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_GetResult_Request)() {
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DoTimedLedEffect_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::action::DoTimedLedEffect_GetResult_Response(_init);
}

void DoTimedLedEffect_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response *>(message_memory);
  typed_message->~DoTimedLedEffect_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoTimedLedEffect_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoTimedLedEffect_GetResult_Response_message_members = {
  "pal_device_msgs::action",  // message namespace
  "DoTimedLedEffect_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pal_device_msgs::action::DoTimedLedEffect_GetResult_Response),
  DoTimedLedEffect_GetResult_Response_message_member_array,  // message members
  DoTimedLedEffect_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DoTimedLedEffect_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoTimedLedEffect_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_GetResult_Response>()
{
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_GetResult_Response)() {
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DoTimedLedEffect_GetResult_service_members = {
  "pal_device_msgs::action",  // service namespace
  "DoTimedLedEffect_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t DoTimedLedEffect_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pal_device_msgs::action::DoTimedLedEffect_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pal_device_msgs::action::DoTimedLedEffect_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DoTimedLedEffect_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage(_init);
}

void DoTimedLedEffect_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage *>(message_memory);
  typed_message->~DoTimedLedEffect_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoTimedLedEffect_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoTimedLedEffect_FeedbackMessage_message_members = {
  "pal_device_msgs::action",  // message namespace
  "DoTimedLedEffect_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage),
  DoTimedLedEffect_FeedbackMessage_message_member_array,  // message members
  DoTimedLedEffect_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DoTimedLedEffect_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoTimedLedEffect_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoTimedLedEffect_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::action::DoTimedLedEffect_FeedbackMessage>()
{
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, action, DoTimedLedEffect_FeedbackMessage)() {
  return &::pal_device_msgs::action::rosidl_typesupport_introspection_cpp::DoTimedLedEffect_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
