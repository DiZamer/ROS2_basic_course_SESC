// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_device_msgs:msg/LedDataArrayParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_device_msgs/msg/detail/led_data_array_params__rosidl_typesupport_introspection_c.h"
#include "pal_device_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_device_msgs/msg/detail/led_data_array_params__functions.h"
#include "pal_device_msgs/msg/detail/led_data_array_params__struct.h"


// Include directives for member types
// Member `data`
#include "std_msgs/msg/color_rgba.h"
// Member `data`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_device_msgs__msg__LedDataArrayParams__init(message_memory);
}

void pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_fini_function(void * message_memory)
{
  pal_device_msgs__msg__LedDataArrayParams__fini(message_memory);
}

size_t pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__size_function__LedDataArrayParams__data(
  const void * untyped_member)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return member->size;
}

const void * pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__get_const_function__LedDataArrayParams__data(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__get_function__LedDataArrayParams__data(
  void * untyped_member, size_t index)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__fetch_function__LedDataArrayParams__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__ColorRGBA * item =
    ((const std_msgs__msg__ColorRGBA *)
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__get_const_function__LedDataArrayParams__data(untyped_member, index));
  std_msgs__msg__ColorRGBA * value =
    (std_msgs__msg__ColorRGBA *)(untyped_value);
  *value = *item;
}

void pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__assign_function__LedDataArrayParams__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__ColorRGBA * item =
    ((std_msgs__msg__ColorRGBA *)
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__get_function__LedDataArrayParams__data(untyped_member, index));
  const std_msgs__msg__ColorRGBA * value =
    (const std_msgs__msg__ColorRGBA *)(untyped_value);
  *item = *value;
}

bool pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__resize_function__LedDataArrayParams__data(
  void * untyped_member, size_t size)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  std_msgs__msg__ColorRGBA__Sequence__fini(member);
  return std_msgs__msg__ColorRGBA__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_device_msgs__msg__LedDataArrayParams, data),  // bytes offset in struct
    NULL,  // default value
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__size_function__LedDataArrayParams__data,  // size() function pointer
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__get_const_function__LedDataArrayParams__data,  // get_const(index) function pointer
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__get_function__LedDataArrayParams__data,  // get(index) function pointer
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__fetch_function__LedDataArrayParams__data,  // fetch(index, &value) function pointer
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__assign_function__LedDataArrayParams__data,  // assign(index, value) function pointer
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__resize_function__LedDataArrayParams__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_members = {
  "pal_device_msgs__msg",  // message namespace
  "LedDataArrayParams",  // message name
  1,  // number of fields
  sizeof(pal_device_msgs__msg__LedDataArrayParams),
  pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_member_array,  // message members
  pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_type_support_handle = {
  0,
  &pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_device_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_device_msgs, msg, LedDataArrayParams)() {
  pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  if (!pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_type_support_handle.typesupport_identifier) {
    pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_device_msgs__msg__LedDataArrayParams__rosidl_typesupport_introspection_c__LedDataArrayParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
