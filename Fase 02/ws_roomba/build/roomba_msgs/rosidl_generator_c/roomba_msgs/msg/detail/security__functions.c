// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/security__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roomba_msgs__msg__Security__init(roomba_msgs__msg__Security * msg)
{
  if (!msg) {
    return false;
  }
  // bump_left
  // bump_right
  // wheel_drop_left
  // wheel_drop_right
  // wall
  // virtual_wall
  // cliff_left
  // cliff_right
  // cliff_front_left
  // cliff_front_right
  // cliff_left_signal
  // cliff_right_signal
  // cliff_front_left_signal
  // cliff_front_right_signal
  // wall_signal
  // light_bumper_left
  // light_bumper_right
  // light_bumper_center_left
  // light_bumper_center_right
  // light_bumper_front_left
  // light_bumper_front_right
  // light_bump_left_signal
  // light_bump_right_signal
  // light_bump_center_left_signal
  // light_bump_center_right_signal
  // light_bump_front_left_signal
  // light_bump_front_right_signal
  // dirt_detect
  return true;
}

void
roomba_msgs__msg__Security__fini(roomba_msgs__msg__Security * msg)
{
  if (!msg) {
    return;
  }
  // bump_left
  // bump_right
  // wheel_drop_left
  // wheel_drop_right
  // wall
  // virtual_wall
  // cliff_left
  // cliff_right
  // cliff_front_left
  // cliff_front_right
  // cliff_left_signal
  // cliff_right_signal
  // cliff_front_left_signal
  // cliff_front_right_signal
  // wall_signal
  // light_bumper_left
  // light_bumper_right
  // light_bumper_center_left
  // light_bumper_center_right
  // light_bumper_front_left
  // light_bumper_front_right
  // light_bump_left_signal
  // light_bump_right_signal
  // light_bump_center_left_signal
  // light_bump_center_right_signal
  // light_bump_front_left_signal
  // light_bump_front_right_signal
  // dirt_detect
}

bool
roomba_msgs__msg__Security__are_equal(const roomba_msgs__msg__Security * lhs, const roomba_msgs__msg__Security * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bump_left
  if (lhs->bump_left != rhs->bump_left) {
    return false;
  }
  // bump_right
  if (lhs->bump_right != rhs->bump_right) {
    return false;
  }
  // wheel_drop_left
  if (lhs->wheel_drop_left != rhs->wheel_drop_left) {
    return false;
  }
  // wheel_drop_right
  if (lhs->wheel_drop_right != rhs->wheel_drop_right) {
    return false;
  }
  // wall
  if (lhs->wall != rhs->wall) {
    return false;
  }
  // virtual_wall
  if (lhs->virtual_wall != rhs->virtual_wall) {
    return false;
  }
  // cliff_left
  if (lhs->cliff_left != rhs->cliff_left) {
    return false;
  }
  // cliff_right
  if (lhs->cliff_right != rhs->cliff_right) {
    return false;
  }
  // cliff_front_left
  if (lhs->cliff_front_left != rhs->cliff_front_left) {
    return false;
  }
  // cliff_front_right
  if (lhs->cliff_front_right != rhs->cliff_front_right) {
    return false;
  }
  // cliff_left_signal
  if (lhs->cliff_left_signal != rhs->cliff_left_signal) {
    return false;
  }
  // cliff_right_signal
  if (lhs->cliff_right_signal != rhs->cliff_right_signal) {
    return false;
  }
  // cliff_front_left_signal
  if (lhs->cliff_front_left_signal != rhs->cliff_front_left_signal) {
    return false;
  }
  // cliff_front_right_signal
  if (lhs->cliff_front_right_signal != rhs->cliff_front_right_signal) {
    return false;
  }
  // wall_signal
  if (lhs->wall_signal != rhs->wall_signal) {
    return false;
  }
  // light_bumper_left
  if (lhs->light_bumper_left != rhs->light_bumper_left) {
    return false;
  }
  // light_bumper_right
  if (lhs->light_bumper_right != rhs->light_bumper_right) {
    return false;
  }
  // light_bumper_center_left
  if (lhs->light_bumper_center_left != rhs->light_bumper_center_left) {
    return false;
  }
  // light_bumper_center_right
  if (lhs->light_bumper_center_right != rhs->light_bumper_center_right) {
    return false;
  }
  // light_bumper_front_left
  if (lhs->light_bumper_front_left != rhs->light_bumper_front_left) {
    return false;
  }
  // light_bumper_front_right
  if (lhs->light_bumper_front_right != rhs->light_bumper_front_right) {
    return false;
  }
  // light_bump_left_signal
  if (lhs->light_bump_left_signal != rhs->light_bump_left_signal) {
    return false;
  }
  // light_bump_right_signal
  if (lhs->light_bump_right_signal != rhs->light_bump_right_signal) {
    return false;
  }
  // light_bump_center_left_signal
  if (lhs->light_bump_center_left_signal != rhs->light_bump_center_left_signal) {
    return false;
  }
  // light_bump_center_right_signal
  if (lhs->light_bump_center_right_signal != rhs->light_bump_center_right_signal) {
    return false;
  }
  // light_bump_front_left_signal
  if (lhs->light_bump_front_left_signal != rhs->light_bump_front_left_signal) {
    return false;
  }
  // light_bump_front_right_signal
  if (lhs->light_bump_front_right_signal != rhs->light_bump_front_right_signal) {
    return false;
  }
  // dirt_detect
  if (lhs->dirt_detect != rhs->dirt_detect) {
    return false;
  }
  return true;
}

