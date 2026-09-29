// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:srv/TimedColourEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__STRUCT_H_
#define PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'leds'
#include "pal_device_msgs/msg/detail/led_group__struct.h"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"
// Member 'effect_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/TimedColourEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__srv__TimedColourEffect_Request
{
  pal_device_msgs__msg__LedGroup leds;
  /// RGBA of color, transparency is not available in leds, so alpha will be ignored
  std_msgs__msg__ColorRGBA color;
  /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
  builtin_interfaces__msg__Duration effect_duration;
  /// priority of the effect, 0 is no priority, 255 is max priority
  uint8_t priority;
} pal_device_msgs__srv__TimedColourEffect_Request;

// Struct for a sequence of pal_device_msgs__srv__TimedColourEffect_Request.
typedef struct pal_device_msgs__srv__TimedColourEffect_Request__Sequence
{
  pal_device_msgs__srv__TimedColourEffect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__srv__TimedColourEffect_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TimedColourEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__srv__TimedColourEffect_Response
{
  uint32_t effect_id;
} pal_device_msgs__srv__TimedColourEffect_Response;

// Struct for a sequence of pal_device_msgs__srv__TimedColourEffect_Response.
typedef struct pal_device_msgs__srv__TimedColourEffect_Response__Sequence
{
  pal_device_msgs__srv__TimedColourEffect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__srv__TimedColourEffect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_COLOUR_EFFECT__STRUCT_H_
