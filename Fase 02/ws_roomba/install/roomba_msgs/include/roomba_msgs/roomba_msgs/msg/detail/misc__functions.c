// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/msg/detail/misc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roomba_msgs__msg__Misc__init(roomba_msgs__msg__Misc * msg)
{
  if (!msg) {
    return false;
  }
  // is_song_playing
  // song_number
  // button_clean
  // button_clock
  // button_day
  // button_dock
  // button_hour
  // button_minute
  // button_schedule
  // button_spot
  return true;
}

void
roomba_msgs__msg__Misc__fini(roomba_msgs__msg__Misc * msg)
{
  if (!msg) {
    return;
  }
  // is_song_playing
  // song_number
  // button_clean
  // button_clock
  // button_day
  // button_dock
  // button_hour
  // button_minute
  // button_schedule
  // button_spot
}

bool
roomba_msgs__msg__Misc__are_equal(const roomba_msgs__msg__Misc * lhs, const roomba_msgs__msg__Misc * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_song_playing
  if (lhs->is_song_playing != rhs->is_song_playing) {
    return false;
  }
  // song_number
  if (lhs->song_number != rhs->song_number) {
    return false;
  }
  // button_clean
  if (lhs->button_clean != rhs->button_clean) {
    return false;
  }
  // button_clock
  if (lhs->button_clock != rhs->button_clock) {
    return false;
  }
  // button_day
  if (lhs->button_day != rhs->button_day) {
    return false;
  }
  // button_dock
  if (lhs->button_dock != rhs->button_dock) {
    return false;
  }
  // button_hour
  if (lhs->button_hour != rhs->button_hour) {
    return false;
  }
  // button_minute
  if (lhs->button_minute != rhs->button_minute) {
    return false;
  }
  // button_schedule
  if (lhs->button_schedule != rhs->button_schedule) {
    return false;
  }
  // button_spot
  if (lhs->button_spot != rhs->button_spot) {
    return false;
  }
  return true;
}

bool
roomba_msgs__msg__Misc__copy(
  const roomba_msgs__msg__Misc * input,
  roomba_msgs__msg__Misc * output)
{
  if (!input || !output) {
    return false;
  }
  // is_song_playing
  output->is_song_playing = input->is_song_playing;
  // song_number
  output->song_number = input->song_number;
  // button_clean
  output->button_clean = input->button_clean;
  // button_clock
  output->button_clock = input->button_clock;
  // button_day
  output->button_day = input->button_day;
  // button_dock
  output->button_dock = input->button_dock;
  // button_hour
  output->button_hour = input->button_hour;
  // button_minute
  output->button_minute = input->button_minute;
  // button_schedule
  output->button_schedule = input->button_schedule;
  // button_spot
  output->button_spot = input->button_spot;
  return true;
}

roomba_msgs__msg__Misc *
roomba_msgs__msg__Misc__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Misc * msg = (roomba_msgs__msg__Misc *)allocator.allocate(sizeof(roomba_msgs__msg__Misc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomba_msgs__msg__Misc));
  bool success = roomba_msgs__msg__Misc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomba_msgs__msg__Misc__destroy(roomba_msgs__msg__Misc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomba_msgs__msg__Misc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomba_msgs__msg__Misc__Sequence__init(roomba_msgs__msg__Misc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Misc * data = NULL;

  if (size) {
    data = (roomba_msgs__msg__Misc *)allocator.zero_allocate(size, sizeof(roomba_msgs__msg__Misc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomba_msgs__msg__Misc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomba_msgs__msg__Misc__fini(&data[i - 1]);
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
roomba_msgs__msg__Misc__Sequence__fini(roomba_msgs__msg__Misc__Sequence * array)
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
      roomba_msgs__msg__Misc__fini(&array->data[i]);
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

roomba_msgs__msg__Misc__Sequence *
roomba_msgs__msg__Misc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__msg__Misc__Sequence * array = (roomba_msgs__msg__Misc__Sequence *)allocator.allocate(sizeof(roomba_msgs__msg__Misc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomba_msgs__msg__Misc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomba_msgs__msg__Misc__Sequence__destroy(roomba_msgs__msg__Misc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomba_msgs__msg__Misc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomba_msgs__msg__Misc__Sequence__are_equal(const roomba_msgs__msg__Misc__Sequence * lhs, const roomba_msgs__msg__Misc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomba_msgs__msg__Misc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomba_msgs__msg__Misc__Sequence__copy(
  const roomba_msgs__msg__Misc__Sequence * input,
  roomba_msgs__msg__Misc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomba_msgs__msg__Misc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomba_msgs__msg__Misc * data =
      (roomba_msgs__msg__Misc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomba_msgs__msg__Misc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomba_msgs__msg__Misc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomba_msgs__msg__Misc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
