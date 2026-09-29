// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:srv/CancelEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__STRUCT_H_
#define PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CancelEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__srv__CancelEffect_Request
{
  uint32_t effect_id;
} pal_device_msgs__srv__CancelEffect_Request;

// Struct for a sequence of pal_device_msgs__srv__CancelEffect_Request.
typedef struct pal_device_msgs__srv__CancelEffect_Request__Sequence
{
  pal_device_msgs__srv__CancelEffect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__srv__CancelEffect_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CancelEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__srv__CancelEffect_Response
{
  uint8_t structure_needs_at_least_one_member;
} pal_device_msgs__srv__CancelEffect_Response;

// Struct for a sequence of pal_device_msgs__srv__CancelEffect_Response.
typedef struct pal_device_msgs__srv__CancelEffect_Response__Sequence
{
  pal_device_msgs__srv__CancelEffect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__srv__CancelEffect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__CANCEL_EFFECT__STRUCT_H_
