// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from msg_srv_action_interface_example:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/srv/detail/arithmetic_operator__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "msg_srv_action_interface_example/srv/detail/arithmetic_operator__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace msg_srv_action_interface_example
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::srv::ArithmeticOperator_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: arithmetic_operator
  rv = ucdr_serialize_int8_t(cdr, ros_message.arithmetic_operator);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::srv::ArithmeticOperator_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: arithmetic_operator
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.arithmetic_operator);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::srv::ArithmeticOperator_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: arithmetic_operator
  {
    const size_t item_size = sizeof(ros_message.arithmetic_operator);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticOperator_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: arithmetic_operator
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticOperator_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticOperator_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::srv::ArithmeticOperator_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticOperator_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticOperator_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticOperator_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticOperator_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticOperator_Request__callbacks = {
  "msg_srv_action_interface_example::srv",
  "ArithmeticOperator_Request",
  _ArithmeticOperator_Request__cdr_serialize,
  _ArithmeticOperator_Request__cdr_deserialize,
  _ArithmeticOperator_Request__get_serialized_size,
  _ArithmeticOperator_Request__get_serialized_size_with_initial_alignment,
  _ArithmeticOperator_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticOperator_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticOperator_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::srv::ArithmeticOperator_Request>()
{
  return &msg_srv_action_interface_example::srv::typesupport_microxrcedds_cpp::_ArithmeticOperator_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator_Request)() {
  return &msg_srv_action_interface_example::srv::typesupport_microxrcedds_cpp::_ArithmeticOperator_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace msg_srv_action_interface_example
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::srv::ArithmeticOperator_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: arithmetic_result
  rv = ucdr_serialize_float(cdr, ros_message.arithmetic_result);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::srv::ArithmeticOperator_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: arithmetic_result
  rv = ucdr_deserialize_float(cdr, &ros_message.arithmetic_result);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::srv::ArithmeticOperator_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: arithmetic_result
  {
    const size_t item_size = sizeof(ros_message.arithmetic_result);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticOperator_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: arithmetic_result
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticOperator_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticOperator_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::srv::ArithmeticOperator_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticOperator_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticOperator_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticOperator_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticOperator_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticOperator_Response__callbacks = {
  "msg_srv_action_interface_example::srv",
  "ArithmeticOperator_Response",
  _ArithmeticOperator_Response__cdr_serialize,
  _ArithmeticOperator_Response__cdr_deserialize,
  _ArithmeticOperator_Response__get_serialized_size,
  _ArithmeticOperator_Response__get_serialized_size_with_initial_alignment,
  _ArithmeticOperator_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticOperator_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticOperator_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::srv::ArithmeticOperator_Response>()
{
  return &msg_srv_action_interface_example::srv::typesupport_microxrcedds_cpp::_ArithmeticOperator_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator_Response)() {
  return &msg_srv_action_interface_example::srv::typesupport_microxrcedds_cpp::_ArithmeticOperator_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace msg_srv_action_interface_example
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _ArithmeticOperator__callbacks = {
  "msg_srv_action_interface_example::srv",
  "ArithmeticOperator",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator_Response),
};

static rosidl_service_type_support_t _ArithmeticOperator__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticOperator__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_srv_action_interface_example::srv::ArithmeticOperator>()
{
  return &msg_srv_action_interface_example::srv::typesupport_microxrcedds_cpp::_ArithmeticOperator__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator)() {
  return &msg_srv_action_interface_example::srv::typesupport_microxrcedds_cpp::_ArithmeticOperator__handle;
}

#ifdef __cplusplus
}
#endif
