// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pal_device_msgs:msg/LedEffectParams.idl
// generated code does not contain a copyright notice
#include "pal_device_msgs/msg/detail/led_effect_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pal_device_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pal_device_msgs/msg/detail/led_effect_params__struct.h"
#include "pal_device_msgs/msg/detail/led_effect_params__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "pal_device_msgs/msg/detail/led_blink_params__functions.h"  // blink
#include "pal_device_msgs/msg/detail/led_data_array_params__functions.h"  // data_array
#include "pal_device_msgs/msg/detail/led_effect_via_topic_params__functions.h"  // effect_via_topic
#include "pal_device_msgs/msg/detail/led_fade_params__functions.h"  // fade
#include "pal_device_msgs/msg/detail/led_fixed_color_params__functions.h"  // fixed_color
#include "pal_device_msgs/msg/detail/led_flow_params__functions.h"  // flow
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__functions.h"  // preprogrammed
#include "pal_device_msgs/msg/detail/led_progress_params__functions.h"  // progress
#include "pal_device_msgs/msg/detail/led_rainbow_params__functions.h"  // rainbow

// forward declare type support functions
size_t get_serialized_size_pal_device_msgs__msg__LedBlinkParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedBlinkParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedBlinkParams)();
size_t get_serialized_size_pal_device_msgs__msg__LedDataArrayParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedDataArrayParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedDataArrayParams)();
size_t get_serialized_size_pal_device_msgs__msg__LedEffectViaTopicParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedEffectViaTopicParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedEffectViaTopicParams)();
size_t get_serialized_size_pal_device_msgs__msg__LedFadeParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedFadeParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFadeParams)();
size_t get_serialized_size_pal_device_msgs__msg__LedFixedColorParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedFixedColorParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFixedColorParams)();
size_t get_serialized_size_pal_device_msgs__msg__LedFlowParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedFlowParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFlowParams)();
size_t get_serialized_size_pal_device_msgs__msg__LedPreProgrammedParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedPreProgrammedParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedPreProgrammedParams)();
size_t get_serialized_size_pal_device_msgs__msg__LedProgressParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedProgressParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedProgressParams)();
size_t get_serialized_size_pal_device_msgs__msg__LedRainbowParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pal_device_msgs__msg__LedRainbowParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedRainbowParams)();


using _LedEffectParams__ros_msg_type = pal_device_msgs__msg__LedEffectParams;

static bool _LedEffectParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LedEffectParams__ros_msg_type * ros_message = static_cast<const _LedEffectParams__ros_msg_type *>(untyped_ros_message);
  // Field name: effect_type
  {
    cdr << ros_message->effect_type;
  }

  // Field name: fixed_color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFixedColorParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fixed_color, cdr))
    {
      return false;
    }
  }

  // Field name: rainbow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedRainbowParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rainbow, cdr))
    {
      return false;
    }
  }

  // Field name: fade
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFadeParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fade, cdr))
    {
      return false;
    }
  }

  // Field name: blink
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedBlinkParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->blink, cdr))
    {
      return false;
    }
  }

  // Field name: progress
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedProgressParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->progress, cdr))
    {
      return false;
    }
  }

  // Field name: flow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFlowParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->flow, cdr))
    {
      return false;
    }
  }

  // Field name: preprogrammed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedPreProgrammedParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->preprogrammed, cdr))
    {
      return false;
    }
  }

  // Field name: effect_via_topic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedEffectViaTopicParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->effect_via_topic, cdr))
    {
      return false;
    }
  }

  // Field name: data_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedDataArrayParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->data_array, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LedEffectParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LedEffectParams__ros_msg_type * ros_message = static_cast<_LedEffectParams__ros_msg_type *>(untyped_ros_message);
  // Field name: effect_type
  {
    cdr >> ros_message->effect_type;
  }

  // Field name: fixed_color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFixedColorParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fixed_color))
    {
      return false;
    }
  }

  // Field name: rainbow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedRainbowParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rainbow))
    {
      return false;
    }
  }

  // Field name: fade
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFadeParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fade))
    {
      return false;
    }
  }

  // Field name: blink
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedBlinkParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->blink))
    {
      return false;
    }
  }

  // Field name: progress
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedProgressParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->progress))
    {
      return false;
    }
  }

  // Field name: flow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedFlowParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->flow))
    {
      return false;
    }
  }

  // Field name: preprogrammed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedPreProgrammedParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->preprogrammed))
    {
      return false;
    }
  }

  // Field name: effect_via_topic
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedEffectViaTopicParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->effect_via_topic))
    {
      return false;
    }
  }

  // Field name: data_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedDataArrayParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->data_array))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pal_device_msgs
size_t get_serialized_size_pal_device_msgs__msg__LedEffectParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedEffectParams__ros_msg_type * ros_message = static_cast<const _LedEffectParams__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name effect_type
  {
    size_t item_size = sizeof(ros_message->effect_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fixed_color

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedFixedColorParams(
    &(ros_message->fixed_color), current_alignment);
  // field.name rainbow

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedRainbowParams(
    &(ros_message->rainbow), current_alignment);
  // field.name fade

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedFadeParams(
    &(ros_message->fade), current_alignment);
  // field.name blink

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedBlinkParams(
    &(ros_message->blink), current_alignment);
  // field.name progress

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedProgressParams(
    &(ros_message->progress), current_alignment);
  // field.name flow

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedFlowParams(
    &(ros_message->flow), current_alignment);
  // field.name preprogrammed

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedPreProgrammedParams(
    &(ros_message->preprogrammed), current_alignment);
  // field.name effect_via_topic

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedEffectViaTopicParams(
    &(ros_message->effect_via_topic), current_alignment);
  // field.name data_array

  current_alignment += get_serialized_size_pal_device_msgs__msg__LedDataArrayParams(
    &(ros_message->data_array), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LedEffectParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pal_device_msgs__msg__LedEffectParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pal_device_msgs
size_t max_serialized_size_pal_device_msgs__msg__LedEffectParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: effect_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fixed_color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedFixedColorParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rainbow
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedRainbowParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fade
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedFadeParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: blink
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedBlinkParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: progress
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedProgressParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: flow
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedFlowParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: preprogrammed
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedPreProgrammedParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: effect_via_topic
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedEffectViaTopicParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: data_array
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pal_device_msgs__msg__LedDataArrayParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pal_device_msgs__msg__LedEffectParams;
    is_plain =
      (
      offsetof(DataType, data_array) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LedEffectParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pal_device_msgs__msg__LedEffectParams(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LedEffectParams = {
  "pal_device_msgs::msg",
  "LedEffectParams",
  _LedEffectParams__cdr_serialize,
  _LedEffectParams__cdr_deserialize,
  _LedEffectParams__get_serialized_size,
  _LedEffectParams__max_serialized_size
};

static rosidl_message_type_support_t _LedEffectParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LedEffectParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pal_device_msgs, msg, LedEffectParams)() {
  return &_LedEffectParams__type_support;
}

#if defined(__cplusplus)
}
#endif
