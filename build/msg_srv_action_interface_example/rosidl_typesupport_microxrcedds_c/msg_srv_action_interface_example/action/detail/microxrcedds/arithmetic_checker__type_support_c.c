// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

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


typedef msg_srv_action_interface_example__action__ArithmeticChecker_Goal _ArithmeticChecker_Goal__ros_msg_type;

static bool _ArithmeticChecker_Goal__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticChecker_Goal__ros_msg_type * ros_message = (_ArithmeticChecker_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_sum
  rv = ucdr_serialize_float(cdr, ros_message->goal_sum);

  return rv;
}

static bool _ArithmeticChecker_Goal__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticChecker_Goal__ros_msg_type * ros_message = (_ArithmeticChecker_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_sum
  rv = ucdr_deserialize_float(cdr, &ros_message->goal_sum);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticChecker_Goal__ros_msg_type * ros_message = (const _ArithmeticChecker_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_sum
  {
    const size_t item_size = sizeof(ros_message->goal_sum);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticChecker_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal(
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

static size_t _ArithmeticChecker_Goal__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticChecker_Goal = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_Goal",
  _ArithmeticChecker_Goal__cdr_serialize,
  _ArithmeticChecker_Goal__cdr_deserialize,
  _ArithmeticChecker_Goal__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal,
  _ArithmeticChecker_Goal__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_Goal__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticChecker_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Goal)() {
  return &_ArithmeticChecker_Goal__type_support;
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
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

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

#include "rosidl_runtime_c/string.h"  // all_formula
#include "rosidl_runtime_c/string_functions.h"  // all_formula

// forward declare type support functions


typedef msg_srv_action_interface_example__action__ArithmeticChecker_Result _ArithmeticChecker_Result__ros_msg_type;

static bool _ArithmeticChecker_Result__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticChecker_Result__ros_msg_type * ros_message = (_ArithmeticChecker_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: all_formula
  {
    const size_t size = ros_message->all_formula.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->all_formula.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->all_formula.data[i].data) + 1;
      ros_message->all_formula.data[i].size = (ros_message->all_formula.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->all_formula.data[i].data, string_len);
    }
  }
  // Member: total_sum
  rv = ucdr_serialize_float(cdr, ros_message->total_sum);

  return rv;
}

static bool _ArithmeticChecker_Result__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticChecker_Result__ros_msg_type * ros_message = (_ArithmeticChecker_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: all_formula
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->all_formula.capacity){
      return 0;
    }
    ros_message->all_formula.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->all_formula.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->all_formula.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->all_formula.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->all_formula.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  // Field name: total_sum
  rv = ucdr_deserialize_float(cdr, &ros_message->total_sum);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticChecker_Result__ros_msg_type * ros_message = (const _ArithmeticChecker_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: all_formula
  {
    const size_t sequence_size = ros_message->all_formula.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->all_formula.data[i].size + 1;
    }
  }
  // Member: total_sum
  {
    const size_t item_size = sizeof(ros_message->total_sum);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticChecker_Result__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result(
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

static size_t _ArithmeticChecker_Result__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticChecker_Result = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_Result",
  _ArithmeticChecker_Result__cdr_serialize,
  _ArithmeticChecker_Result__cdr_deserialize,
  _ArithmeticChecker_Result__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result,
  _ArithmeticChecker_Result__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_Result__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticChecker_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Result)() {
  return &_ArithmeticChecker_Result__type_support;
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
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // formula
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // formula

// forward declare type support functions


typedef msg_srv_action_interface_example__action__ArithmeticChecker_Feedback _ArithmeticChecker_Feedback__ros_msg_type;

static bool _ArithmeticChecker_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticChecker_Feedback__ros_msg_type * ros_message = (_ArithmeticChecker_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: formula
  {
    const size_t size = ros_message->formula.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->formula.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->formula.data[i].data) + 1;
      ros_message->formula.data[i].size = (ros_message->formula.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->formula.data[i].data, string_len);
    }
  }

  return rv;
}

static bool _ArithmeticChecker_Feedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticChecker_Feedback__ros_msg_type * ros_message = (_ArithmeticChecker_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: formula
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->formula.capacity){
      return 0;
    }
    ros_message->formula.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->formula.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->formula.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->formula.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->formula.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticChecker_Feedback__ros_msg_type * ros_message = (const _ArithmeticChecker_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: formula
  {
    const size_t sequence_size = ros_message->formula.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->formula.data[i].size + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticChecker_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback(
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

static size_t _ArithmeticChecker_Feedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticChecker_Feedback = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_Feedback",
  _ArithmeticChecker_Feedback__cdr_serialize,
  _ArithmeticChecker_Feedback__cdr_deserialize,
  _ArithmeticChecker_Feedback__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback,
  _ArithmeticChecker_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_Feedback__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticChecker_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Feedback)() {
  return &_ArithmeticChecker_Feedback__type_support;
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
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

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

// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Goal)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)();


typedef msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request _ArithmeticChecker_SendGoal_Request__ros_msg_type;

static bool _ArithmeticChecker_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticChecker_SendGoal_Request__ros_msg_type * ros_message = (_ArithmeticChecker_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);
  // Member: goal
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Goal
      )()->data))->cdr_serialize(&ros_message->goal, cdr);

  return rv;
}

static bool _ArithmeticChecker_SendGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticChecker_SendGoal_Request__ros_msg_type * ros_message = (_ArithmeticChecker_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  // Field name: goal
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Goal
      )()->data))->cdr_deserialize(cdr, &ros_message->goal);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticChecker_SendGoal_Request__ros_msg_type * ros_message = (const _ArithmeticChecker_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);
  // Member: goal
  current_alignment +=
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal(&ros_message->goal, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticChecker_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    max_serialized_size_unique_identifier_msgs__msg__UUID(full_bounded, current_alignment);
  // Member: goal
  current_alignment +=
    max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Goal(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _ArithmeticChecker_SendGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticChecker_SendGoal_Request = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_SendGoal_Request",
  _ArithmeticChecker_SendGoal_Request__cdr_serialize,
  _ArithmeticChecker_SendGoal_Request__cdr_deserialize,
  _ArithmeticChecker_SendGoal_Request__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request,
  _ArithmeticChecker_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_SendGoal_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticChecker_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Request)() {
  return &_ArithmeticChecker_SendGoal_Request__type_support;
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
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

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


typedef msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response _ArithmeticChecker_SendGoal_Response__ros_msg_type;

static bool _ArithmeticChecker_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticChecker_SendGoal_Response__ros_msg_type * ros_message = (_ArithmeticChecker_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: accepted
  rv = ucdr_serialize_bool(cdr, (ros_message->accepted) ? 0x01 : 0x00);
  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);

  return rv;
}

static bool _ArithmeticChecker_SendGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticChecker_SendGoal_Response__ros_msg_type * ros_message = (_ArithmeticChecker_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: accepted
  rv = ucdr_deserialize_bool(cdr, &ros_message->accepted);
  // Field name: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->stamp);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticChecker_SendGoal_Response__ros_msg_type * ros_message = (const _ArithmeticChecker_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  {
    const size_t item_size = sizeof(ros_message->accepted);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->stamp, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticChecker_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: stamp
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _ArithmeticChecker_SendGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticChecker_SendGoal_Response = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_SendGoal_Response",
  _ArithmeticChecker_SendGoal_Response__cdr_serialize,
  _ArithmeticChecker_SendGoal_Response__cdr_deserialize,
  _ArithmeticChecker_SendGoal_Response__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response,
  _ArithmeticChecker_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_SendGoal_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticChecker_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Response)() {
  return &_ArithmeticChecker_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "msg_srv_action_interface_example/action/arithmetic_checker.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArithmeticChecker_SendGoal__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Response),
};

static rosidl_service_type_support_t ArithmeticChecker_SendGoal__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &ArithmeticChecker_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal)() {
  return &ArithmeticChecker_SendGoal__handle;
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
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)();


