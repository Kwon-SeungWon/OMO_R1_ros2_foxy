// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.hpp"

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

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Goal & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_sum
  rv = ucdr_serialize_float(cdr, ros_message.goal_sum);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::action::ArithmeticChecker_Goal & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_sum
  rv = ucdr_deserialize_float(cdr, &ros_message.goal_sum);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Goal & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_sum
  {
    const size_t item_size = sizeof(ros_message.goal_sum);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticChecker_Goal(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_sum
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticChecker_Goal__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticChecker_Goal__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::action::ArithmeticChecker_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticChecker_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticChecker_Goal__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Goal *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticChecker_Goal__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticChecker_Goal(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticChecker_Goal__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_Goal",
  _ArithmeticChecker_Goal__cdr_serialize,
  _ArithmeticChecker_Goal__cdr_deserialize,
  _ArithmeticChecker_Goal__get_serialized_size,
  _ArithmeticChecker_Goal__get_serialized_size_with_initial_alignment,
  _ArithmeticChecker_Goal__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_Goal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_Goal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_Goal)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_Goal__handle;
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

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Result & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: all_formula
  {
    size_t size = ros_message.all_formula.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.all_formula[i].c_str());
    }
  }
  // Member: total_sum
  rv = ucdr_serialize_float(cdr, ros_message.total_sum);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::action::ArithmeticChecker_Result & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: all_formula
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.all_formula.capacity()) {
      ros_message.all_formula.resize(size);
    } else {
      ros_message.all_formula.resize(ros_message.all_formula.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.all_formula[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.all_formula[i] = std::move(stemp);
      }
      free(temp);
    }
  }
  // Member: total_sum
  rv = ucdr_deserialize_float(cdr, &ros_message.total_sum);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Result & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: all_formula
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.all_formula.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.all_formula[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: total_sum
  {
    const size_t item_size = sizeof(ros_message.total_sum);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticChecker_Result(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: all_formula
  {
    *full_bounded = false;
  }
  // Member: total_sum
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticChecker_Result__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticChecker_Result__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::action::ArithmeticChecker_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticChecker_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticChecker_Result__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Result *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticChecker_Result__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticChecker_Result(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticChecker_Result__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_Result",
  _ArithmeticChecker_Result__cdr_serialize,
  _ArithmeticChecker_Result__cdr_deserialize,
  _ArithmeticChecker_Result__get_serialized_size,
  _ArithmeticChecker_Result__get_serialized_size_with_initial_alignment,
  _ArithmeticChecker_Result__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_Result__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_Result>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_Result__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_Result)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_Result__handle;
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

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: formula
  {
    size_t size = ros_message.formula.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.formula[i].c_str());
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::action::ArithmeticChecker_Feedback & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: formula
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.formula.capacity()) {
      ros_message.formula.resize(size);
    } else {
      ros_message.formula.resize(ros_message.formula.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.formula[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.formula[i] = std::move(stemp);
      }
      free(temp);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: formula
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.formula.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.formula[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticChecker_Feedback(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: formula
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _ArithmeticChecker_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticChecker_Feedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticChecker_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticChecker_Feedback__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticChecker_Feedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticChecker_Feedback(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticChecker_Feedback__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_Feedback",
  _ArithmeticChecker_Feedback__cdr_serialize,
  _ArithmeticChecker_Feedback__cdr_deserialize,
  _ArithmeticChecker_Feedback__get_serialized_size,
  _ArithmeticChecker_Feedback__get_serialized_size_with_initial_alignment,
  _ArithmeticChecker_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_Feedback__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_Feedback__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_Feedback)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_Feedback__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace msg_srv_action_interface_example
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Goal &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  msg_srv_action_interface_example::action::ArithmeticChecker_Goal &);

size_t get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Goal &,
  size_t current_alignment);

size_t
max_serialized_size_ArithmeticChecker_Goal(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  rv = msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: goal
  rv = msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: goal
  current_alignment += msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticChecker_SendGoal_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: goal
  current_alignment += msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::max_serialized_size_ArithmeticChecker_Goal(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticChecker_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticChecker_SendGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticChecker_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticChecker_SendGoal_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticChecker_SendGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticChecker_SendGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticChecker_SendGoal_Request__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_SendGoal_Request",
  _ArithmeticChecker_SendGoal_Request__cdr_serialize,
  _ArithmeticChecker_SendGoal_Request__cdr_deserialize,
  _ArithmeticChecker_SendGoal_Request__get_serialized_size,
  _ArithmeticChecker_SendGoal_Request__get_serialized_size_with_initial_alignment,
  _ArithmeticChecker_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_SendGoal_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Request)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_SendGoal_Request__handle;
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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace msg_srv_action_interface_example
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: accepted
  rv = ucdr_serialize_bool(cdr, ros_message.accepted);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: accepted
  rv = ucdr_deserialize_bool(cdr, &ros_message.accepted);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  {
    const size_t item_size = sizeof(ros_message.accepted);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticChecker_SendGoal_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticChecker_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticChecker_SendGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticChecker_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticChecker_SendGoal_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticChecker_SendGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticChecker_SendGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticChecker_SendGoal_Response__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_SendGoal_Response",
  _ArithmeticChecker_SendGoal_Response__cdr_serialize,
  _ArithmeticChecker_SendGoal_Response__cdr_deserialize,
  _ArithmeticChecker_SendGoal_Response__get_serialized_size,
  _ArithmeticChecker_SendGoal_Response__get_serialized_size_with_initial_alignment,
  _ArithmeticChecker_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_SendGoal_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Response)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_SendGoal_Response__handle;
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

namespace action
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _ArithmeticChecker_SendGoal__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Response),
};

static rosidl_service_type_support_t _ArithmeticChecker_SendGoal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_SendGoal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_SendGoal__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace msg_srv_action_interface_example
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticChecker_GetResult_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticChecker_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticChecker_GetResult_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticChecker_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticChecker_GetResult_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticChecker_GetResult_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticChecker_GetResult_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticChecker_GetResult_Request__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_GetResult_Request",
  _ArithmeticChecker_GetResult_Request__cdr_serialize,
  _ArithmeticChecker_GetResult_Request__cdr_deserialize,
  _ArithmeticChecker_GetResult_Request__get_serialized_size,
  _ArithmeticChecker_GetResult_Request__get_serialized_size_with_initial_alignment,
  _ArithmeticChecker_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_GetResult_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Request)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_GetResult_Request__handle;
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
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Result &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  msg_srv_action_interface_example::action::ArithmeticChecker_Result &);

size_t get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Result &,
  size_t current_alignment);

