// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_device_msgs:msg/LedPreProgrammedParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__rosidl_typesupport_introspection_c.h"
#include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__functions.h"
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__msg__LedPreProgrammedParams__init(message_memory);
}

void pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_fini_function(void * message_memory)
{
  pal_device_msgs__msg__LedPreProgrammedParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_message_member_array[1] = {
  {
    "preprogrammed_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedPreProgrammedParams, preprogrammed_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_message_members = {
  "pal_device_msgs__msg",  // message namespace
  "LedPreProgrammedParams",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs__msg__LedPreProgrammedParams),
  pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_message_member_array,  // message members
  pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_message_type_support_handle = {
  0,
  &pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedPreProgrammedParams)() {
  if (!pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__msg__LedPreProgrammedParams__rosidl_typesupport_introspection_c__LedPreProgrammedParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
