// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedGroup.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LEFT_EAR'.
enum
{
  pal_device_msgs__msg__LedGroup__LEFT_EAR = 1
};

/// Constant 'RIGHT_EAR'.
enum
{
  pal_device_msgs__msg__LedGroup__RIGHT_EAR = 2
};

/// Struct defined in msg/LedGroup in the package pal_device_msgs.
typedef struct pal_device_msgs__msg__LedGroup
{
  /// OR-mask of the selected leds
  uint32_t led_mask;
} pal_device_msgs__msg__LedGroup;

// Struct for a sequence of pal_device_msgs__msg__LedGroup.
typedef struct pal_device_msgs__msg__LedGroup__Sequence
{
  pal_device_msgs__msg__LedGroup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedGroup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_GROUP__STRUCT_H_
