// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roomba_msgs:msg/Power.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/power__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roomba_msgs__msg__Power__init(roomba_msgs__msg__Power * msg)
{
  if (!msg) {
    return false;
  }
  // voltage
  // current
  // temperature
  // charge
  // capacity
  // home_base
  // internal_charger
  // ir_char_omni
  // ir_char_left
  // ir_char_right
  // left_wheel_overcurrent
  // right_wheel_overcurrent
  // main_brush_overcurrent
  // side_brush_overcurrent
  // left_motor_current
  // right_motor_current
  // main_brush_motor_current
  // side_brush_motor_current
  return true;
}

void
roomba_msgs__msg__Power__fini(roomba_msgs__msg__Power * msg)
{
  if (!msg) {
    return;
  }
  // voltage
  // current
  // temperature
  // charge
  // capacity
  // home_base
  // internal_charger
  // ir_char_omni
  // ir_char_left
  // ir_char_right
  // left_wheel_overcurrent
  // right_wheel_overcurrent
  // main_brush_overcurrent
  // side_brush_overcurrent
  // left_motor_current
  // right_motor_current
  // main_brush_motor_current
  // side_brush_motor_current
}

bool
roomba_msgs__msg__Power__are_equal(const roomba_msgs__msg__Power * lhs, const roomba_msgs__msg__Power * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // charge
  if (lhs->charge != rhs->charge) {
    return false;
  }
  // capacity
  if (lhs->capacity != rhs->capacity) {
    return false;
  }
  // home_base
  if (lhs->home_base != rhs->home_base) {
    return false;
  }
  // internal_charger
  if (lhs->internal_charger != rhs->internal_charger) {
    return false;
  }
  // ir_char_omni
  if (lhs->ir_char_omni != rhs->ir_char_omni) {
    return false;
  }
  // ir_char_left
  if (lhs->ir_char_left != rhs->ir_char_left) {
    return false;
  }
  // ir_char_right
  if (lhs->ir_char_right != rhs->ir_char_right) {
    return false;
  }
  // left_wheel_overcurrent
  if (lhs->left_wheel_overcurrent != rhs->left_wheel_overcurrent) {
    return false;
  }
  // right_wheel_overcurrent
  if (lhs->right_wheel_overcurrent != rhs->right_wheel_overcurrent) {
    return false;
  }
  // main_brush_overcurrent
  if (lhs->main_brush_overcurrent != rhs->main_brush_overcurrent) {
    return false;
  }
  // side_brush_overcurrent
  if (lhs->side_brush_overcurrent != rhs->side_brush_overcurrent) {
    return false;
  }
  // left_motor_current
  if (lhs->left_motor_current != rhs->left_motor_current) {
    return false;
  }
  // right_motor_current
  if (lhs->right_motor_current != rhs->right_motor_current) {
    return false;
  }
  // main_brush_motor_current
  if (lhs->main_brush_motor_current != rhs->main_brush_motor_current) {
    return false;
  }
  // side_brush_motor_current
  if (lhs->side_brush_motor_current != rhs->side_brush_motor_current) {
    return false;
  }
  return true;
}

bool
roomba_msgs__msg__Power__copy(
  const roomba_msgs__msg__Power * input,
  roomba_msgs__msg__Power * output)
{
  if (!input || !output) {
    return false;
  }
  // voltage
  output->voltage = input->voltage;
  // current
  output->current = input->current;
  // temperature
  output->temperature = input->temperature;
  // charge
  output->charge = input->charge;
  // capacity
  output->capacity = input->capacity;
  // home_base
  output->home_base = input->home_base;
  // internal_charger
  output->internal_charger = input->internal_charger;
  // ir_char_omni
  output->ir_char_omni = input->ir_char_omni;
  // ir_char_left
  output->ir_char_left = input->ir_char_left;
  // ir_char_right
  output->ir_char_right = input->ir_char_right;
  // left_wheel_overcurrent
  output->left_wheel_overcurrent = input->left_wheel_overcurrent;
  // right_wheel_overcurrent
  output->right_wheel_overcurrent = input->right_wheel_overcurrent;
  // main_brush_overcurrent
  output->main_brush_overcurrent = input->main_brush_overcurrent;
  // side_brush_overcurrent
  output->side_brush_overcurrent = input->side_brush_overcurrent;
  // left_motor_current
  output->left_motor_current = input->left_motor_current;
  // right_motor_current
  output->right_motor_current = input->right_motor_current;
  // main_brush_motor_current
  output->main_brush_motor_current = input->main_brush_motor_current;
  // side_brush_motor_current
  output->side_brush_motor_current = input->side_brush_motor_current;
  return true;
}

roomba_msgs__msg__Power *
roomba_msgs__msg__Power__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Power * msg = (roomba_msgs__msg__Power *)allocator.allocate(sizeof(roomba_msgs__msg__Power), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomba_msgs__msg__Power));
  bool success = roomba_msgs__msg__Power__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomba_msgs__msg__Power__destroy(roomba_msgs__msg__Power * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomba_msgs__msg__Power__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomba_msgs__msg__Power__Sequence__init(roomba_msgs__msg__Power__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Power * data = NULL;

  if (size) {
    data = (roomba_msgs__msg__Power *)allocator.zero_allocate(size, sizeof(roomba_msgs__msg__Power), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomba_msgs__msg__Power__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomba_msgs__msg__Power__fini(&data[i - 1]);
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
roomba_msgs__msg__Power__Sequence__fini(roomba_msgs__msg__Power__Sequence * array)
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
      roomba_msgs__msg__Power__fini(&array->data[i]);
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

roomba_msgs__msg__Power__Sequence *
roomba_msgs__msg__Power__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Power__Sequence * array = (roomba_msgs__msg__Power__Sequence *)allocator.allocate(sizeof(roomba_msgs__msg__Power__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomba_msgs__msg__Power__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomba_msgs__msg__Power__Sequence__destroy(roomba_msgs__msg__Power__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomba_msgs__msg__Power__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomba_msgs__msg__Power__Sequence__are_equal(const roomba_msgs__msg__Power__Sequence * lhs, const roomba_msgs__msg__Power__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomba_msgs__msg__Power__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomba_msgs__msg__Power__Sequence__copy(
  const roomba_msgs__msg__Power__Sequence * input,
  roomba_msgs__msg__Power__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomba_msgs__msg__Power);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomba_msgs__msg__Power * data =
      (roomba_msgs__msg__Power *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomba_msgs__msg__Power__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomba_msgs__msg__Power__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomba_msgs__msg__Power__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
