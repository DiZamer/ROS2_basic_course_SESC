// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/LedEffectParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FIXED_COLOR'.
enum
{
  pal_device_msgs__msg__LedEffectParams__FIXED_COLOR = 0
};

/// Constant 'RAINBOW'.
enum
{
  pal_device_msgs__msg__LedEffectParams__RAINBOW = 1
};

/// Constant 'FADE'.
enum
{
  pal_device_msgs__msg__LedEffectParams__FADE = 2
};

/// Constant 'BLINK'.
enum
{
  pal_device_msgs__msg__LedEffectParams__BLINK = 3
};

/// Constant 'PROGRESS'.
enum
{
  pal_device_msgs__msg__LedEffectParams__PROGRESS = 4
};

/// Constant 'FLOW'.
enum
{
  pal_device_msgs__msg__LedEffectParams__FLOW = 5
};

/// Constant 'PREPROGRAMMED_EFFECT'.
enum
{
  pal_device_msgs__msg__LedEffectParams__PREPROGRAMMED_EFFECT = 6
};

/// Constant 'EFFECT_VIA_TOPIC'.
enum
{
  pal_device_msgs__msg__LedEffectParams__EFFECT_VIA_TOPIC = 7
};

/// Constant 'DATA_ARRAY'.
enum
{
  pal_device_msgs__msg__LedEffectParams__DATA_ARRAY = 8
};

// Include directives for member types
// Member 'fixed_color'
#include "pal_device_msgs/msg/detail/led_fixed_color_params__struct.h"
// Member 'rainbow'
#include "pal_device_msgs/msg/detail/led_rainbow_params__struct.h"
// Member 'fade'
#include "pal_device_msgs/msg/detail/led_fade_params__struct.h"
// Member 'blink'
#include "pal_device_msgs/msg/detail/led_blink_params__struct.h"
// Member 'progress'
#include "pal_device_msgs/msg/detail/led_progress_params__struct.h"
// Member 'flow'
#include "pal_device_msgs/msg/detail/led_flow_params__struct.h"
// Member 'preprogrammed'
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__struct.h"
// Member 'effect_via_topic'
#include "pal_device_msgs/msg/detail/led_effect_via_topic_params__struct.h"
// Member 'data_array'
#include "pal_device_msgs/msg/detail/led_data_array_params__struct.h"

/// Struct defined in msg/LedEffectParams in the package pal_device_msgs.
typedef struct pal_device_msgs__msg__LedEffectParams
{
  uint8_t effect_type;
  /// RGBA of color, alpha will be used as intensity if supported by the led
  pal_device_msgs__msg__LedFixedColorParams fixed_color;
  pal_device_msgs__msg__LedRainbowParams rainbow;
  pal_device_msgs__msg__LedFadeParams fade;
  pal_device_msgs__msg__LedBlinkParams blink;
  pal_device_msgs__msg__LedProgressParams progress;
  pal_device_msgs__msg__LedFlowParams flow;
  /// Below are device specific, avoid them if you can
  pal_device_msgs__msg__LedPreProgrammedParams preprogrammed;
  pal_device_msgs__msg__LedEffectViaTopicParams effect_via_topic;
  pal_device_msgs__msg__LedDataArrayParams data_array;
} pal_device_msgs__msg__LedEffectParams;

// Struct for a sequence of pal_device_msgs__msg__LedEffectParams.
typedef struct pal_device_msgs__msg__LedEffectParams__Sequence
{
  pal_device_msgs__msg__LedEffectParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__LedEffectParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_EFFECT_PARAMS__STRUCT_H_
