// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from omo_r1mini_interfaces:srv/SaveColor.idl
// generated code does not contain a copyright notice
#include "omo_r1mini_interfaces/srv/detail/save_color__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "omo_r1mini_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "omo_r1mini_interfaces/srv/detail/save_color__struct.h"
#include "omo_r1mini_interfaces/srv/detail/save_color__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef omo_r1mini_interfaces__srv__SaveColor_Request _SaveColor_Request__ros_msg_type;

static bool _SaveColor_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SaveColor_Request__ros_msg_type * ros_message = (_SaveColor_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: red
  rv = ucdr_serialize_int64_t(cdr, ros_message->red);
  // Member: green
  rv = ucdr_serialize_int64_t(cdr, ros_message->green);
  // Member: blue
  rv = ucdr_serialize_int64_t(cdr, ros_message->blue);

  return rv;
}

static bool _SaveColor_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SaveColor_Request__ros_msg_type * ros_message = (_SaveColor_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: red
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->red);
  // Field name: green
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->green);
  // Field name: blue
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->blue);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_omo_r1mini_interfaces
size_t get_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SaveColor_Request__ros_msg_type * ros_message = (const _SaveColor_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: red
  {
    const size_t item_size = sizeof(ros_message->red);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: green
  {
    const size_t item_size = sizeof(ros_message->green);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: blue
  {
    const size_t item_size = sizeof(ros_message->blue);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveColor_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_omo_r1mini_interfaces
size_t max_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: red
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: green
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: blue
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static size_t _SaveColor_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SaveColor_Request = {
  "omo_r1mini_interfaces::srv",
  "SaveColor_Request",
  _SaveColor_Request__cdr_serialize,
  _SaveColor_Request__cdr_deserialize,
  _SaveColor_Request__get_serialized_size,
  get_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Request,
  _SaveColor_Request__max_serialized_size
};

static rosidl_message_type_support_t _SaveColor_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SaveColor_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, SaveColor_Request)() {
  return &_SaveColor_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "omo_r1mini_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "omo_r1mini_interfaces/srv/detail/save_color__struct.h"
// already included above
// #include "omo_r1mini_interfaces/srv/detail/save_color__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef omo_r1mini_interfaces__srv__SaveColor_Response _SaveColor_Response__ros_msg_type;

static bool _SaveColor_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SaveColor_Response__ros_msg_type * ros_message = (_SaveColor_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _SaveColor_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SaveColor_Response__ros_msg_type * ros_message = (_SaveColor_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_omo_r1mini_interfaces
size_t get_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SaveColor_Response__ros_msg_type * ros_message = (const _SaveColor_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveColor_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_omo_r1mini_interfaces
size_t max_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _SaveColor_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SaveColor_Response = {
  "omo_r1mini_interfaces::srv",
  "SaveColor_Response",
  _SaveColor_Response__cdr_serialize,
  _SaveColor_Response__cdr_deserialize,
  _SaveColor_Response__get_serialized_size,
  get_serialized_size_omo_r1mini_interfaces__srv__SaveColor_Response,
  _SaveColor_Response__max_serialized_size
};

static rosidl_message_type_support_t _SaveColor_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SaveColor_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, SaveColor_Response)() {
  return &_SaveColor_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "omo_r1mini_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "omo_r1mini_interfaces/srv/save_color.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SaveColor__callbacks = {
  "omo_r1mini_interfaces::srv",
  "SaveColor",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, SaveColor_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, SaveColor_Response),
};

static rosidl_service_type_support_t SaveColor__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SaveColor__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, SaveColor)() {
  return &SaveColor__handle;
}

#if defined(__cplusplus)
}
#endif
