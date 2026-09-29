// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_device_msgs:action/DoTimedLedEffect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
#include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_device_msgs/action/detail/do_timed_led_effect__functions.h"
#include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"


// Include directives for member types
// Member `devices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `params`
#include "pal_device_msgs/msg/led_effect_params.h"
// Member `params`
#include "pal_device_msgs/msg/detail/led_effect_params__rosidl_typesupport_introspection_c.h"
// Member `effect_duration`
#include "builtin_interfaces/msg/duration.h"
// Member `effect_duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__action__DoTimedLedEffect_Goal__init(message_memory);
}

void pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_fini_function(void * message_memory)
{
  pal_device_msgs__action__DoTimedLedEffect_Goal__fini(message_memory);
}

size_t pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__size_function__DoTimedLedEffect_Goal__devices(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__get_const_function__DoTimedLedEffect_Goal__devices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__get_function__DoTimedLedEffect_Goal__devices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__fetch_function__DoTimedLedEffect_Goal__devices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__get_const_function__DoTimedLedEffect_Goal__devices(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__assign_function__DoTimedLedEffect_Goal__devices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__get_function__DoTimedLedEffect_Goal__devices(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__resize_function__DoTimedLedEffect_Goal__devices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_member_array[4] = {
  {
    "devices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_Goal, devices),  // bytes offset in struct
    NULL,  // default value
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__size_function__DoTimedLedEffect_Goal__devices,  // size() function pointer
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__get_const_function__DoTimedLedEffect_Goal__devices,  // get_const(index) function pointer
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__get_function__DoTimedLedEffect_Goal__devices,  // get(index) function pointer
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__fetch_function__DoTimedLedEffect_Goal__devices,  // fetch(index, &value) function pointer
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__assign_function__DoTimedLedEffect_Goal__devices,  // assign(index, value) function pointer
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__resize_function__DoTimedLedEffect_Goal__devices  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_Goal, params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effect_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_Goal, effect_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_Goal, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_members = {
  "pal_device_msgs__action",  // message namespace
  "DoTimedLedEffect_Goal",  // message name
  4,  // number of fields
  sizeof(pal_device_msgs__action__DoTimedLedEffect_Goal),
  pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_member_array,  // message members
  pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_type_support_handle = {
  0,
  &pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_Goal)() {
  pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedEffectParams)();
  pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__action__DoTimedLedEffect_Goal__rosidl_typesupport_introspection_c__DoTimedLedEffect_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__functions.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__action__DoTimedLedEffect_Result__init(message_memory);
}

void pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_fini_function(void * message_memory)
{
  pal_device_msgs__action__DoTimedLedEffect_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_Result, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_message_members = {
  "pal_device_msgs__action",  // message namespace
  "DoTimedLedEffect_Result",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs__action__DoTimedLedEffect_Result),
  pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_message_member_array,  // message members
  pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_message_type_support_handle = {
  0,
  &pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_Result)() {
  if (!pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__action__DoTimedLedEffect_Result__rosidl_typesupport_introspection_c__DoTimedLedEffect_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__functions.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__action__DoTimedLedEffect_Feedback__init(message_memory);
}

void pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_fini_function(void * message_memory)
{
  pal_device_msgs__action__DoTimedLedEffect_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_message_members = {
  "pal_device_msgs__action",  // message namespace
  "DoTimedLedEffect_Feedback",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs__action__DoTimedLedEffect_Feedback),
  pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_message_member_array,  // message members
  pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_message_type_support_handle = {
  0,
  &pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_Feedback)() {
  if (!pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__action__DoTimedLedEffect_Feedback__rosidl_typesupport_introspection_c__DoTimedLedEffect_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__functions.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "pal_device_msgs/action/do_timed_led_effect.h"
// Member `goal`
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__init(message_memory);
}

void pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_fini_function(void * message_memory)
{
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_members = {
  "pal_device_msgs__action",  // message namespace
  "DoTimedLedEffect_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request),
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_member_array,  // message members
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_type_support_handle = {
  0,
  &pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_SendGoal_Request)() {
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_Goal)();
  if (!pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__functions.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__init(message_memory);
}

void pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_fini_function(void * message_memory)
{
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_members = {
  "pal_device_msgs__action",  // message namespace
  "DoTimedLedEffect_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response),
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_member_array,  // message members
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_type_support_handle = {
  0,
  &pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_SendGoal_Response)() {
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_service_members = {
  "pal_device_msgs__action",  // service namespace
  "DoTimedLedEffect_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_service_type_support_handle = {
  0,
  &pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_SendGoal)() {
  if (!pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_service_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_SendGoal_Response)()->data;
  }

  return &pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__functions.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__init(message_memory);
}

void pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_fini_function(void * message_memory)
{
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_members = {
  "pal_device_msgs__action",  // message namespace
  "DoTimedLedEffect_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs__action__DoTimedLedEffect_GetResult_Request),
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_member_array,  // message members
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_type_support_handle = {
  0,
  &pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_GetResult_Request)() {
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__functions.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "pal_device_msgs/action/do_timed_led_effect.h"
// Member `result`
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__init(message_memory);
}

void pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_fini_function(void * message_memory)
{
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_members = {
  "pal_device_msgs__action",  // message namespace
  "DoTimedLedEffect_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pal_device_msgs__action__DoTimedLedEffect_GetResult_Response),
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_member_array,  // message members
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_type_support_handle = {
  0,
  &pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_GetResult_Response)() {
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_Result)();
  if (!pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_service_members = {
  "pal_device_msgs__action",  // service namespace
  "DoTimedLedEffect_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_service_type_support_handle = {
  0,
  &pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_GetResult)() {
  if (!pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_service_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_GetResult_Response)()->data;
  }

  return &pal_device_msgs__action__detail__do_timed_led_effect__rosidl_typesupport_introspection_c__DoTimedLedEffect_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__functions.h"
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "pal_device_msgs/action/do_timed_led_effect.h"
// Member `feedback`
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__init(message_memory);
}

void pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_fini_function(void * message_memory)
{
  pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_members = {
  "pal_device_msgs__action",  // message namespace
  "DoTimedLedEffect_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage),
  pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_member_array,  // message members
  pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_type_support_handle = {
  0,
  &pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_FeedbackMessage)() {
  pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, action, DoTimedLedEffect_Feedback)();
  if (!pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__rosidl_typesupport_introspection_c__DoTimedLedEffect_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
