// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedPreProgrammedParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LedPreProgrammedParams in the package pal_device_msgs.
/**
  * Id of pre-programmed effect, most likely device specific
 */
typedef struct pal_device_msgs__msg__LedPreProgrammedParams
{
  uint8_t preprogrammed_id;
} pal_device_msgs__msg__LedPreProgrammedParams;

// Struct for a sequence of pal_device_msgs__msg__LedPreProgrammedParams.
typedef struct pal_device_msgs__msg__LedPreProgrammedParams__Sequence
{
  pal_device_msgs__msg__LedPreProgrammedParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedPreProgrammedParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__STRUCT_H_
