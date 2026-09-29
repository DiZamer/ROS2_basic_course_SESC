// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedRainbowParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transition_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/LedRainbowParams in the package pal_device_msgs.
/**
  * Time to perform rainbow
 */
typedef struct pal_device_msgs__msg__LedRainbowParams
{
  builtin_interfaces__msg__Duration transition_duration;
} pal_device_msgs__msg__LedRainbowParams;

// Struct for a sequence of pal_device_msgs__msg__LedRainbowParams.
typedef struct pal_device_msgs__msg__LedRainbowParams__Sequence
{
  pal_device_msgs__msg__LedRainbowParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedRainbowParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__STRUCT_H_
