// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pal_device_msgs:msg/LedFlowParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__FUNCTIONS_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pal_device_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pal_device_msgs/msg/detail/led_flow_params__struct.h"

/// Initialize msg/LedFlowParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pal_device_msgs__msg__LedFlowParams
 * )) before or use
 * pal_device_msgs__msg__LedFlowParams__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedFlowParams__init(pal_device_msgs__msg__LedFlowParams * msg);

/// Finalize msg/LedFlowParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedFlowParams__fini(pal_device_msgs__msg__LedFlowParams * msg);

/// Create msg/LedFlowParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pal_device_msgs__msg__LedFlowParams__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__msg__LedFlowParams *
pal_device_msgs__msg__LedFlowParams__create();

/// Destroy msg/LedFlowParams message.
/**
 * It calls
 * pal_device_msgs__msg__LedFlowParams__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedFlowParams__destroy(pal_device_msgs__msg__LedFlowParams * msg);

/// Check for msg/LedFlowParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedFlowParams__are_equal(const pal_device_msgs__msg__LedFlowParams * lhs, const pal_device_msgs__msg__LedFlowParams * rhs);

/// Copy a msg/LedFlowParams message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedFlowParams__copy(
  const pal_device_msgs__msg__LedFlowParams * input,
  pal_device_msgs__msg__LedFlowParams * output);

/// Initialize array of msg/LedFlowParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * pal_device_msgs__msg__LedFlowParams__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedFlowParams__Sequence__init(pal_device_msgs__msg__LedFlowParams__Sequence * array, size_t size);

/// Finalize array of msg/LedFlowParams messages.
/**
 * It calls
 * pal_device_msgs__msg__LedFlowParams__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedFlowParams__Sequence__fini(pal_device_msgs__msg__LedFlowParams__Sequence * array);

/// Create array of msg/LedFlowParams messages.
/**
 * It allocates the memory for the array and calls
 * pal_device_msgs__msg__LedFlowParams__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__msg__LedFlowParams__Sequence *
pal_device_msgs__msg__LedFlowParams__Sequence__create(size_t size);

/// Destroy array of msg/LedFlowParams messages.
/**
 * It calls
 * pal_device_msgs__msg__LedFlowParams__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedFlowParams__Sequence__destroy(pal_device_msgs__msg__LedFlowParams__Sequence * array);

/// Check for msg/LedFlowParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedFlowParams__Sequence__are_equal(const pal_device_msgs__msg__LedFlowParams__Sequence * lhs, const pal_device_msgs__msg__LedFlowParams__Sequence * rhs);

/// Copy an array of msg/LedFlowParams messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedFlowParams__Sequence__copy(
  const pal_device_msgs__msg__LedFlowParams__Sequence * input,
  pal_device_msgs__msg__LedFlowParams__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_FLOW_PARAMS__FUNCTIONS_H_
