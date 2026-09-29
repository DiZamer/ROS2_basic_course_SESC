// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedFadeParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__STRUCT_H_

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
// Member 'transition_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/LedFadeParams in the package pal_device_msgs.
/**
  * RGBA of color, alpha will be used as intensity if supported by the led
 */
typedef struct pal_device_msgs__msg__LedFadeParams
{
  std_msgs__msg__ColorRGBA first_color;
  std_msgs__msg__ColorRGBA second_color;
  /// Duration of the transition from one color to the other
  builtin_interfaces__msg__Duration transition_duration;
  /// Perform a fade when going from secondColor to firstColor
  bool reverse_fade;
} pal_device_msgs__msg__LedFadeParams;

// Struct for a sequence of pal_device_msgs__msg__LedFadeParams.
typedef struct pal_device_msgs__msg__LedFadeParams__Sequence
{
  pal_device_msgs__msg__LedFadeParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedFadeParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FADE_PARAMS__STRUCT_H_
