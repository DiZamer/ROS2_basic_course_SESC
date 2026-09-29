// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pal_device_msgs:srv/ShutdownAndWakeUpRobot.idl
// generated code does not contain a copyright notice
#include "pal_device_msgs/srv/detail/shutdown_and_wake_up_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `shutdown_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__init(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // shutdown_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->shutdown_duration)) {
    pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__fini(msg);
    return false;
  }
  return true;
}

void
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__fini(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * msg)
{
  if (!msg) {
    return;
  }
  // shutdown_duration
  builtin_interfaces__msg__Duration__fini(&msg->shutdown_duration);
}

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__are_equal(const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * lhs, const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // shutdown_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->shutdown_duration), &(rhs->shutdown_duration)))
  {
    return false;
  }
  return true;
}

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__copy(
  const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * input,
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // shutdown_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->shutdown_duration), &(output->shutdown_duration)))
  {
    return false;
  }
  return true;
}

pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request *
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * msg = (pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request *)allocator.allocate(sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request));
  bool success = pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__destroy(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__init(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * data = NULL;

  if (size) {
    data = (pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request *)allocator.zero_allocate(size, sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__fini(&data[i - 1]);
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
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__fini(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence * array)
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
      pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__fini(&array->data[i]);
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

pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence *
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence * array = (pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence *)allocator.allocate(sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__destroy(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__are_equal(const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence * lhs, const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence__copy(
  const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence * input,
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request * data =
      (pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_device_msgs__srv__ShutdownAndWakeUpRobot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__init(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__fini(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__are_equal(const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * lhs, const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__copy(
  const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * input,
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response *
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * msg = (pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response *)allocator.allocate(sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response));
  bool success = pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__destroy(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__init(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * data = NULL;

  if (size) {
    data = (pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response *)allocator.zero_allocate(size, sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__fini(&data[i - 1]);
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
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__fini(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence * array)
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
      pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__fini(&array->data[i]);
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

pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence *
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence * array = (pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence *)allocator.allocate(sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__destroy(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__are_equal(const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence * lhs, const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence__copy(
  const pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence * input,
  pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response * data =
      (pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_device_msgs__srv__ShutdownAndWakeUpRobot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
