// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pal_device_msgs:msg/LedGroup.idl
// generated code does not contain a copyright notice
#include "pal_device_msgs/msg/detail/led_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pal_device_msgs__msg__LedGroup__init(pal_device_msgs__msg__LedGroup * msg)
{
  if (!msg) {
    return false;
  }
  // led_mask
  return true;
}

void
pal_device_msgs__msg__LedGroup__fini(pal_device_msgs__msg__LedGroup * msg)
{
  if (!msg) {
    return;
  }
  // led_mask
}

bool
pal_device_msgs__msg__LedGroup__are_equal(const pal_device_msgs__msg__LedGroup * lhs, const pal_device_msgs__msg__LedGroup * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_mask
  if (lhs->led_mask != rhs->led_mask) {
    return false;
  }
  return true;
}

bool
pal_device_msgs__msg__LedGroup__copy(
  const pal_device_msgs__msg__LedGroup * input,
  pal_device_msgs__msg__LedGroup * output)
{
  if (!input || !output) {
    return false;
  }
  // led_mask
  output->led_mask = input->led_mask;
  return true;
}

pal_device_msgs__msg__LedGroup *
pal_device_msgs__msg__LedGroup__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedGroup * msg = (pal_device_msgs__msg__LedGroup *)allocator.allocate(sizeof(pal_device_msgs__msg__LedGroup), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_device_msgs__msg__LedGroup));
  bool success = pal_device_msgs__msg__LedGroup__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_device_msgs__msg__LedGroup__destroy(pal_device_msgs__msg__LedGroup * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_device_msgs__msg__LedGroup__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_device_msgs__msg__LedGroup__Sequence__init(pal_device_msgs__msg__LedGroup__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedGroup * data = NULL;

  if (size) {
    data = (pal_device_msgs__msg__LedGroup *)allocator.zero_allocate(size, sizeof(pal_device_msgs__msg__LedGroup), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_device_msgs__msg__LedGroup__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_device_msgs__msg__LedGroup__fini(&data[i - 1]);
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
pal_device_msgs__msg__LedGroup__Sequence__fini(pal_device_msgs__msg__LedGroup__Sequence * array)
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
      pal_device_msgs__msg__LedGroup__fini(&array->data[i]);
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

pal_device_msgs__msg__LedGroup__Sequence *
pal_device_msgs__msg__LedGroup__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedGroup__Sequence * array = (pal_device_msgs__msg__LedGroup__Sequence *)allocator.allocate(sizeof(pal_device_msgs__msg__LedGroup__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_device_msgs__msg__LedGroup__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_device_msgs__msg__LedGroup__Sequence__destroy(pal_device_msgs__msg__LedGroup__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_device_msgs__msg__LedGroup__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_device_msgs__msg__LedGroup__Sequence__are_equal(const pal_device_msgs__msg__LedGroup__Sequence * lhs, const pal_device_msgs__msg__LedGroup__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_device_msgs__msg__LedGroup__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_device_msgs__msg__LedGroup__Sequence__copy(
  const pal_device_msgs__msg__LedGroup__Sequence * input,
  pal_device_msgs__msg__LedGroup__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pal_device_msgs__msg__LedGroup);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_device_msgs__msg__LedGroup * data =
      (pal_device_msgs__msg__LedGroup *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_device_msgs__msg__LedGroup__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_device_msgs__msg__LedGroup__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_device_msgs__msg__LedGroup__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
