// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedDataArrayParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/LedDataArrayParams in the package pal_device_msgs.
/**
  * Data of the effect, each element in the array represents a led,
  * length should match device led count
  * For devices with no RGB option, just the alpha channel will be used
 */
typedef struct pal_device_msgs__msg__LedDataArrayParams
{
  std_msgs__msg__ColorRGBA__Sequence data;
} pal_device_msgs__msg__LedDataArrayParams;

// Struct for a sequence of pal_device_msgs__msg__LedDataArrayParams.
typedef struct pal_device_msgs__msg__LedDataArrayParams__Sequence
{
  pal_device_msgs__msg__LedDataArrayParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedDataArrayParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_DATA_ARRAY_PARAMS__STRUCT_H_