bool
roomba_msgs__msg__Security__copy(
  const roomba_msgs__msg__Security * input,
  roomba_msgs__msg__Security * output)
{
  if (!input || !output) {
    return false;
  }
  // bump_left
  output->bump_left = input->bump_left;
  // bump_right
  output->bump_right = input->bump_right;
  // wheel_drop_left
  output->wheel_drop_left = input->wheel_drop_left;
  // wheel_drop_right
  output->wheel_drop_right = input->wheel_drop_right;
  // wall
  output->wall = input->wall;
  // virtual_wall
  output->virtual_wall = input->virtual_wall;
  // cliff_left
  output->cliff_left = input->cliff_left;
  // cliff_right
  output->cliff_right = input->cliff_right;
  // cliff_front_left
  output->cliff_front_left = input->cliff_front_left;
  // cliff_front_right
  output->cliff_front_right = input->cliff_front_right;
  // cliff_left_signal
  output->cliff_left_signal = input->cliff_left_signal;
  // cliff_right_signal
  output->cliff_right_signal = input->cliff_right_signal;
  // cliff_front_left_signal
  output->cliff_front_left_signal = input->cliff_front_left_signal;
  // cliff_front_right_signal
  output->cliff_front_right_signal = input->cliff_front_right_signal;
  // wall_signal
  output->wall_signal = input->wall_signal;
  // light_bumper_left
  output->light_bumper_left = input->light_bumper_left;
  // light_bumper_right
  output->light_bumper_right = input->light_bumper_right;
  // light_bumper_center_left
  output->light_bumper_center_left = input->light_bumper_center_left;
  // light_bumper_center_right
  output->light_bumper_center_right = input->light_bumper_center_right;
  // light_bumper_front_left
  output->light_bumper_front_left = input->light_bumper_front_left;
  // light_bumper_front_right
  output->light_bumper_front_right = input->light_bumper_front_right;
  // light_bump_left_signal
  output->light_bump_left_signal = input->light_bump_left_signal;
  // light_bump_right_signal
  output->light_bump_right_signal = input->light_bump_right_signal;
  // light_bump_center_left_signal
  output->light_bump_center_left_signal = input->light_bump_center_left_signal;
  // light_bump_center_right_signal
  output->light_bump_center_right_signal = input->light_bump_center_right_signal;
  // light_bump_front_left_signal
  output->light_bump_front_left_signal = input->light_bump_front_left_signal;
  // light_bump_front_right_signal
  output->light_bump_front_right_signal = input->light_bump_front_right_signal;
  // dirt_detect
  output->dirt_detect = input->dirt_detect;
  return true;
}

roomba_msgs__msg__Security *
roomba_msgs__msg__Security__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Security * msg = (roomba_msgs__msg__Security *)allocator.allocate(sizeof(roomba_msgs__msg__Security), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomba_msgs__msg__Security));
  bool success = roomba_msgs__msg__Security__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomba_msgs__msg__Security__destroy(roomba_msgs__msg__Security * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomba_msgs__msg__Security__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomba_msgs__msg__Security__Sequence__init(roomba_msgs__msg__Security__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Security * data = NULL;

  if (size) {
    data = (roomba_msgs__msg__Security *)allocator.zero_allocate(size, sizeof(roomba_msgs__msg__Security), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomba_msgs__msg__Security__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomba_msgs__msg__Security__fini(&data[i - 1]);
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
roomba_msgs__msg__Security__Sequence__fini(roomba_msgs__msg__Security__Sequence * array)
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
      roomba_msgs__msg__Security__fini(&array->data[i]);
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

roomba_msgs__msg__Security__Sequence *
roomba_msgs__msg__Security__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Security__Sequence * array = (roomba_msgs__msg__Security__Sequence *)allocator.allocate(sizeof(roomba_msgs__msg__Security__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomba_msgs__msg__Security__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomba_msgs__msg__Security__Sequence__destroy(roomba_msgs__msg__Security__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomba_msgs__msg__Security__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomba_msgs__msg__Security__Sequence__are_equal(const roomba_msgs__msg__Security__Sequence * lhs, const roomba_msgs__msg__Security__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomba_msgs__msg__Security__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomba_msgs__msg__Security__Sequence__copy(
  const roomba_msgs__msg__Security__Sequence * input,
  roomba_msgs__msg__Security__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomba_msgs__msg__Security);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomba_msgs__msg__Security * data =
      (roomba_msgs__msg__Security *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomba_msgs__msg__Security__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomba_msgs__msg__Security__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomba_msgs__msg__Security__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
