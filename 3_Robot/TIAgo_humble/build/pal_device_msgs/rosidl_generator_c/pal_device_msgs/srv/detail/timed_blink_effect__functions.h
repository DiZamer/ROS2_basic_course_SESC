// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pal_device_msgs:srv/TimedBlinkEffect.idl
// generated code does not contain a copyright notice

#ifndef PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_BLINK_EFFECT__FUNCTIONS_H_
#define PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_BLINK_EFFECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pal_device_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pal_device_msgs/srv/detail/timed_blink_effect__struct.h"

/// Initialize srv/TimedBlinkEffect message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pal_device_msgs__srv__TimedBlinkEffect_Request
 * )) before or use
 * pal_device_msgs__srv__TimedBlinkEffect_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__srv__TimedBlinkEffect_Request__init(pal_device_msgs__srv__TimedBlinkEffect_Request * msg);

/// Finalize srv/TimedBlinkEffect message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__srv__TimedBlinkEffect_Request__fini(pal_device_msgs__srv__TimedBlinkEffect_Request * msg);

/// Create srv/TimedBlinkEffect message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pal_device_msgs__srv__TimedBlinkEffect_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__srv__TimedBlinkEffect_Request *
pal_device_msgs__srv__TimedBlinkEffect_Request__create();

/// Destroy srv/TimedBlinkEffect message.
/**
 * It calls
 * pal_device_msgs__srv__TimedBlinkEffect_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__srv__TimedBlinkEffect_Request__destroy(pal_device_msgs__srv__TimedBlinkEffect_Request * msg);

/// Check for srv/TimedBlinkEffect message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__srv__TimedBlinkEffect_Request__are_equal(const pal_device_msgs__srv__TimedBlinkEffect_Request * lhs, const pal_device_msgs__srv__TimedBlinkEffect_Request * rhs);

/// Copy a srv/TimedBlinkEffect message.
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
pal_device_msgs__srv__TimedBlinkEffect_Request__copy(
  const pal_device_msgs__srv__TimedBlinkEffect_Request * input,
  pal_device_msgs__srv__TimedBlinkEffect_Request * output);

/// Initialize array of srv/TimedBlinkEffect messages.
/**
 * It allocates the memory for the number of elements and calls
 * pal_device_msgs__srv__TimedBlinkEffect_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__init(pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence * array, size_t size);

/// Finalize array of srv/TimedBlinkEffect messages.
/**
 * It calls
 * pal_device_msgs__srv__TimedBlinkEffect_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__fini(pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence * array);

/// Create array of srv/TimedBlinkEffect messages.
/**
 * It allocates the memory for the array and calls
 * pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence *
pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__create(size_t size);

/// Destroy array of srv/TimedBlinkEffect messages.
/**
 * It calls
 * pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__destroy(pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence * array);

/// Check for srv/TimedBlinkEffect message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__are_equal(const pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence * lhs, const pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence * rhs);

/// Copy an array of srv/TimedBlinkEffect messages.
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
pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence__copy(
  const pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence * input,
  pal_device_msgs__srv__TimedBlinkEffect_Request__Sequence * output);

/// Initialize srv/TimedBlinkEffect message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pal_device_msgs__srv__TimedBlinkEffect_Response
 * )) before or use
 * pal_device_msgs__srv__TimedBlinkEffect_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__srv__TimedBlinkEffect_Response__init(pal_device_msgs__srv__TimedBlinkEffect_Response * msg);

/// Finalize srv/TimedBlinkEffect message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__srv__TimedBlinkEffect_Response__fini(pal_device_msgs__srv__TimedBlinkEffect_Response * msg);

/// Create srv/TimedBlinkEffect message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pal_device_msgs__srv__TimedBlinkEffect_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__srv__TimedBlinkEffect_Response *
pal_device_msgs__srv__TimedBlinkEffect_Response__create();

/// Destroy srv/TimedBlinkEffect message.
/**
 * It calls
 * pal_device_msgs__srv__TimedBlinkEffect_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__srv__TimedBlinkEffect_Response__destroy(pal_device_msgs__srv__TimedBlinkEffect_Response * msg);

/// Check for srv/TimedBlinkEffect message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__srv__TimedBlinkEffect_Response__are_equal(const pal_device_msgs__srv__TimedBlinkEffect_Response * lhs, const pal_device_msgs__srv__TimedBlinkEffect_Response * rhs);

/// Copy a srv/TimedBlinkEffect message.
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
pal_device_msgs__srv__TimedBlinkEffect_Response__copy(
  const pal_device_msgs__srv__TimedBlinkEffect_Response * input,
  pal_device_msgs__srv__TimedBlinkEffect_Response * output);

/// Initialize array of srv/TimedBlinkEffect messages.
/**
 * It allocates the memory for the number of elements and calls
 * pal_device_msgs__srv__TimedBlinkEffect_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__init(pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence * array, size_t size);

/// Finalize array of srv/TimedBlinkEffect messages.
/**
 * It calls
 * pal_device_msgs__srv__TimedBlinkEffect_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__fini(pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence * array);

/// Create array of srv/TimedBlinkEffect messages.
/**
 * It allocates the memory for the array and calls
 * pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence *
pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__create(size_t size);

/// Destroy array of srv/TimedBlinkEffect messages.
/**
 * It calls
 * pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
void
pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__destroy(pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence * array);

/// Check for srv/TimedBlinkEffect message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pal_device_msgs
bool
pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__are_equal(const pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence * lhs, const pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence * rhs);

/// Copy an array of srv/TimedBlinkEffect messages.
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
pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence__copy(
  const pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence * input,
  pal_device_msgs__srv__TimedBlinkEffect_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PAL_DEVICE_MSGS__SRV__DETAIL__TIMED_BLINK_EFFECT__FUNCTIONS_H_
