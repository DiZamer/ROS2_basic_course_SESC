// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pal_device_msgs:msg/LedEffectParams.idl
// generated code does not contain a copyright notice
#include "pal_device_msgs/msg/detail/led_effect_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fixed_color`
#include "pal_device_msgs/msg/detail/led_fixed_color_params__functions.h"
// Member `rainbow`
#include "pal_device_msgs/msg/detail/led_rainbow_params__functions.h"
// Member `fade`
#include "pal_device_msgs/msg/detail/led_fade_params__functions.h"
// Member `blink`
#include "pal_device_msgs/msg/detail/led_blink_params__functions.h"
// Member `progress`
#include "pal_device_msgs/msg/detail/led_progress_params__functions.h"
// Member `flow`
#include "pal_device_msgs/msg/detail/led_flow_params__functions.h"
// Member `preprogrammed`
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__functions.h"
// Member `effect_via_topic`
#include "pal_device_msgs/msg/detail/led_effect_via_topic_params__functions.h"
// Member `data_array`
#include "pal_device_msgs/msg/detail/led_data_array_params__functions.h"

bool
pal_device_msgs__msg__LedEffectParams__init(pal_device_msgs__msg__LedEffectParams * msg)
{
  if (!msg) {
    return false;
  }
  // effect_type
  // fixed_color
  if (!pal_device_msgs__msg__LedFixedColorParams__init(&msg->fixed_color)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  // rainbow
  if (!pal_device_msgs__msg__LedRainbowParams__init(&msg->rainbow)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  // fade
  if (!pal_device_msgs__msg__LedFadeParams__init(&msg->fade)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  // blink
  if (!pal_device_msgs__msg__LedBlinkParams__init(&msg->blink)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  // progress
  if (!pal_device_msgs__msg__LedProgressParams__init(&msg->progress)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  // flow
  if (!pal_device_msgs__msg__LedFlowParams__init(&msg->flow)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  // preprogrammed
  if (!pal_device_msgs__msg__LedPreProgrammedParams__init(&msg->preprogrammed)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  // effect_via_topic
  if (!pal_device_msgs__msg__LedEffectViaTopicParams__init(&msg->effect_via_topic)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  // data_array
  if (!pal_device_msgs__msg__LedDataArrayParams__init(&msg->data_array)) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
    return false;
  }
  return true;
}

void
pal_device_msgs__msg__LedEffectParams__fini(pal_device_msgs__msg__LedEffectParams * msg)
{
  if (!msg) {
    return;
  }
  // effect_type
  // fixed_color
  pal_device_msgs__msg__LedFixedColorParams__fini(&msg->fixed_color);
  // rainbow
  pal_device_msgs__msg__LedRainbowParams__fini(&msg->rainbow);
  // fade
  pal_device_msgs__msg__LedFadeParams__fini(&msg->fade);
  // blink
  pal_device_msgs__msg__LedBlinkParams__fini(&msg->blink);
  // progress
  pal_device_msgs__msg__LedProgressParams__fini(&msg->progress);
  // flow
  pal_device_msgs__msg__LedFlowParams__fini(&msg->flow);
  // preprogrammed
  pal_device_msgs__msg__LedPreProgrammedParams__fini(&msg->preprogrammed);
  // effect_via_topic
  pal_device_msgs__msg__LedEffectViaTopicParams__fini(&msg->effect_via_topic);
  // data_array
  pal_device_msgs__msg__LedDataArrayParams__fini(&msg->data_array);
}

bool
pal_device_msgs__msg__LedEffectParams__are_equal(const pal_device_msgs__msg__LedEffectParams * lhs, const pal_device_msgs__msg__LedEffectParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // effect_type
  if (lhs->effect_type != rhs->effect_type) {
    return false;
  }
  // fixed_color
  if (!pal_device_msgs__msg__LedFixedColorParams__are_equal(
      &(lhs->fixed_color), &(rhs->fixed_color)))
  {
    return false;
  }
  // rainbow
  if (!pal_device_msgs__msg__LedRainbowParams__are_equal(
      &(lhs->rainbow), &(rhs->rainbow)))
  {
    return false;
  }
  // fade
  if (!pal_device_msgs__msg__LedFadeParams__are_equal(
      &(lhs->fade), &(rhs->fade)))
  {
    return false;
  }
  // blink
  if (!pal_device_msgs__msg__LedBlinkParams__are_equal(
      &(lhs->blink), &(rhs->blink)))
  {
    return false;
  }
  // progress
  if (!pal_device_msgs__msg__LedProgressParams__are_equal(
      &(lhs->progress), &(rhs->progress)))
  {
    return false;
  }
  // flow
  if (!pal_device_msgs__msg__LedFlowParams__are_equal(
      &(lhs->flow), &(rhs->flow)))
  {
    return false;
  }
  // preprogrammed
  if (!pal_device_msgs__msg__LedPreProgrammedParams__are_equal(
      &(lhs->preprogrammed), &(rhs->preprogrammed)))
  {
    return false;
  }
  // effect_via_topic
  if (!pal_device_msgs__msg__LedEffectViaTopicParams__are_equal(
      &(lhs->effect_via_topic), &(rhs->effect_via_topic)))
  {
    return false;
  }
  // data_array
  if (!pal_device_msgs__msg__LedDataArrayParams__are_equal(
      &(lhs->data_array), &(rhs->data_array)))
  {
    return false;
  }
  return true;
}

bool
pal_device_msgs__msg__LedEffectParams__copy(
  const pal_device_msgs__msg__LedEffectParams * input,
  pal_device_msgs__msg__LedEffectParams * output)
{
  if (!input || !output) {
    return false;
  }
  // effect_type
  output->effect_type = input->effect_type;
  // fixed_color
  if (!pal_device_msgs__msg__LedFixedColorParams__copy(
      &(input->fixed_color), &(output->fixed_color)))
  {
    return false;
  }
  // rainbow
  if (!pal_device_msgs__msg__LedRainbowParams__copy(
      &(input->rainbow), &(output->rainbow)))
  {
    return false;
  }
  // fade
  if (!pal_device_msgs__msg__LedFadeParams__copy(
      &(input->fade), &(output->fade)))
  {
    return false;
  }
  // blink
  if (!pal_device_msgs__msg__LedBlinkParams__copy(
      &(input->blink), &(output->blink)))
  {
    return false;
  }
  // progress
  if (!pal_device_msgs__msg__LedProgressParams__copy(
      &(input->progress), &(output->progress)))
  {
    return false;
  }
  // flow
  if (!pal_device_msgs__msg__LedFlowParams__copy(
      &(input->flow), &(output->flow)))
  {
    return false;
  }
  // preprogrammed
  if (!pal_device_msgs__msg__LedPreProgrammedParams__copy(
      &(input->preprogrammed), &(output->preprogrammed)))
  {
    return false;
  }
  // effect_via_topic
  if (!pal_device_msgs__msg__LedEffectViaTopicParams__copy(
      &(input->effect_via_topic), &(output->effect_via_topic)))
  {
    return false;
  }
  // data_array
  if (!pal_device_msgs__msg__LedDataArrayParams__copy(
      &(input->data_array), &(output->data_array)))
  {
    return false;
  }
  return true;
}

pal_device_msgs__msg__LedEffectParams *
pal_device_msgs__msg__LedEffectParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedEffectParams * msg = (pal_device_msgs__msg__LedEffectParams *)allocator.allocate(sizeof(pal_device_msgs__msg__LedEffectParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_device_msgs__msg__LedEffectParams));
  bool success = pal_device_msgs__msg__LedEffectParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_device_msgs__msg__LedEffectParams__destroy(pal_device_msgs__msg__LedEffectParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_device_msgs__msg__LedEffectParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_device_msgs__msg__LedEffectParams__Sequence__init(pal_device_msgs__msg__LedEffectParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedEffectParams * data = NULL;

  if (size) {
    data = (pal_device_msgs__msg__LedEffectParams *)allocator.zero_allocate(size, sizeof(pal_device_msgs__msg__LedEffectParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_device_msgs__msg__LedEffectParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_device_msgs__msg__LedEffectParams__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pal_device_msgs__msg__LedEffectParams__Sequence__fini(pal_device_msgs__msg__LedEffectParams__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pal_device_msgs__msg__LedEffectParams__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pal_device_msgs__msg__LedEffectParams__Sequence *
pal_device_msgs__msg__LedEffectParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedEffectParams__Sequence * array = (pal_device_msgs__msg__LedEffectParams__Sequence *)allocator.allocate(sizeof(pal_device_msgs__msg__LedEffectParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_device_msgs__msg__LedEffectParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_device_msgs__msg__LedEffectParams__Sequence__destroy(pal_device_msgs__msg__LedEffectParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_device_msgs__msg__LedEffectParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_device_msgs__msg__LedEffectParams__Sequence__are_equal(const pal_device_msgs__msg__LedEffectParams__Sequence * lhs, const pal_device_msgs__msg__LedEffectParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_device_msgs__msg__LedEffectParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_device_msgs__msg__LedEffectParams__Sequence__copy(
  const pal_device_msgs__msg__LedEffectParams__Sequence * input,
  pal_device_msgs__msg__LedEffectParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pal_device_msgs__msg__LedEffectParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_device_msgs__msg__LedEffectParams * data =
      (pal_device_msgs__msg__LedEffectParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_device_msgs__msg__LedEffectParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_device_msgs__msg__LedEffectParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_device_msgs__msg__LedEffectParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
