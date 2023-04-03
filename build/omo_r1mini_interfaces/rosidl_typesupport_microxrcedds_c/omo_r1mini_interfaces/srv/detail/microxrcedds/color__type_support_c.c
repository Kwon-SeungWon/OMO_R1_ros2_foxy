// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from omo_r1mini_interfaces:srv/Color.idl
// generated code does not contain a copyright notice
#include "omo_r1mini_interfaces/srv/detail/color__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "omo_r1mini_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "omo_r1mini_interfaces/srv/detail/color__struct.h"
#include "omo_r1mini_interfaces/srv/detail/color__functions.h"

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


typedef omo_r1mini_interfaces__srv__Color_Request _Color_Request__ros_msg_type;

static bool _Color_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Color_Request__ros_msg_type * ros_message = (_Color_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: red
  rv = ucdr_serialize_int64_t(cdr, ros_message->red);
  // Member: green
  rv = ucdr_serialize_int64_t(cdr, ros_message->green);
  // Member: blue
  rv = ucdr_serialize_int64_t(cdr, ros_message->blue);

  return rv;
}

static bool _Color_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Color_Request__ros_msg_type * ros_message = (_Color_Request__ros_msg_type *)(untyped_ros_message);
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
size_t get_serialized_size_omo_r1mini_interfaces__srv__Color_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Color_Request__ros_msg_type * ros_message = (const _Color_Request__ros_msg_type *)(untyped_ros_message);
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

static uint32_t _Color_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_omo_r1mini_interfaces__srv__Color_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_omo_r1mini_interfaces
size_t max_serialized_size_omo_r1mini_interfaces__srv__Color_Request(
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

static size_t _Color_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_omo_r1mini_interfaces__srv__Color_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Color_Request = {
  "omo_r1mini_interfaces::srv",
  "Color_Request",
  _Color_Request__cdr_serialize,
  _Color_Request__cdr_deserialize,
  _Color_Request__get_serialized_size,
  get_serialized_size_omo_r1mini_interfaces__srv__Color_Request,
  _Color_Request__max_serialized_size
};

static rosidl_message_type_support_t _Color_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Color_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, Color_Request)() {
  return &_Color_Request__type_support;
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
// #include "omo_r1mini_interfaces/srv/detail/color__struct.h"
// already included above
// #include "omo_r1mini_interfaces/srv/detail/color__functions.h"

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


typedef omo_r1mini_interfaces__srv__Color_Response _Color_Response__ros_msg_type;

static bool _Color_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Color_Response__ros_msg_type * ros_message = (_Color_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _Color_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Color_Response__ros_msg_type * ros_message = (_Color_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_omo_r1mini_interfaces
size_t get_serialized_size_omo_r1mini_interfaces__srv__Color_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Color_Response__ros_msg_type * ros_message = (const _Color_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Color_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_omo_r1mini_interfaces__srv__Color_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_omo_r1mini_interfaces
size_t max_serialized_size_omo_r1mini_interfaces__srv__Color_Response(
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

static size_t _Color_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_omo_r1mini_interfaces__srv__Color_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Color_Response = {
  "omo_r1mini_interfaces::srv",
  "Color_Response",
  _Color_Response__cdr_serialize,
  _Color_Response__cdr_deserialize,
  _Color_Response__get_serialized_size,
  get_serialized_size_omo_r1mini_interfaces__srv__Color_Response,
  _Color_Response__max_serialized_size
};

static rosidl_message_type_support_t _Color_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Color_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, Color_Response)() {
  return &_Color_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "omo_r1mini_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "omo_r1mini_interfaces/srv/color.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Color__callbacks = {
  "omo_r1mini_interfaces::srv",
  "Color",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, Color_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, Color_Response),
};

static rosidl_service_type_support_t Color__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &Color__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, omo_r1mini_interfaces, srv, Color)() {
  return &Color__handle;
}

#if defined(__cplusplus)
}
#endif
