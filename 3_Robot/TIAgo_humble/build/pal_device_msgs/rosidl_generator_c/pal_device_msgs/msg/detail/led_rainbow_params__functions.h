// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pal_device_msgs:msg/LedRainbowParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__FUNCTIONS_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pal_device_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pal_device_msgs/msg/detail/led_rainbow_params__struct.h"

/// Initialize msg/LedRainbowParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pal_device_msgs__msg__LedRainbowParams
 * )) before or use
 * pal_device_msgs__msg__LedRainbowParams__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedRainbowParams__init(pal_device_msgs__msg__LedRainbowParams * msg);

/// Finalize msg/LedRainbowParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedRainbowParams__fini(pal_device_msgs__msg__LedRainbowParams * msg);

/// Create msg/LedRainbowParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pal_device_msgs__msg__LedRainbowParams__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__msg__LedRainbowParams *
pal_device_msgs__msg__LedRainbowParams__create();

/// Destroy msg/LedRainbowParams message.
/**
 * It calls
 * pal_device_msgs__msg__LedRainbowParams__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedRainbowParams__destroy(pal_device_msgs__msg__LedRainbowParams * msg);

/// Check for msg/LedRainbowParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedRainbowParams__are_equal(const pal_device_msgs__msg__LedRainbowParams * lhs, const pal_device_msgs__msg__LedRainbowParams * rhs);

/// Copy a msg/LedRainbowParams message.
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
pal_device_msgs__msg__LedRainbowParams__copy(
  const pal_device_msgs__msg__LedRainbowParams * input,
  pal_device_msgs__msg__LedRainbowParams * output);

/// Initialize array of msg/LedRainbowParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * pal_device_msgs__msg__LedRainbowParams__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedRainbowParams__Sequence__init(pal_device_msgs__msg__LedRainbowParams__Sequence * array, size_t size);

/// Finalize array of msg/LedRainbowParams messages.
/**
 * It calls
 * pal_device_msgs__msg__LedRainbowParams__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedRainbowParams__Sequence__fini(pal_device_msgs__msg__LedRainbowParams__Sequence * array);

/// Create array of msg/LedRainbowParams messages.
/**
 * It allocates the memory for the array and calls
 * pal_device_msgs__msg__LedRainbowParams__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__msg__LedRainbowParams__Sequence *
pal_device_msgs__msg__LedRainbowParams__Sequence__create(size_t size);

/// Destroy array of msg/LedRainbowParams messages.
/**
 * It calls
 * pal_device_msgs__msg__LedRainbowParams__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedRainbowParams__Sequence__destroy(pal_device_msgs__msg__LedRainbowParams__Sequence * array);

/// Check for msg/LedRainbowParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedRainbowParams__Sequence__are_equal(const pal_device_msgs__msg__LedRainbowParams__Sequence * lhs, const pal_device_msgs__msg__LedRainbowParams__Sequence * rhs);

/// Copy an array of msg/LedRainbowParams messages.
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
pal_device_msgs__msg__LedRainbowParams__Sequence__copy(
  const pal_device_msgs__msg__LedRainbowParams__Sequence * input,
  pal_device_msgs__msg__LedRainbowParams__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_RAINBOW_PARAMS__FUNCTIONS_H_
