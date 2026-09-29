// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_device_msgs:action/DoTimedLedEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__STRUCT_H_
#define PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'devices'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'params'
#include "pal_device_msgs/msg/detail/led_effect_params__struct.h"
// Member 'effect_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/DoTimedLedEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__action__DoTimedLedEffect_Goal
{
  rosidl_runtime_c__uint32__Sequence devices;
  /// Contains parameters for all led effects, but only the selected effect type parameters shall be provided
  pal_device_msgs__msg__LedEffectParams params;
  /// Duration of the effect, when the time is over the previous effect will be restored. 0 will make it display forever
  builtin_interfaces__msg__Duration effect_duration;
  /// priority of the effect, 0 is no priority, 255 is max priority
  uint8_t priority;
} pal_device_msgs__action__DoTimedLedEffect_Goal;

// Struct for a sequence of pal_device_msgs__action__DoTimedLedEffect_Goal.
typedef struct pal_device_msgs__action__DoTimedLedEffect_Goal__Sequence
{
  pal_device_msgs__action__DoTimedLedEffect_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__action__DoTimedLedEffect_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/DoTimedLedEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__action__DoTimedLedEffect_Result
{
  uint8_t structure_needs_at_least_one_member;
} pal_device_msgs__action__DoTimedLedEffect_Result;

// Struct for a sequence of pal_device_msgs__action__DoTimedLedEffect_Result.
typedef struct pal_device_msgs__action__DoTimedLedEffect_Result__Sequence
{
  pal_device_msgs__action__DoTimedLedEffect_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__action__DoTimedLedEffect_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/DoTimedLedEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__action__DoTimedLedEffect_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} pal_device_msgs__action__DoTimedLedEffect_Feedback;

// Struct for a sequence of pal_device_msgs__action__DoTimedLedEffect_Feedback.
typedef struct pal_device_msgs__action__DoTimedLedEffect_Feedback__Sequence
{
  pal_device_msgs__action__DoTimedLedEffect_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__action__DoTimedLedEffect_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"

/// Struct defined in action/DoTimedLedEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pal_device_msgs__action__DoTimedLedEffect_Goal goal;
} pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request;

// Struct for a sequence of pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request.
typedef struct pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__Sequence
{
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__action__DoTimedLedEffect_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DoTimedLedEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response;

// Struct for a sequence of pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response.
typedef struct pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__Sequence
{
  pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__action__DoTimedLedEffect_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DoTimedLedEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__action__DoTimedLedEffect_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pal_device_msgs__action__DoTimedLedEffect_GetResult_Request;

// Struct for a sequence of pal_device_msgs__action__DoTimedLedEffect_GetResult_Request.
typedef struct pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__Sequence
{
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__action__DoTimedLedEffect_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"

/// Struct defined in action/DoTimedLedEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__action__DoTimedLedEffect_GetResult_Response
{
  int8_t status;
  pal_device_msgs__action__DoTimedLedEffect_Result result;
} pal_device_msgs__action__DoTimedLedEffect_GetResult_Response;

// Struct for a sequence of pal_device_msgs__action__DoTimedLedEffect_GetResult_Response.
typedef struct pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__Sequence
{
  pal_device_msgs__action__DoTimedLedEffect_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__action__DoTimedLedEffect_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pal_device_msgs/action/detail/do_timed_led_effect__struct.h"

/// Struct defined in action/DoTimedLedEffect in the package pal_device_msgs.
typedef struct pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pal_device_msgs__action__DoTimedLedEffect_Feedback feedback;
} pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage;

// Struct for a sequence of pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage.
typedef struct pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__Sequence
{
  pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_device_msgs__action__DoTimedLedEffect_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__ACTION__DETAIL__DO_TIMED_LED_EFFECT__STRUCT_H_
