// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iahrs_driver_interface:srv/Set.idl
// generated code does not contain a copyright notice

#ifndef IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__STRUCT_H_
#define IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Set in the package iahrs_driver_interface.
typedef struct iahrs_driver_interface__srv__Set_Request
{
  uint8_t structure_needs_at_least_one_member;
} iahrs_driver_interface__srv__Set_Request;

// Struct for a sequence of iahrs_driver_interface__srv__Set_Request.
typedef struct iahrs_driver_interface__srv__Set_Request__Sequence
{
  iahrs_driver_interface__srv__Set_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iahrs_driver_interface__srv__Set_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Set in the package iahrs_driver_interface.
typedef struct iahrs_driver_interface__srv__Set_Response
{
  bool result;
} iahrs_driver_interface__srv__Set_Response;

// Struct for a sequence of iahrs_driver_interface__srv__Set_Response.
typedef struct iahrs_driver_interface__srv__Set_Response__Sequence
{
  iahrs_driver_interface__srv__Set_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iahrs_driver_interface__srv__Set_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__STRUCT_H_
