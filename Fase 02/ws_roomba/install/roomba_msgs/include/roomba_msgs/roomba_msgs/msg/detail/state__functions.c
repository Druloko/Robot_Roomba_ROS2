// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roomba_msgs:msg/State.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `oi_mode`
#include "rosidl_runtime_c/string_functions.h"

bool
roomba_msgs__msg__State__init(roomba_msgs__msg__State * msg)
{
  if (!msg) {
    return false;
  }
  // oi_mode
  if (!rosidl_runtime_c__String__init(&msg->oi_mode)) {
    roomba_msgs__msg__State__fini(msg);
    return false;
  }
  // is_charging
  // battery_charge
  return true;
}

void
roomba_msgs__msg__State__fini(roomba_msgs__msg__State * msg)
{
  if (!msg) {
    return;
  }
  // oi_mode
  rosidl_runtime_c__String__fini(&msg->oi_mode);
  // is_charging
  // battery_charge
}

bool
roomba_msgs__msg__State__are_equal(const roomba_msgs__msg__State * lhs, const roomba_msgs__msg__State * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // oi_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->oi_mode), &(rhs->oi_mode)))
  {
    return false;
  }
  // is_charging
  if (lhs->is_charging != rhs->is_charging) {
    return false;
  }
  // battery_charge
  if (lhs->battery_charge != rhs->battery_charge) {
    return false;
  }
  return true;
}

bool
roomba_msgs__msg__State__copy(
  const roomba_msgs__msg__State * input,
  roomba_msgs__msg__State * output)
{
  if (!input || !output) {
    return false;
  }
  // oi_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->oi_mode), &(output->oi_mode)))
  {
    return false;
  }
  // is_charging
  output->is_charging = input->is_charging;
  // battery_charge
  output->battery_charge = input->battery_charge;
  return true;
}

roomba_msgs__msg__State *
roomba_msgs__msg__State__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__State * msg = (roomba_msgs__msg__State *)allocator.allocate(sizeof(roomba_msgs__msg__State), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomba_msgs__msg__State));
  bool success = roomba_msgs__msg__State__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomba_msgs__msg__State__destroy(roomba_msgs__msg__State * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomba_msgs__msg__State__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomba_msgs__msg__State__Sequence__init(roomba_msgs__msg__State__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__State * data = NULL;

  if (size) {
    data = (roomba_msgs__msg__State *)allocator.zero_allocate(size, sizeof(roomba_msgs__msg__State), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomba_msgs__msg__State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomba_msgs__msg__State__fini(&data[i - 1]);
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
roomba_msgs__msg__State__Sequence__fini(roomba_msgs__msg__State__Sequence * array)
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
      roomba_msgs__msg__State__fini(&array->data[i]);
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

roomba_msgs__msg__State__Sequence *
roomba_msgs__msg__State__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__State__Sequence * array = (roomba_msgs__msg__State__Sequence *)allocator.allocate(sizeof(roomba_msgs__msg__State__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomba_msgs__msg__State__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomba_msgs__msg__State__Sequence__destroy(roomba_msgs__msg__State__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomba_msgs__msg__State__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomba_msgs__msg__State__Sequence__are_equal(const roomba_msgs__msg__State__Sequence * lhs, const roomba_msgs__msg__State__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomba_msgs__msg__State__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomba_msgs__msg__State__Sequence__copy(
  const roomba_msgs__msg__State__Sequence * input,
  roomba_msgs__msg__State__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomba_msgs__msg__State);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomba_msgs__msg__State * data =
      (roomba_msgs__msg__State *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomba_msgs__msg__State__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomba_msgs__msg__State__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomba_msgs__msg__State__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
