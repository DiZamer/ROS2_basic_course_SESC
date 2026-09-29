// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pal_device_msgs:msg/LedPreProgrammedParams.idl
// generated code does not contain a copyright notice
#include "pal_device_msgs/msg/detail/led_pre_programmed_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pal_device_msgs__msg__LedPreProgrammedParams__init(pal_device_msgs__msg__LedPreProgrammedParams * msg)
{
  if (!msg) {
    return false;
  }
  // preprogrammed_id
  return true;
}

void
pal_device_msgs__msg__LedPreProgrammedParams__fini(pal_device_msgs__msg__LedPreProgrammedParams * msg)
{
  if (!msg) {
    return;
  }
  // preprogrammed_id
}

bool
pal_device_msgs__msg__LedPreProgrammedParams__are_equal(const pal_device_msgs__msg__LedPreProgrammedParams * lhs, const pal_device_msgs__msg__LedPreProgrammedParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // preprogrammed_id
  if (lhs->preprogrammed_id != rhs->preprogrammed_id) {
    return false;
  }
  return true;
}

bool
pal_device_msgs__msg__LedPreProgrammedParams__copy(
  const pal_device_msgs__msg__LedPreProgrammedParams * input,
  pal_device_msgs__msg__LedPreProgrammedParams * output)
{
  if (!input || !output) {
    return false;
  }
  // preprogrammed_id
  output->preprogrammed_id = input->preprogrammed_id;
  return true;
}

pal_device_msgs__msg__LedPreProgrammedParams *
pal_device_msgs__msg__LedPreProgrammedParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedPreProgrammedParams * msg = (pal_device_msgs__msg__LedPreProgrammedParams *)allocator.allocate(sizeof(pal_device_msgs__msg__LedPreProgrammedParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_device_msgs__msg__LedPreProgrammedParams));
  bool success = pal_device_msgs__msg__LedPreProgrammedParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_device_msgs__msg__LedPreProgrammedParams__destroy(pal_device_msgs__msg__LedPreProgrammedParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_device_msgs__msg__LedPreProgrammedParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__init(pal_device_msgs__msg__LedPreProgrammedParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedPreProgrammedParams * data = NULL;

  if (size) {
    data = (pal_device_msgs__msg__LedPreProgrammedParams *)allocator.zero_allocate(size, sizeof(pal_device_msgs__msg__LedPreProgrammedParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_device_msgs__msg__LedPreProgrammedParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_device_msgs__msg__LedPreProgrammedParams__fini(&data[i - 1]);
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
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__fini(pal_device_msgs__msg__LedPreProgrammedParams__Sequence * array)
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
      pal_device_msgs__msg__LedPreProgrammedParams__fini(&array->data[i]);
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

pal_device_msgs__msg__LedPreProgrammedParams__Sequence *
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__msg__LedPreProgrammedParams__Sequence * array = (pal_device_msgs__msg__LedPreProgrammedParams__Sequence *)allocator.allocate(sizeof(pal_device_msgs__msg__LedPreProgrammedParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_device_msgs__msg__LedPreProgrammedParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__destroy(pal_device_msgs__msg__LedPreProgrammedParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_device_msgs__msg__LedPreProgrammedParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__are_equal(const pal_device_msgs__msg__LedPreProgrammedParams__Sequence * lhs, const pal_device_msgs__msg__LedPreProgrammedParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_device_msgs__msg__LedPreProgrammedParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__copy(
  const pal_device_msgs__msg__LedPreProgrammedParams__Sequence * input,
  pal_device_msgs__msg__LedPreProgrammedParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pal_device_msgs__msg__LedPreProgrammedParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_device_msgs__msg__LedPreProgrammedParams * data =
      (pal_device_msgs__msg__LedPreProgrammedParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_device_msgs__msg__LedPreProgrammedParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_device_msgs__msg__LedPreProgrammedParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_device_msgs__msg__LedPreProgrammedParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
