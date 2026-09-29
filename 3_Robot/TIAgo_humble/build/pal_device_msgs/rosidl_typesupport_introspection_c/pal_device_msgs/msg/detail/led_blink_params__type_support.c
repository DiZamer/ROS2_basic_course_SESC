// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_device_msgs:msg/LedBlinkParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_device_msgs/msg/detail/led_blink_params__rosidl_typesupport_introspection_c.h"
#include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_device_msgs/msg/detail/led_blink_params__functions.h"
#include "pal_device_msgs/msg/detail/led_blink_params__struct.h"


// Include directives for member types
// Member `first_color`
// Member `second_color`
#include "std_msgs/msg/color_rgba.h"
// Member `first_color`
// Member `second_color`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"
// Member `first_color_duration`
// Member `second_color_duration`
#include "builtin_interfaces/msg/duration.h"
// Member `first_color_duration`
// Member `second_color_duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__msg__LedBlinkParams__init(message_memory);
}

void pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_fini_function(void * message_memory)
{
  pal_device_msgs__msg__LedBlinkParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_member_array[4] = {
  {
    "first_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedBlinkParams, first_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedBlinkParams, second_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "first_color_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedBlinkParams, first_color_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second_color_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedBlinkParams, second_color_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_members = {
  "pal_device_msgs__msg",  // message namespace
  "LedBlinkParams",  // message name
  4,  // number of fields
  sizeof(pal_device_msgs__msg__LedBlinkParams),
  pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_member_array,  // message members
  pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_type_support_handle = {
  0,
  &pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedBlinkParams)() {
  pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__msg__LedBlinkParams__rosidl_typesupport_introspection_c__LedBlinkParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
