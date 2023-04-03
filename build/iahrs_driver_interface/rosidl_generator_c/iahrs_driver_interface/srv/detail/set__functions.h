// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from iahrs_driver_interface:srv/Set.idl
// generated code does not contain a copyright notice

#ifndef IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__FUNCTIONS_H_
#define IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "iahrs_driver_interface/msg/rosidl_generator_c__visibility_control.h"

#include "iahrs_driver_interface/srv/detail/set__struct.h"

/// Initialize srv/Set message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iahrs_driver_interface__srv__Set_Request
 * )) before or use
 * iahrs_driver_interface__srv__Set_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Request__init(iahrs_driver_interface__srv__Set_Request * msg);

/// Finalize srv/Set message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
void
iahrs_driver_interface__srv__Set_Request__fini(iahrs_driver_interface__srv__Set_Request * msg);

/// Create srv/Set message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iahrs_driver_interface__srv__Set_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
iahrs_driver_interface__srv__Set_Request *
iahrs_driver_interface__srv__Set_Request__create();

/// Destroy srv/Set message.
/**
 * It calls
 * iahrs_driver_interface__srv__Set_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
void
iahrs_driver_interface__srv__Set_Request__destroy(iahrs_driver_interface__srv__Set_Request * msg);

/// Check for srv/Set message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Request__are_equal(const iahrs_driver_interface__srv__Set_Request * lhs, const iahrs_driver_interface__srv__Set_Request * rhs);

/// Copy a srv/Set message.
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
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Request__copy(
  const iahrs_driver_interface__srv__Set_Request * input,
  iahrs_driver_interface__srv__Set_Request * output);

/// Initialize array of srv/Set messages.
/**
 * It allocates the memory for the number of elements and calls
 * iahrs_driver_interface__srv__Set_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Request__Sequence__init(iahrs_driver_interface__srv__Set_Request__Sequence * array, size_t size);

/// Finalize array of srv/Set messages.
/**
 * It calls
 * iahrs_driver_interface__srv__Set_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
void
iahrs_driver_interface__srv__Set_Request__Sequence__fini(iahrs_driver_interface__srv__Set_Request__Sequence * array);

/// Create array of srv/Set messages.
/**
 * It allocates the memory for the array and calls
 * iahrs_driver_interface__srv__Set_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
iahrs_driver_interface__srv__Set_Request__Sequence *
iahrs_driver_interface__srv__Set_Request__Sequence__create(size_t size);

/// Destroy array of srv/Set messages.
/**
 * It calls
 * iahrs_driver_interface__srv__Set_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
void
iahrs_driver_interface__srv__Set_Request__Sequence__destroy(iahrs_driver_interface__srv__Set_Request__Sequence * array);

/// Check for srv/Set message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Request__Sequence__are_equal(const iahrs_driver_interface__srv__Set_Request__Sequence * lhs, const iahrs_driver_interface__srv__Set_Request__Sequence * rhs);

/// Copy an array of srv/Set messages.
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
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Request__Sequence__copy(
  const iahrs_driver_interface__srv__Set_Request__Sequence * input,
  iahrs_driver_interface__srv__Set_Request__Sequence * output);

/// Initialize srv/Set message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iahrs_driver_interface__srv__Set_Response
 * )) before or use
 * iahrs_driver_interface__srv__Set_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Response__init(iahrs_driver_interface__srv__Set_Response * msg);

/// Finalize srv/Set message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
void
iahrs_driver_interface__srv__Set_Response__fini(iahrs_driver_interface__srv__Set_Response * msg);

/// Create srv/Set message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iahrs_driver_interface__srv__Set_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
iahrs_driver_interface__srv__Set_Response *
iahrs_driver_interface__srv__Set_Response__create();

/// Destroy srv/Set message.
/**
 * It calls
 * iahrs_driver_interface__srv__Set_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
void
iahrs_driver_interface__srv__Set_Response__destroy(iahrs_driver_interface__srv__Set_Response * msg);

/// Check for srv/Set message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Response__are_equal(const iahrs_driver_interface__srv__Set_Response * lhs, const iahrs_driver_interface__srv__Set_Response * rhs);

/// Copy a srv/Set message.
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
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Response__copy(
  const iahrs_driver_interface__srv__Set_Response * input,
  iahrs_driver_interface__srv__Set_Response * output);

/// Initialize array of srv/Set messages.
/**
 * It allocates the memory for the number of elements and calls
 * iahrs_driver_interface__srv__Set_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Response__Sequence__init(iahrs_driver_interface__srv__Set_Response__Sequence * array, size_t size);

/// Finalize array of srv/Set messages.
/**
 * It calls
 * iahrs_driver_interface__srv__Set_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
void
iahrs_driver_interface__srv__Set_Response__Sequence__fini(iahrs_driver_interface__srv__Set_Response__Sequence * array);

/// Create array of srv/Set messages.
/**
 * It allocates the memory for the array and calls
 * iahrs_driver_interface__srv__Set_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
iahrs_driver_interface__srv__Set_Response__Sequence *
iahrs_driver_interface__srv__Set_Response__Sequence__create(size_t size);

/// Destroy array of srv/Set messages.
/**
 * It calls
 * iahrs_driver_interface__srv__Set_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
void
iahrs_driver_interface__srv__Set_Response__Sequence__destroy(iahrs_driver_interface__srv__Set_Response__Sequence * array);

/// Check for srv/Set message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Response__Sequence__are_equal(const iahrs_driver_interface__srv__Set_Response__Sequence * lhs, const iahrs_driver_interface__srv__Set_Response__Sequence * rhs);

/// Copy an array of srv/Set messages.
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
ROSIDL_GENERATOR_C_PUBLIC_iahrs_driver_interface
bool
iahrs_driver_interface__srv__Set_Response__Sequence__copy(
  const iahrs_driver_interface__srv__Set_Response__Sequence * input,
  iahrs_driver_interface__srv__Set_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__FUNCTIONS_H_
