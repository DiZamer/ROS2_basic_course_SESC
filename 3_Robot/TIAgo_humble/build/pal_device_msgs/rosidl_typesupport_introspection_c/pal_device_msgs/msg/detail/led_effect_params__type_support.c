// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_device_msgs:msg/LedEffectParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_device_msgs/msg/detail/led_effect_params__rosidl_typesupport_introspection_c.h"
#include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_device_msgs/msg/detail/led_effect_params__functions.h"
#include "pal_device_msgs/msg/detail/led_effect_params__struct.h"


// Include directives for member types
// Member `fixed_color`
#include "pal_device_msgs/msg/led_fixed_color_params.h"
// Member `fixed_color`
#include "pal_device_msgs/msg/detail/led_fixed_color_params__rosidl_typesupport_introspection_c.h"
// Member `rainbow`
#include "pal_device_msgs/msg/led_rainbow_params.h"
// Member `rainbow`
#include "pal_device_msgs/msg/detail/led_rainbow_params__rosidl_typesupport_introspection_c.h"
// Member `fade`
#include "pal_device_msgs/msg/led_fade_params.h"
// Member `fade`
#include "pal_device_msgs/msg/detail/led_fade_params__rosidl_typesupport_introspection_c.h"
// Member `blink`
#include "pal_device_msgs/msg/led_blink_params.h"
// Member `blink`
#include "pal_device_msgs/msg/detail/led_blink_params__rosidl_typesupport_introspection_c.h"
// Member `progress`
#include "pal_device_msgs/msg/led_progress_params.h"
// Member `progress`
#include "pal_device_msgs/msg/detail/led_progress_params__rosidl_typesupport_introspection_c.h"
// Member `flow`
#include "pal_device_msgs/msg/led_flow_params.h"
// Member `flow`
#include "pal_device_msgs/msg/detail/led_flow_params__rosidl_typesupport_introspection_c.h"
// Member `preprogrammed`
#include "pal_device_msgs/msg/led_pre_programmed_params.h"
// Member `preprogrammed`
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__rosidl_typesupport_introspection_c.h"
// Member `effect_via_topic`
#include "pal_device_msgs/msg/led_effect_via_topic_params.h"
// Member `effect_via_topic`
#include "pal_device_msgs/msg/detail/led_effect_via_topic_params__rosidl_typesupport_introspection_c.h"
// Member `data_array`
#include "pal_device_msgs/msg/led_data_array_params.h"
// Member `data_array`
#include "pal_device_msgs/msg/detail/led_data_array_params__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__msg__LedEffectParams__init(message_memory);
}

void pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_fini_function(void * message_memory)
{
  pal_device_msgs__msg__LedEffectParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[10] = {
  {
    "effect_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, effect_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, fixed_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rainbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, rainbow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fade",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, fade),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blink",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, blink),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, flow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "preprogrammed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, preprogrammed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effect_via_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, effect_via_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedEffectParams, data_array),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_members = {
  "pal_device_msgs__msg",  // message namespace
  "LedEffectParams",  // message name
  10,  // number of fields
  sizeof(pal_device_msgs__msg__LedEffectParams),
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array,  // message members
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_type_support_handle = {
  0,
  &pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedEffectParams)() {
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedFixedColorParams)();
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedRainbowParams)();
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedFadeParams)();
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedBlinkParams)();
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedProgressParams)();
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedFlowParams)();
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedPreProgrammedParams)();
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedEffectViaTopicParams)();
  pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedDataArrayParams)();
  if (!pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__msg__LedEffectParams__rosidl_typesupport_introspection_c__LedEffectParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