size_t
max_serialized_size_ArithmeticChecker_Result(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message.status);
  // Member: result
  rv = msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.result,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.status);
  // Member: result
  rv = msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.result);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status
  {
    const size_t item_size = sizeof(ros_message.status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: result
  current_alignment += msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.result,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticChecker_GetResult_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: result
  current_alignment += msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::max_serialized_size_ArithmeticChecker_Result(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticChecker_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticChecker_GetResult_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticChecker_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticChecker_GetResult_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticChecker_GetResult_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticChecker_GetResult_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticChecker_GetResult_Response__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_GetResult_Response",
  _ArithmeticChecker_GetResult_Response__cdr_serialize,
  _ArithmeticChecker_GetResult_Response__cdr_deserialize,
  _ArithmeticChecker_GetResult_Response__get_serialized_size,
  _ArithmeticChecker_GetResult_Response__get_serialized_size_with_initial_alignment,
  _ArithmeticChecker_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_GetResult_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Response)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _ArithmeticChecker_GetResult__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Response),
};

static rosidl_service_type_support_t _ArithmeticChecker_GetResult__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_GetResult__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_GetResult__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace msg_srv_action_interface_example
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  msg_srv_action_interface_example::action::ArithmeticChecker_Feedback &);

size_t get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback &,
  size_t current_alignment);

size_t
max_serialized_size_ArithmeticChecker_Feedback(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  rv = msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  ucdrBuffer * cdr,
  msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: feedback
  rv = msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.feedback);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: feedback
  current_alignment += msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.feedback,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticChecker_FeedbackMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: feedback
  current_alignment += msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::max_serialized_size_ArithmeticChecker_Feedback(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _ArithmeticChecker_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticChecker_FeedbackMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticChecker_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticChecker_FeedbackMessage__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ArithmeticChecker_FeedbackMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ArithmeticChecker_FeedbackMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t _ArithmeticChecker_FeedbackMessage__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_FeedbackMessage",
  _ArithmeticChecker_FeedbackMessage__cdr_serialize,
  _ArithmeticChecker_FeedbackMessage__cdr_deserialize,
  _ArithmeticChecker_FeedbackMessage__get_serialized_size,
  _ArithmeticChecker_FeedbackMessage__get_serialized_size_with_initial_alignment,
  _ArithmeticChecker_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_FeedbackMessage__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ArithmeticChecker_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage>()
{
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, msg_srv_action_interface_example, action, ArithmeticChecker_FeedbackMessage)() {
  return &msg_srv_action_interface_example::action::typesupport_microxrcedds_cpp::_ArithmeticChecker_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
