// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roomba_msgs:msg/Movement.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/movement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roomba_msgs__msg__Movement__init(roomba_msgs__msg__Movement * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  // angle
  // left_encoder_counts
  // right_encoder_counts
  // requested_left_velocity
  // requested_right_velocity
  // requested_radius
  // requested_velocity
  return true;
}

void
roomba_msgs__msg__Movement__fini(roomba_msgs__msg__Movement * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // angle
  // left_encoder_counts
  // right_encoder_counts
  // requested_left_velocity
  // requested_right_velocity
  // requested_radius
  // requested_velocity
}

bool
roomba_msgs__msg__Movement__are_equal(const roomba_msgs__msg__Movement * lhs, const roomba_msgs__msg__Movement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // left_encoder_counts
  if (lhs->left_encoder_counts != rhs->left_encoder_counts) {
    return false;
  }
  // right_encoder_counts
  if (lhs->right_encoder_counts != rhs->right_encoder_counts) {
    return false;
  }
  // requested_left_velocity
  if (lhs->requested_left_velocity != rhs->requested_left_velocity) {
    return false;
  }
  // requested_right_velocity
  if (lhs->requested_right_velocity != rhs->requested_right_velocity) {
    return false;
  }
  // requested_radius
  if (lhs->requested_radius != rhs->requested_radius) {
    return false;
  }
  // requested_velocity
  if (lhs->requested_velocity != rhs->requested_velocity) {
    return false;
  }
  return true;
}

bool
roomba_msgs__msg__Movement__copy(
  const roomba_msgs__msg__Movement * input,
  roomba_msgs__msg__Movement * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  // angle
  output->angle = input->angle;
  // left_encoder_counts
  output->left_encoder_counts = input->left_encoder_counts;
  // right_encoder_counts
  output->right_encoder_counts = input->right_encoder_counts;
  // requested_left_velocity
  output->requested_left_velocity = input->requested_left_velocity;
  // requested_right_velocity
  output->requested_right_velocity = input->requested_right_velocity;
  // requested_radius
  output->requested_radius = input->requested_radius;
  // requested_velocity
  output->requested_velocity = input->requested_velocity;
  return true;
}

roomba_msgs__msg__Movement *
roomba_msgs__msg__Movement__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Movement * msg = (roomba_msgs__msg__Movement *)allocator.allocate(sizeof(roomba_msgs__msg__Movement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomba_msgs__msg__Movement));
  bool success = roomba_msgs__msg__Movement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomba_msgs__msg__Movement__destroy(roomba_msgs__msg__Movement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomba_msgs__msg__Movement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomba_msgs__msg__Movement__Sequence__init(roomba_msgs__msg__Movement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Movement * data = NULL;

  if (size) {
    data = (roomba_msgs__msg__Movement *)allocator.zero_allocate(size, sizeof(roomba_msgs__msg__Movement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomba_msgs__msg__Movement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomba_msgs__msg__Movement__fini(&data[i - 1]);
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
roomba_msgs__msg__Movement__Sequence__fini(roomba_msgs__msg__Movement__Sequence * array)
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
      roomba_msgs__msg__Movement__fini(&array->data[i]);
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

roomba_msgs__msg__Movement__Sequence *
roomba_msgs__msg__Movement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Movement__Sequence * array = (roomba_msgs__msg__Movement__Sequence *)allocator.allocate(sizeof(roomba_msgs__msg__Movement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomba_msgs__msg__Movement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomba_msgs__msg__Movement__Sequence__destroy(roomba_msgs__msg__Movement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomba_msgs__msg__Movement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomba_msgs__msg__Movement__Sequence__are_equal(const roomba_msgs__msg__Movement__Sequence * lhs, const roomba_msgs__msg__Movement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomba_msgs__msg__Movement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomba_msgs__msg__Movement__Sequence__copy(
  const roomba_msgs__msg__Movement__Sequence * input,
  roomba_msgs__msg__Movement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomba_msgs__msg__Movement);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomba_msgs__msg__Movement * data =
      (roomba_msgs__msg__Movement *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomba_msgs__msg__Movement__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomba_msgs__msg__Movement__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomba_msgs__msg__Movement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
