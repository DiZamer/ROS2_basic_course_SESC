// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedFixedColorParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FIXED_COLOR_PARAMS__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FIXED_COLOR_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/LedFixedColorParams in the package pal_device_msgs.
/**
  * RGBA of color, alpha will be used as intensity if supported by the led
 */
typedef struct pal_device_msgs__msg__LedFixedColorParams
{
  std_msgs__msg__ColorRGBA color;
} pal_device_msgs__msg__LedFixedColorParams;

// Struct for a sequence of pal_device_msgs__msg__LedFixedColorParams.
typedef struct pal_device_msgs__msg__LedFixedColorParams__Sequence
{
  pal_device_msgs__msg__LedFixedColorParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedFixedColorParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FIXED_COLOR_PARAMS__STRUCT_H_
