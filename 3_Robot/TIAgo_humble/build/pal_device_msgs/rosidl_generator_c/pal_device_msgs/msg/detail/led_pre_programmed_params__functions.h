// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pal_device_msgs:msg/LedPreProgrammedParams.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__FUNCTIONS_H_
#define PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pal_device_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pal_device_msgs/msg/detail/led_pre_programmed_params__struct.h"

/// Initialize msg/LedPreProgrammedParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pal_device_msgs__msg__LedPreProgrammedParams
 * )) before or use
 * pal_device_msgs__msg__LedPreProgrammedParams__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedPreProgrammedParams__init(pal_device_msgs__msg__LedPreProgrammedParams * msg);

/// Finalize msg/LedPreProgrammedParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedPreProgrammedParams__fini(pal_device_msgs__msg__LedPreProgrammedParams * msg);

/// Create msg/LedPreProgrammedParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pal_device_msgs__msg__LedPreProgrammedParams__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__msg__LedPreProgrammedParams *
pal_device_msgs__msg__LedPreProgrammedParams__create();

/// Destroy msg/LedPreProgrammedParams message.
/**
 * It calls
 * pal_device_msgs__msg__LedPreProgrammedParams__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedPreProgrammedParams__destroy(pal_device_msgs__msg__LedPreProgrammedParams * msg);

/// Check for msg/LedPreProgrammedParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedPreProgrammedParams__are_equal(const pal_device_msgs__msg__LedPreProgrammedParams * lhs, const pal_device_msgs__msg__LedPreProgrammedParams * rhs);

/// Copy a msg/LedPreProgrammedParams message.
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
pal_device_msgs__msg__LedPreProgrammedParams__copy(
  const pal_device_msgs__msg__LedPreProgrammedParams * input,
  pal_device_msgs__msg__LedPreProgrammedParams * output);

/// Initialize array of msg/LedPreProgrammedParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * pal_device_msgs__msg__LedPreProgrammedParams__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__init(pal_device_msgs__msg__LedPreProgrammedParams__Sequence * array, size_t size);

/// Finalize array of msg/LedPreProgrammedParams messages.
/**
 * It calls
 * pal_device_msgs__msg__LedPreProgrammedParams__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__fini(pal_device_msgs__msg__LedPreProgrammedParams__Sequence * array);

/// Create array of msg/LedPreProgrammedParams messages.
/**
 * It allocates the memory for the array and calls
 * pal_device_msgs__msg__LedPreProgrammedParams__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__msg__LedPreProgrammedParams__Sequence *
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__create(size_t size);

/// Destroy array of msg/LedPreProgrammedParams messages.
/**
 * It calls
 * pal_device_msgs__msg__LedPreProgrammedParams__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__destroy(pal_device_msgs__msg__LedPreProgrammedParams__Sequence * array);

/// Check for msg/LedPreProgrammedParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__are_equal(const pal_device_msgs__msg__LedPreProgrammedParams__Sequence * lhs, const pal_device_msgs__msg__LedPreProgrammedParams__Sequence * rhs);

/// Copy an array of msg/LedPreProgrammedParams messages.
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
pal_device_msgs__msg__LedPreProgrammedParams__Sequence__copy(
  const pal_device_msgs__msg__LedPreProgrammedParams__Sequence * input,
  pal_device_msgs__msg__LedPreProgrammedParams__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__MSG__DETAIL__LED_PRE_PROGRAMMED_PARAMS__FUNCTIONS_H_
