// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from omo_r1mini_interfaces:srv/SaveColor.idl
// generated code does not contain a copyright notice

#ifndef OMO_R1MINI_INTERFACES__SRV__SAVE_COLOR__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define OMO_R1MINI_INTERFACES__SRV__SAVE_COLOR__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "omo_r1mini_interfaces/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "omo_r1mini_interfaces/srv/detail/save_color__struct.hpp"

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

#include "ucdr/microcdr.h"

namespace omo_r1mini_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
cdr_serialize(
  const omo_r1mini_interfaces::srv::SaveColor_Request & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  omo_r1mini_interfaces::srv::SaveColor_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
get_serialized_size(
  const omo_r1mini_interfaces::srv::SaveColor_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
max_serialized_size_SaveColor_Request(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace omo_r1mini_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, omo_r1mini_interfaces, srv, SaveColor_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "omo_r1mini_interfaces/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
// already included above
// #include "omo_r1mini_interfaces/srv/detail/save_color__struct.hpp"

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

// already included above
// #include "ucdr/microcdr.h"

namespace omo_r1mini_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
cdr_serialize(
  const omo_r1mini_interfaces::srv::SaveColor_Response & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  omo_r1mini_interfaces::srv::SaveColor_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
get_serialized_size(
  const omo_r1mini_interfaces::srv::SaveColor_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
max_serialized_size_SaveColor_Response(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace omo_r1mini_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, omo_r1mini_interfaces, srv, SaveColor_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "omo_r1mini_interfaces/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_omo_r1mini_interfaces
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, omo_r1mini_interfaces, srv, SaveColor)();

#ifdef __cplusplus
}
#endif

#endif  // OMO_R1MINI_INTERFACES__SRV__SAVE_COLOR__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
