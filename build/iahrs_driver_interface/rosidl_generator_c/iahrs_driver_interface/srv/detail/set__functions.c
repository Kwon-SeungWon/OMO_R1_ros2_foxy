// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iahrs_driver_interface:srv/Set.idl
// generated code does not contain a copyright notice
#include "iahrs_driver_interface/srv/detail/set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
iahrs_driver_interface__srv__Set_Request__init(iahrs_driver_interface__srv__Set_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
iahrs_driver_interface__srv__Set_Request__fini(iahrs_driver_interface__srv__Set_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
iahrs_driver_interface__srv__Set_Request__are_equal(const iahrs_driver_interface__srv__Set_Request * lhs, const iahrs_driver_interface__srv__Set_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
iahrs_driver_interface__srv__Set_Request__copy(
  const iahrs_driver_interface__srv__Set_Request * input,
  iahrs_driver_interface__srv__Set_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

iahrs_driver_interface__srv__Set_Request *
iahrs_driver_interface__srv__Set_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iahrs_driver_interface__srv__Set_Request * msg = (iahrs_driver_interface__srv__Set_Request *)allocator.allocate(sizeof(iahrs_driver_interface__srv__Set_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iahrs_driver_interface__srv__Set_Request));
  bool success = iahrs_driver_interface__srv__Set_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iahrs_driver_interface__srv__Set_Request__destroy(iahrs_driver_interface__srv__Set_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iahrs_driver_interface__srv__Set_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iahrs_driver_interface__srv__Set_Request__Sequence__init(iahrs_driver_interface__srv__Set_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iahrs_driver_interface__srv__Set_Request * data = NULL;

  if (size) {
    data = (iahrs_driver_interface__srv__Set_Request *)allocator.zero_allocate(size, sizeof(iahrs_driver_interface__srv__Set_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iahrs_driver_interface__srv__Set_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iahrs_driver_interface__srv__Set_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
iahrs_driver_interface__srv__Set_Request__Sequence__fini(iahrs_driver_interface__srv__Set_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      iahrs_driver_interface__srv__Set_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

iahrs_driver_interface__srv__Set_Request__Sequence *
iahrs_driver_interface__srv__Set_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iahrs_driver_interface__srv__Set_Request__Sequence * array = (iahrs_driver_interface__srv__Set_Request__Sequence *)allocator.allocate(sizeof(iahrs_driver_interface__srv__Set_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iahrs_driver_interface__srv__Set_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iahrs_driver_interface__srv__Set_Request__Sequence__destroy(iahrs_driver_interface__srv__Set_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iahrs_driver_interface__srv__Set_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iahrs_driver_interface__srv__Set_Request__Sequence__are_equal(const iahrs_driver_interface__srv__Set_Request__Sequence * lhs, const iahrs_driver_interface__srv__Set_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iahrs_driver_interface__srv__Set_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iahrs_driver_interface__srv__Set_Request__Sequence__copy(
  const iahrs_driver_interface__srv__Set_Request__Sequence * input,
  iahrs_driver_interface__srv__Set_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iahrs_driver_interface__srv__Set_Request);
    iahrs_driver_interface__srv__Set_Request * data =
      (iahrs_driver_interface__srv__Set_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iahrs_driver_interface__srv__Set_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          iahrs_driver_interface__srv__Set_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iahrs_driver_interface__srv__Set_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
iahrs_driver_interface__srv__Set_Response__init(iahrs_driver_interface__srv__Set_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
iahrs_driver_interface__srv__Set_Response__fini(iahrs_driver_interface__srv__Set_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
iahrs_driver_interface__srv__Set_Response__are_equal(const iahrs_driver_interface__srv__Set_Response * lhs, const iahrs_driver_interface__srv__Set_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
iahrs_driver_interface__srv__Set_Response__copy(
  const iahrs_driver_interface__srv__Set_Response * input,
  iahrs_driver_interface__srv__Set_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

iahrs_driver_interface__srv__Set_Response *
iahrs_driver_interface__srv__Set_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iahrs_driver_interface__srv__Set_Response * msg = (iahrs_driver_interface__srv__Set_Response *)allocator.allocate(sizeof(iahrs_driver_interface__srv__Set_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iahrs_driver_interface__srv__Set_Response));
  bool success = iahrs_driver_interface__srv__Set_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iahrs_driver_interface__srv__Set_Response__destroy(iahrs_driver_interface__srv__Set_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iahrs_driver_interface__srv__Set_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iahrs_driver_interface__srv__Set_Response__Sequence__init(iahrs_driver_interface__srv__Set_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iahrs_driver_interface__srv__Set_Response * data = NULL;

  if (size) {
    data = (iahrs_driver_interface__srv__Set_Response *)allocator.zero_allocate(size, sizeof(iahrs_driver_interface__srv__Set_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iahrs_driver_interface__srv__Set_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iahrs_driver_interface__srv__Set_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
iahrs_driver_interface__srv__Set_Response__Sequence__fini(iahrs_driver_interface__srv__Set_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      iahrs_driver_interface__srv__Set_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

iahrs_driver_interface__srv__Set_Response__Sequence *
iahrs_driver_interface__srv__Set_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iahrs_driver_interface__srv__Set_Response__Sequence * array = (iahrs_driver_interface__srv__Set_Response__Sequence *)allocator.allocate(sizeof(iahrs_driver_interface__srv__Set_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iahrs_driver_interface__srv__Set_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iahrs_driver_interface__srv__Set_Response__Sequence__destroy(iahrs_driver_interface__srv__Set_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iahrs_driver_interface__srv__Set_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iahrs_driver_interface__srv__Set_Response__Sequence__are_equal(const iahrs_driver_interface__srv__Set_Response__Sequence * lhs, const iahrs_driver_interface__srv__Set_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iahrs_driver_interface__srv__Set_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iahrs_driver_interface__srv__Set_Response__Sequence__copy(
  const iahrs_driver_interface__srv__Set_Response__Sequence * input,
  iahrs_driver_interface__srv__Set_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iahrs_driver_interface__srv__Set_Response);
    iahrs_driver_interface__srv__Set_Response * data =
      (iahrs_driver_interface__srv__Set_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iahrs_driver_interface__srv__Set_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          iahrs_driver_interface__srv__Set_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iahrs_driver_interface__srv__Set_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
