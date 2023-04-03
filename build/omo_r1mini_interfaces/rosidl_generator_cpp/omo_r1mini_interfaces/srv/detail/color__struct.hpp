// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omo_r1mini_interfaces:srv/Color.idl
// generated code does not contain a copyright notice

#ifndef OMO_R1MINI_INTERFACES__SRV__DETAIL__COLOR__STRUCT_HPP_
#define OMO_R1MINI_INTERFACES__SRV__DETAIL__COLOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__omo_r1mini_interfaces__srv__Color_Request __attribute__((deprecated))
#else
# define DEPRECATED__omo_r1mini_interfaces__srv__Color_Request __declspec(deprecated)
#endif

namespace omo_r1mini_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Color_Request_
{
  using Type = Color_Request_<ContainerAllocator>;

  explicit Color_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0ll;
      this->green = 0ll;
      this->blue = 0ll;
    }
  }

  explicit Color_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0ll;
      this->green = 0ll;
      this->blue = 0ll;
    }
  }

  // field types and members
  using _red_type =
    int64_t;
  _red_type red;
  using _green_type =
    int64_t;
  _green_type green;
  using _blue_type =
    int64_t;
  _blue_type blue;

  // setters for named parameter idiom
  Type & set__red(
    const int64_t & _arg)
  {
    this->red = _arg;
    return *this;
  }
  Type & set__green(
    const int64_t & _arg)
  {
    this->green = _arg;
    return *this;
  }
  Type & set__blue(
    const int64_t & _arg)
  {
    this->blue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omo_r1mini_interfaces__srv__Color_Request
    std::shared_ptr<omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omo_r1mini_interfaces__srv__Color_Request
    std::shared_ptr<omo_r1mini_interfaces::srv::Color_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Color_Request_ & other) const
  {
    if (this->red != other.red) {
      return false;
    }
    if (this->green != other.green) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    return true;
  }
  bool operator!=(const Color_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Color_Request_

// alias to use template instance with default allocator
using Color_Request =
  omo_r1mini_interfaces::srv::Color_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omo_r1mini_interfaces


#ifndef _WIN32
# define DEPRECATED__omo_r1mini_interfaces__srv__Color_Response __attribute__((deprecated))
#else
# define DEPRECATED__omo_r1mini_interfaces__srv__Color_Response __declspec(deprecated)
#endif

namespace omo_r1mini_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Color_Response_
{
  using Type = Color_Response_<ContainerAllocator>;

  explicit Color_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Color_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omo_r1mini_interfaces__srv__Color_Response
    std::shared_ptr<omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omo_r1mini_interfaces__srv__Color_Response
    std::shared_ptr<omo_r1mini_interfaces::srv::Color_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Color_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Color_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Color_Response_

// alias to use template instance with default allocator
using Color_Response =
  omo_r1mini_interfaces::srv::Color_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omo_r1mini_interfaces

namespace omo_r1mini_interfaces
{

namespace srv
{

struct Color
{
  using Request = omo_r1mini_interfaces::srv::Color_Request;
  using Response = omo_r1mini_interfaces::srv::Color_Response;
};

}  // namespace srv

}  // namespace omo_r1mini_interfaces

#endif  // OMO_R1MINI_INTERFACES__SRV__DETAIL__COLOR__STRUCT_HPP_
