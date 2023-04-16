// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iahrs_driver_interface:srv/Set.idl
// generated code does not contain a copyright notice

#ifndef IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__TRAITS_HPP_
#define IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__TRAITS_HPP_

#include "iahrs_driver_interface/srv/detail/set__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iahrs_driver_interface::srv::Set_Request>()
{
  return "iahrs_driver_interface::srv::Set_Request";
}

template<>
inline const char * name<iahrs_driver_interface::srv::Set_Request>()
{
  return "iahrs_driver_interface/srv/Set_Request";
}

template<>
struct has_fixed_size<iahrs_driver_interface::srv::Set_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iahrs_driver_interface::srv::Set_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iahrs_driver_interface::srv::Set_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iahrs_driver_interface::srv::Set_Response>()
{
  return "iahrs_driver_interface::srv::Set_Response";
}

template<>
inline const char * name<iahrs_driver_interface::srv::Set_Response>()
{
  return "iahrs_driver_interface/srv/Set_Response";
}

template<>
struct has_fixed_size<iahrs_driver_interface::srv::Set_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iahrs_driver_interface::srv::Set_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iahrs_driver_interface::srv::Set_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iahrs_driver_interface::srv::Set>()
{
  return "iahrs_driver_interface::srv::Set";
}

template<>
inline const char * name<iahrs_driver_interface::srv::Set>()
{
  return "iahrs_driver_interface/srv/Set";
}

template<>
struct has_fixed_size<iahrs_driver_interface::srv::Set>
  : std::integral_constant<
    bool,
    has_fixed_size<iahrs_driver_interface::srv::Set_Request>::value &&
    has_fixed_size<iahrs_driver_interface::srv::Set_Response>::value
  >
{
};

template<>
struct has_bounded_size<iahrs_driver_interface::srv::Set>
  : std::integral_constant<
    bool,
    has_bounded_size<iahrs_driver_interface::srv::Set_Request>::value &&
    has_bounded_size<iahrs_driver_interface::srv::Set_Response>::value
  >
{
};

template<>
struct is_service<iahrs_driver_interface::srv::Set>
  : std::true_type
{
};

template<>
struct is_service_request<iahrs_driver_interface::srv::Set_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iahrs_driver_interface::srv::Set_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IAHRS_DRIVER_INTERFACE__SRV__DETAIL__SET__TRAITS_HPP_
