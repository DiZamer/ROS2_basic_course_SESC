// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedProgressParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_PROGRESS_PARAMS__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_PROGRESS_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first_color'
// Member 'second_color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/LedProgressParams in the package pal_device_msgs.
/**
  * RGBA of color, alpha will be used as intensity if supported by the led
 */
typedef struct pal_device_msgs__msg__LedProgressParams
{
  std_msgs__msg__ColorRGBA first_color;
  std_msgs__msg__ColorRGBA second_color;
  /// Percentage of pixels painted with the first color
  float percentage;
  /// Offset to begin painting the first color
  float led_offset;
} pal_device_msgs__msg__LedProgressParams;

// Struct for a sequence of pal_device_msgs__msg__LedProgressParams.
typedef struct pal_device_msgs__msg__LedProgressParams__Sequence
{
  pal_device_msgs__msg__LedProgressParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedProgressParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_PROGRESS_PARAMS__STRUCT_H_
