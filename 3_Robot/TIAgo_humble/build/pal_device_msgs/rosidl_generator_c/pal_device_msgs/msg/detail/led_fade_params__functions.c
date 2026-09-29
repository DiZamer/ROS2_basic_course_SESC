// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pal_device_msgs:msg/LedFadeParams.idl
// generated code does not contain a copyright notice
#include "pal_device_msgs/msg/detail/led_fade_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first_color`
// Member `second_color`
#include "std_msgs/msg/detail/color_rgba__functions.h"
// Member `transition_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
pal_device_msgs__msg__LedFadeParams__init(pal_device_msgs__msg__LedFadeParams * msg)
{
  if (!msg) {
    return false;
  }
  // first_color
  if (!std_msgs__msg__ColorRGBA__init(&msg->first_color)) {
    pal_device_msgs__msg__LedFadeParams__fini(msg);
    return false;
  }
  // second_color
  if (!std_msgs__msg__ColorRGBA__init(&msg->second_color)) {
    pal_device_msgs__msg__LedFadeParams__fini(msg);
    return false;
  }
  // transition_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->transition_duration)) {
    pal_device_msgs__msg__LedFadeParams__fini(msg);
    return false;
  }
  // reverse_fade
  return true;
}

void
pal_device_msgs__msg__LedFadeParams__fini(pal_device_msgs__msg__LedFadeParams * msg)
{
  if (!msg) {
    return;
  }
  // first_color
  std_msgs__msg__ColorRGBA__fini(&msg->first_color);
  // second_color
  std_msgs__msg__ColorRGBA__fini(&msg->second_color);
  // transition_duration
  builtin_interfaces__msg__Duration__fini(&msg->transition_duration);
  // reverse_fade
}

bool
pal_device_msgs__msg__LedFadeParams__are_equal(const pal_device_msgs__msg__LedFadeParams * lhs, const pal_device_msgs__msg__LedFadeParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first_color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->first_color), &(rhs->first_color)))
  {
    return false;
  }
  // second_color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->second_color), &(rhs->second_color)))
  {
    return false;
  }
  // transition_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->transition_duration), &(rhs->transition_duration)))
  {
    return false;
  }
  // reverse_fade
  if (lhs->reverse_fade != rhs->reverse_fade) {
    return false;
  }
  return true;
}

bool
pal_device_msgs__msg__LedFadeParams__copy(
  const pal_device_msgs__msg__LedFadeParams * input,
  pal_device_msgs__msg__LedFadeParams * output)
{
  if (!input || !output) {
    return false;
  }
  // first_color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->first_color), &(output->first_color)))
  {
    return false;
  }
  // second_color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->second_color), &(output->second_color)))
  {
    return false;
  }
  // transition_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->transition_duration), &(output->transition_duration)))
  {
    return false;
  }
  // reverse_fade
  output->reverse_fade = input->reverse_fade;
  return true;
}

pal_device_msgs__msg__LedFadeParams *
pal_device_msgs__msg__LedFadeParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedFadeParams * msg = (pal_device_msgs__msg__LedFadeParams *)allocator.allocate(sizeof(pal_device_msgs__msg__LedFadeParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_device_msgs__msg__LedFadeParams));
  bool success = pal_device_msgs__msg__LedFadeParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_device_msgs__msg__LedFadeParams__destroy(pal_device_msgs__msg__LedFadeParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_device_msgs__msg__LedFadeParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_device_msgs__msg__LedFadeParams__Sequence__init(pal_device_msgs__msg__LedFadeParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedFadeParams * data = NULL;

  if (size) {
    data = (pal_device_msgs__msg__LedFadeParams *)allocator.zero_allocate(size, sizeof(pal_device_msgs__msg__LedFadeParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_device_msgs__msg__LedFadeParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_device_msgs__msg__LedFadeParams__fini(&data[i - 1]);
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
pal_device_msgs__msg__LedFadeParams__Sequence__fini(pal_device_msgs__msg__LedFadeParams__Sequence * array)
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
      pal_device_msgs__msg__LedFadeParams__fini(&array->data[i]);
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

pal_device_msgs__msg__LedFadeParams__Sequence *
pal_device_msgs__msg__LedFadeParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedFadeParams__Sequence * array = (pal_device_msgs__msg__LedFadeParams__Sequence *)allocator.allocate(sizeof(pal_device_msgs__msg__LedFadeParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_device_msgs__msg__LedFadeParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_device_msgs__msg__LedFadeParams__Sequence__destroy(pal_device_msgs__msg__LedFadeParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_device_msgs__msg__LedFadeParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_device_msgs__msg__LedFadeParams__Sequence__are_equal(const pal_device_msgs__msg__LedFadeParams__Sequence * lhs, const pal_device_msgs__msg__LedFadeParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_device_msgs__msg__LedFadeParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_device_msgs__msg__LedFadeParams__Sequence__copy(
  const pal_device_msgs__msg__LedFadeParams__Sequence * input,
  pal_device_msgs__msg__LedFadeParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pal_device_msgs__msg__LedFadeParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_device_msgs__msg__LedFadeParams * data =
      (pal_device_msgs__msg__LedFadeParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_device_msgs__msg__LedFadeParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_device_msgs__msg__LedFadeParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_device_msgs__msg__LedFadeParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
