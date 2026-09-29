// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FULL'.
enum
{
  pal_device_msgs__msg__BatteryState__FULL = 5
};

/// Constant 'HIGH'.
enum
{
  pal_device_msgs__msg__BatteryState__HIGH = 4
};

/// Constant 'MEDIUM'.
enum
{
  pal_device_msgs__msg__BatteryState__MEDIUM = 3
};

/// Constant 'LOW'.
enum
{
  pal_device_msgs__msg__BatteryState__LOW = 2
};

/// Constant 'CRITICAL_LOW'.
enum
{
  pal_device_msgs__msg__BatteryState__CRITICAL_LOW = 1
};

/// Struct defined in msg/BatteryState in the package pal_device_msgs.
typedef struct pal_device_msgs__msg__BatteryState
{
  int8_t charge_state;
  float battery_percentage;
} pal_device_msgs__msg__BatteryState;

// Struct for a sequence of pal_device_msgs__msg__BatteryState.
typedef struct pal_device_msgs__msg__BatteryState__Sequence
{
  pal_device_msgs__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__msg__BatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
