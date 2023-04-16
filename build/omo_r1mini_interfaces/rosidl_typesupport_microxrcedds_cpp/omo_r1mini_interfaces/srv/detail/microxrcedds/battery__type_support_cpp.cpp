// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from omo_r1mini_interfaces:srv/Battery.idl
// generated code does not contain a copyright notice
#include "omo_r1mini_interfaces/srv/detail/battery__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "omo_r1mini_interfaces/srv/detail/battery__struct.hpp"

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

namespace omo_r1mini_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
cdr_serialize(
  const omo_r1mini_interfaces::srv::Battery_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message.structure_needs_at_least_one_member);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  omo_r1mini_interfaces::srv::Battery_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.structure_needs_at_least_one_member);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
get_serialized_size(
  const omo_r1mini_interfaces::srv::Battery_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
max_serialized_size_Battery_Request(
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

static bool _Battery_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const omo_r1mini_interfaces::srv::Battery_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Battery_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<omo_r1mini_interfaces::srv::Battery_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Battery_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const omo_r1mini_interfaces::srv::Battery_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Battery_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const omo_r1mini_interfaces::srv::Battery_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Battery_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Battery_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _Battery_Request__callbacks = {
  "omo_r1mini_interfaces::srv",
  "Battery_Request",
  _Battery_Request__cdr_serialize,
  _Battery_Request__cdr_deserialize,
  _Battery_Request__get_serialized_size,
  _Battery_Request__get_serialized_size_with_initial_alignment,
  _Battery_Request__max_serialized_size
};

static rosidl_message_type_support_t _Battery_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Battery_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace omo_r1mini_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_omo_r1mini_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<omo_r1mini_interfaces::srv::Battery_Request>()
{
  return &omo_r1mini_interfaces::srv::typesupport_microxrcedds_cpp::_Battery_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, omo_r1mini_interfaces, srv, Battery_Request)() {
  return &omo_r1mini_interfaces::srv::typesupport_microxrcedds_cpp::_Battery_Request__handle;
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

namespace omo_r1mini_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
cdr_serialize(
  const omo_r1mini_interfaces::srv::Battery_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: volt
  rv = ucdr_serialize_double(cdr, ros_message.volt);
  // Member: soc
  rv = ucdr_serialize_double(cdr, ros_message.soc);
  // Member: current
  rv = ucdr_serialize_double(cdr, ros_message.current);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  omo_r1mini_interfaces::srv::Battery_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: volt
  rv = ucdr_deserialize_double(cdr, &ros_message.volt);
  // Member: soc
  rv = ucdr_deserialize_double(cdr, &ros_message.soc);
  // Member: current
  rv = ucdr_deserialize_double(cdr, &ros_message.current);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
get_serialized_size(
  const omo_r1mini_interfaces::srv::Battery_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: volt
  {
    const size_t item_size = sizeof(ros_message.volt);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: soc
  {
    const size_t item_size = sizeof(ros_message.soc);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: current
  {
    const size_t item_size = sizeof(ros_message.current);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
max_serialized_size_Battery_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: volt
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: soc
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: current
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static bool _Battery_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const omo_r1mini_interfaces::srv::Battery_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Battery_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<omo_r1mini_interfaces::srv::Battery_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Battery_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const omo_r1mini_interfaces::srv::Battery_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Battery_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const omo_r1mini_interfaces::srv::Battery_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Battery_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Battery_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _Battery_Response__callbacks = {
  "omo_r1mini_interfaces::srv",
  "Battery_Response",
  _Battery_Response__cdr_serialize,
  _Battery_Response__cdr_deserialize,
  _Battery_Response__get_serialized_size,
  _Battery_Response__get_serialized_size_with_initial_alignment,
  _Battery_Response__max_serialized_size
};

static rosidl_message_type_support_t _Battery_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Battery_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace omo_r1mini_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_omo_r1mini_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<omo_r1mini_interfaces::srv::Battery_Response>()
{
  return &omo_r1mini_interfaces::srv::typesupport_microxrcedds_cpp::_Battery_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, omo_r1mini_interfaces, srv, Battery_Response)() {
  return &omo_r1mini_interfaces::srv::typesupport_microxrcedds_cpp::_Battery_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace omo_r1mini_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _Battery__callbacks = {
  "omo_r1mini_interfaces::srv",
  "Battery",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, omo_r1mini_interfaces, srv, Battery_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, omo_r1mini_interfaces, srv, Battery_Response),
};

static rosidl_service_type_support_t _Battery__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Battery__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace omo_r1mini_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_omo_r1mini_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<omo_r1mini_interfaces::srv::Battery>()
{
  return &omo_r1mini_interfaces::srv::typesupport_microxrcedds_cpp::_Battery__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, omo_r1mini_interfaces, srv, Battery)() {
  return &omo_r1mini_interfaces::srv::typesupport_microxrcedds_cpp::_Battery__handle;
}

#ifdef __cplusplus
}
#endif