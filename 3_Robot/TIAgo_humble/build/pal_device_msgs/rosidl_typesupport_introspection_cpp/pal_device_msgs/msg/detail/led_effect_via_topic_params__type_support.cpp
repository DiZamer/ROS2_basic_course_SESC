// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pal_device_msgs:msg/LedEffectViaTopicParams.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pal_device_msgs/msg/detail/led_effect_via_topic_params__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pal_device_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LedEffectViaTopicParams_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pal_device_msgs::msg::LedEffectViaTopicParams(_init);
}

void LedEffectViaTopicParams_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pal_device_msgs::msg::LedEffectViaTopicParams *>(message_memory);
  typed_message->~LedEffectViaTopicParams();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LedEffectViaTopicParams_message_member_array[1] = {
  {
    "topic_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs::msg::LedEffectViaTopicParams, topic_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LedEffectViaTopicParams_message_members = {
  "pal_device_msgs::msg",  // message namespace
  "LedEffectViaTopicParams",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs::msg::LedEffectViaTopicParams),
  LedEffectViaTopicParams_message_member_array,  // message members
  LedEffectViaTopicParams_init_function,  // function to initialize message memory (memory has to be allocated)
  LedEffectViaTopicParams_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LedEffectViaTopicParams_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LedEffectViaTopicParams_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pal_device_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pal_device_msgs::msg::LedEffectViaTopicParams>()
{
  return &::pal_device_msgs::msg::rosidl_typesupport_introspection_cpp::LedEffectViaTopicParams_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pal_device_msgs, msg, LedEffectViaTopicParams)() {
  return &::pal_device_msgs::msg::rosidl_typesupport_introspection_cpp::LedEffectViaTopicParams_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
