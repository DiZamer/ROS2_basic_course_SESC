// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Bumper in the package pal_device_msgs.
/**
  * ROS header
 */
typedef struct pal_device_msgs__msg__Bumper
{
  std_msgs__msg__Header header;
  /// Whether the bumper is being pressed
  bool is_pressed;
} pal_device_msgs__msg__Bumper;

// Struct for a sequence of pal_device_msgs__msg__Bumper.
typedef struct pal_device_msgs__msg__Bumper__Sequence
{
  pal_device_msgs__msg__Bumper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__Bumper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_