typedef msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request _ArithmeticChecker_GetResult_Request__ros_msg_type;

static bool _ArithmeticChecker_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticChecker_GetResult_Request__ros_msg_type * ros_message = (_ArithmeticChecker_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);

  return rv;
}

static bool _ArithmeticChecker_GetResult_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticChecker_GetResult_Request__ros_msg_type * ros_message = (_ArithmeticChecker_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticChecker_GetResult_Request__ros_msg_type * ros_message = (const _ArithmeticChecker_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticChecker_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    max_serialized_size_unique_identifier_msgs__msg__UUID(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _ArithmeticChecker_GetResult_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticChecker_GetResult_Request = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_GetResult_Request",
  _ArithmeticChecker_GetResult_Request__cdr_serialize,
  _ArithmeticChecker_GetResult_Request__cdr_deserialize,
  _ArithmeticChecker_GetResult_Request__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request,
  _ArithmeticChecker_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_GetResult_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticChecker_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Request)() {
  return &_ArithmeticChecker_GetResult_Request__type_support;
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
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

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

// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Result)();


typedef msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response _ArithmeticChecker_GetResult_Response__ros_msg_type;

static bool _ArithmeticChecker_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticChecker_GetResult_Response__ros_msg_type * ros_message = (_ArithmeticChecker_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message->status);
  // Member: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Result
      )()->data))->cdr_serialize(&ros_message->result, cdr);

  return rv;
}

