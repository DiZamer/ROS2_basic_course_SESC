// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:srv/ShutdownAndWakeUpRobot.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__STRUCT_H_
#define PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shutdown_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/ShutdownAndWakeUpRobot in the package pal_device_msgs.
typedef struct pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request
{
  builtin_interfaces__msg__Duration shutdown_duration;
} pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request;

// Struct for a sequence of pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request.
typedef struct pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence
{
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ShutdownAndWakeUpRobot in the package pal_device_msgs.
typedef struct pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response
{
  uint8_t structure_needs_at_least_one_member;
} pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response;

// Struct for a sequence of pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response.
typedef struct pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence
{
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__SHUTDOWN_AND_WAKE_UP_ROBOT__STRUCT_H_
