// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from msg_srv_action_interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/msg/detail/arithmetic_argument__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "msg_srv_action_interface_example/msg/detail/arithmetic_argument__struct.h"
#include "msg_srv_action_interface_example/msg/detail/arithmetic_argument__functions.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();


typedef msg_srv_action_interface_example__msg__ArithmeticArgument _ArithmeticArgument__ros_msg_type;

static bool _ArithmeticArgument__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticArgument__ros_msg_type * ros_message = (_ArithmeticArgument__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);
  // Member: argument_a
  rv = ucdr_serialize_float(cdr, ros_message->argument_a);
  // Member: argument_b
  rv = ucdr_serialize_float(cdr, ros_message->argument_b);

  return rv;
}

static bool _ArithmeticArgument__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticArgument__ros_msg_type * ros_message = (_ArithmeticArgument__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->stamp);
  // Field name: argument_a
  rv = ucdr_deserialize_float(cdr, &ros_message->argument_a);
  // Field name: argument_b
  rv = ucdr_deserialize_float(cdr, &ros_message->argument_b);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__msg__ArithmeticArgument(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticArgument__ros_msg_type * ros_message = (const _ArithmeticArgument__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->stamp, current_alignment);
  // Member: argument_a
  {
    const size_t item_size = sizeof(ros_message->argument_a);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: argument_b
  {
    const size_t item_size = sizeof(ros_message->argument_b);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticArgument__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__msg__ArithmeticArgument(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__msg__ArithmeticArgument(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: argument_a
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: argument_b
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _ArithmeticArgument__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__msg__ArithmeticArgument(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticArgument = {
  "msg_srv_action_interface_example::msg",
  "ArithmeticArgument",
  _ArithmeticArgument__cdr_serialize,
  _ArithmeticArgument__cdr_deserialize,
  _ArithmeticArgument__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__msg__ArithmeticArgument,
  _ArithmeticArgument__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticArgument__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticArgument,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, msg, ArithmeticArgument)() {
  return &_ArithmeticArgument__type_support;
}

#if defined(__cplusplus)
}
#endif