static bool _ArithmeticChecker_GetResult_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticChecker_GetResult_Response__ros_msg_type * ros_message = (_ArithmeticChecker_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->status);
  // Field name: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Result
      )()->data))->cdr_deserialize(cdr, &ros_message->result);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticChecker_GetResult_Response__ros_msg_type * ros_message = (const _ArithmeticChecker_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status
  {
    const size_t item_size = sizeof(ros_message->status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: result
  current_alignment +=
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result(&ros_message->result, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticChecker_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: result
  current_alignment +=
    max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Result(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _ArithmeticChecker_GetResult_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticChecker_GetResult_Response = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_GetResult_Response",
  _ArithmeticChecker_GetResult_Response__cdr_serialize,
  _ArithmeticChecker_GetResult_Response__cdr_deserialize,
  _ArithmeticChecker_GetResult_Response__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response,
  _ArithmeticChecker_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_GetResult_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticChecker_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Response)() {
  return &_ArithmeticChecker_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_example/action/arithmetic_checker.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArithmeticChecker_GetResult__callbacks = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Response),
};

static rosidl_service_type_support_t ArithmeticChecker_GetResult__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &ArithmeticChecker_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult)() {
  return &ArithmeticChecker_GetResult__handle;
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
// #include "msg_srv_action_interface_example/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

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

// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Feedback)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)();


typedef msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage _ArithmeticChecker_FeedbackMessage__ros_msg_type;

static bool _ArithmeticChecker_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ArithmeticChecker_FeedbackMessage__ros_msg_type * ros_message = (_ArithmeticChecker_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);
  // Member: feedback
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Feedback
      )()->data))->cdr_serialize(&ros_message->feedback, cdr);

  return rv;
}

static bool _ArithmeticChecker_FeedbackMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ArithmeticChecker_FeedbackMessage__ros_msg_type * ros_message = (_ArithmeticChecker_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  // Field name: feedback
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_Feedback
      )()->data))->cdr_deserialize(cdr, &ros_message->feedback);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ArithmeticChecker_FeedbackMessage__ros_msg_type * ros_message = (const _ArithmeticChecker_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);
  // Member: feedback
  current_alignment +=
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback(&ros_message->feedback, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticChecker_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_msg_srv_action_interface_example
size_t max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    max_serialized_size_unique_identifier_msgs__msg__UUID(full_bounded, current_alignment);
  // Member: feedback
  current_alignment +=
    max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_Feedback(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _ArithmeticChecker_FeedbackMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ArithmeticChecker_FeedbackMessage = {
  "msg_srv_action_interface_example::action",
  "ArithmeticChecker_FeedbackMessage",
  _ArithmeticChecker_FeedbackMessage__cdr_serialize,
  _ArithmeticChecker_FeedbackMessage__cdr_deserialize,
  _ArithmeticChecker_FeedbackMessage__get_serialized_size,
  get_serialized_size_msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage,
  _ArithmeticChecker_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticChecker_FeedbackMessage__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ArithmeticChecker_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, msg_srv_action_interface_example, action, ArithmeticChecker_FeedbackMessage)() {
  return &_ArithmeticChecker_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
