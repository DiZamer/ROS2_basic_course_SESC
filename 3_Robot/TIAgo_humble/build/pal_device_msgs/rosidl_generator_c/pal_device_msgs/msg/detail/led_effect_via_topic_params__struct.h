// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedEffectViaTopicParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_VIA_TOPIC_PARAMS__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_VIA_TOPIC_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LedEffectViaTopicParams in the package pal_device_msgs.
/**
  * Topic name, must be of type pal_device_msgs/LedDataArray
 */
typedef struct pal_device_msgs__msg__LedEffectViaTopicParams
{
  rosidl_runtime_c__String topic_name;
} pal_device_msgs__msg__LedEffectViaTopicParams;

// Struct for a sequence of pal_device_msgs__msg__LedEffectViaTopicParams.
typedef struct pal_device_msgs__msg__LedEffectViaTopicParams__Sequence
{
  pal_device_msgs__msg__LedEffectViaTopicParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedEffectViaTopicParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_VIA_TOPIC_PARAMS__STRUCT_H_
