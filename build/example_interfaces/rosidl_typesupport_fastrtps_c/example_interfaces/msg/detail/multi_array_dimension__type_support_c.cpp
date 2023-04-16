// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from example_interfaces:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/multi_array_dimension__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "example_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "example_interfaces/msg/detail/multi_array_dimension__struct.h"
#include "example_interfaces/msg/detail/multi_array_dimension__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // label
#include "rosidl_runtime_c/string_functions.h"  // label

// forward declare type support functions


using _MultiArrayDimension__ros_msg_type = example_interfaces__msg__MultiArrayDimension;

static bool _MultiArrayDimension__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiArrayDimension__ros_msg_type * ros_message = static_cast<const _MultiArrayDimension__ros_msg_type *>(untyped_ros_message);
  // Field name: label
  {
    const rosidl_runtime_c__String * str = &ros_message->label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: size
  {
    cdr << ros_message->size;
  }

  // Field name: stride
  {
    cdr << ros_message->stride;
  }

  return true;
}

static bool _MultiArrayDimension__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiArrayDimension__ros_msg_type * ros_message = static_cast<_MultiArrayDimension__ros_msg_type *>(untyped_ros_message);
  // Field name: label
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->label.data) {
      rosidl_runtime_c__String__init(&ros_message->label);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->label,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'label'\n");
      return false;
    }
  }

  // Field name: size
  {
    cdr >> ros_message->size;
  }

  // Field name: stride
  {
    cdr >> ros_message->stride;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_example_interfaces
size_t get_serialized_size_example_interfaces__msg__MultiArrayDimension(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiArrayDimension__ros_msg_type * ros_message = static_cast<const _MultiArrayDimension__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->label.size + 1);
  // field.name size
  {
    size_t item_size = sizeof(ros_message->size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stride
  {
    size_t item_size = sizeof(ros_message->stride);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiArrayDimension__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_example_interfaces__msg__MultiArrayDimension(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_example_interfaces
size_t max_serialized_size_example_interfaces__msg__MultiArrayDimension(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stride
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiArrayDimension__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_example_interfaces__msg__MultiArrayDimension(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiArrayDimension = {
  "example_interfaces::msg",
  "MultiArrayDimension",
  _MultiArrayDimension__cdr_serialize,
  _MultiArrayDimension__cdr_deserialize,
  _MultiArrayDimension__get_serialized_size,
  _MultiArrayDimension__max_serialized_size
};

static rosidl_message_type_support_t _MultiArrayDimension__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiArrayDimension,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, msg, MultiArrayDimension)() {
  return &_MultiArrayDimension__type_support;
}

#if defined(__cplusplus)
}
#endif
