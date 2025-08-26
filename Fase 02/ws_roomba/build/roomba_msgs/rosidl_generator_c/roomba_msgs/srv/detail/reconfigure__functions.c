// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roomba_msgs:srv/Reconfigure.idl
// generated code does not contain a copyright notice
#include "roomba_msgs/srv/detail/reconfigure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `parameter`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
roomba_msgs__srv__Reconfigure_Request__init(roomba_msgs__srv__Reconfigure_Request * msg)
{
  if (!msg) {
    return false;
  }
  // parameter
  if (!rosidl_runtime_c__String__init(&msg->parameter)) {
    roomba_msgs__srv__Reconfigure_Request__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    roomba_msgs__srv__Reconfigure_Request__fini(msg);
    return false;
  }
  return true;
}

void
roomba_msgs__srv__Reconfigure_Request__fini(roomba_msgs__srv__Reconfigure_Request * msg)
{
  if (!msg) {
    return;
  }
  // parameter
  rosidl_runtime_c__String__fini(&msg->parameter);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
roomba_msgs__srv__Reconfigure_Request__are_equal(const roomba_msgs__srv__Reconfigure_Request * lhs, const roomba_msgs__srv__Reconfigure_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parameter
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parameter), &(rhs->parameter)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
roomba_msgs__srv__Reconfigure_Request__copy(
  const roomba_msgs__srv__Reconfigure_Request * input,
  roomba_msgs__srv__Reconfigure_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // parameter
  if (!rosidl_runtime_c__String__copy(
      &(input->parameter), &(output->parameter)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

roomba_msgs__srv__Reconfigure_Request *
roomba_msgs__srv__Reconfigure_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Request * msg = (roomba_msgs__srv__Reconfigure_Request *)allocator.allocate(sizeof(roomba_msgs__srv__Reconfigure_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomba_msgs__srv__Reconfigure_Request));
  bool success = roomba_msgs__srv__Reconfigure_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomba_msgs__srv__Reconfigure_Request__destroy(roomba_msgs__srv__Reconfigure_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomba_msgs__srv__Reconfigure_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomba_msgs__srv__Reconfigure_Request__Sequence__init(roomba_msgs__srv__Reconfigure_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Request * data = NULL;

  if (size) {
    data = (roomba_msgs__srv__Reconfigure_Request *)allocator.zero_allocate(size, sizeof(roomba_msgs__srv__Reconfigure_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomba_msgs__srv__Reconfigure_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomba_msgs__srv__Reconfigure_Request__fini(&data[i - 1]);
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
roomba_msgs__srv__Reconfigure_Request__Sequence__fini(roomba_msgs__srv__Reconfigure_Request__Sequence * array)
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
      roomba_msgs__srv__Reconfigure_Request__fini(&array->data[i]);
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

roomba_msgs__srv__Reconfigure_Request__Sequence *
roomba_msgs__srv__Reconfigure_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Request__Sequence * array = (roomba_msgs__srv__Reconfigure_Request__Sequence *)allocator.allocate(sizeof(roomba_msgs__srv__Reconfigure_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomba_msgs__srv__Reconfigure_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomba_msgs__srv__Reconfigure_Request__Sequence__destroy(roomba_msgs__srv__Reconfigure_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomba_msgs__srv__Reconfigure_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomba_msgs__srv__Reconfigure_Request__Sequence__are_equal(const roomba_msgs__srv__Reconfigure_Request__Sequence * lhs, const roomba_msgs__srv__Reconfigure_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomba_msgs__srv__Reconfigure_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomba_msgs__srv__Reconfigure_Request__Sequence__copy(
  const roomba_msgs__srv__Reconfigure_Request__Sequence * input,
  roomba_msgs__srv__Reconfigure_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomba_msgs__srv__Reconfigure_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomba_msgs__srv__Reconfigure_Request * data =
      (roomba_msgs__srv__Reconfigure_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomba_msgs__srv__Reconfigure_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomba_msgs__srv__Reconfigure_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomba_msgs__srv__Reconfigure_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
roomba_msgs__srv__Reconfigure_Response__init(roomba_msgs__srv__Reconfigure_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    roomba_msgs__srv__Reconfigure_Response__fini(msg);
    return false;
  }
  return true;
}

void
roomba_msgs__srv__Reconfigure_Response__fini(roomba_msgs__srv__Reconfigure_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
roomba_msgs__srv__Reconfigure_Response__are_equal(const roomba_msgs__srv__Reconfigure_Response * lhs, const roomba_msgs__srv__Reconfigure_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
roomba_msgs__srv__Reconfigure_Response__copy(
  const roomba_msgs__srv__Reconfigure_Response * input,
  roomba_msgs__srv__Reconfigure_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

roomba_msgs__srv__Reconfigure_Response *
roomba_msgs__srv__Reconfigure_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Response * msg = (roomba_msgs__srv__Reconfigure_Response *)allocator.allocate(sizeof(roomba_msgs__srv__Reconfigure_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomba_msgs__srv__Reconfigure_Response));
  bool success = roomba_msgs__srv__Reconfigure_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomba_msgs__srv__Reconfigure_Response__destroy(roomba_msgs__srv__Reconfigure_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomba_msgs__srv__Reconfigure_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomba_msgs__srv__Reconfigure_Response__Sequence__init(roomba_msgs__srv__Reconfigure_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Response * data = NULL;

  if (size) {
    data = (roomba_msgs__srv__Reconfigure_Response *)allocator.zero_allocate(size, sizeof(roomba_msgs__srv__Reconfigure_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomba_msgs__srv__Reconfigure_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomba_msgs__srv__Reconfigure_Response__fini(&data[i - 1]);
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
roomba_msgs__srv__Reconfigure_Response__Sequence__fini(roomba_msgs__srv__Reconfigure_Response__Sequence * array)
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
      roomba_msgs__srv__Reconfigure_Response__fini(&array->data[i]);
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

roomba_msgs__srv__Reconfigure_Response__Sequence *
roomba_msgs__srv__Reconfigure_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Response__Sequence * array = (roomba_msgs__srv__Reconfigure_Response__Sequence *)allocator.allocate(sizeof(roomba_msgs__srv__Reconfigure_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomba_msgs__srv__Reconfigure_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomba_msgs__srv__Reconfigure_Response__Sequence__destroy(roomba_msgs__srv__Reconfigure_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomba_msgs__srv__Reconfigure_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomba_msgs__srv__Reconfigure_Response__Sequence__are_equal(const roomba_msgs__srv__Reconfigure_Response__Sequence * lhs, const roomba_msgs__srv__Reconfigure_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomba_msgs__srv__Reconfigure_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomba_msgs__srv__Reconfigure_Response__Sequence__copy(
  const roomba_msgs__srv__Reconfigure_Response__Sequence * input,
  roomba_msgs__srv__Reconfigure_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomba_msgs__srv__Reconfigure_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomba_msgs__srv__Reconfigure_Response * data =
      (roomba_msgs__srv__Reconfigure_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomba_msgs__srv__Reconfigure_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomba_msgs__srv__Reconfigure_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomba_msgs__srv__Reconfigure_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "roomba_msgs/srv/detail/reconfigure__functions.h"

bool
roomba_msgs__srv__Reconfigure_Event__init(roomba_msgs__srv__Reconfigure_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    roomba_msgs__srv__Reconfigure_Event__fini(msg);
    return false;
  }
  // request
  if (!roomba_msgs__srv__Reconfigure_Request__Sequence__init(&msg->request, 0)) {
    roomba_msgs__srv__Reconfigure_Event__fini(msg);
    return false;
  }
  // response
  if (!roomba_msgs__srv__Reconfigure_Response__Sequence__init(&msg->response, 0)) {
    roomba_msgs__srv__Reconfigure_Event__fini(msg);
    return false;
  }
  return true;
}

void
roomba_msgs__srv__Reconfigure_Event__fini(roomba_msgs__srv__Reconfigure_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  roomba_msgs__srv__Reconfigure_Request__Sequence__fini(&msg->request);
  // response
  roomba_msgs__srv__Reconfigure_Response__Sequence__fini(&msg->response);
}

bool
roomba_msgs__srv__Reconfigure_Event__are_equal(const roomba_msgs__srv__Reconfigure_Event * lhs, const roomba_msgs__srv__Reconfigure_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!roomba_msgs__srv__Reconfigure_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!roomba_msgs__srv__Reconfigure_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
roomba_msgs__srv__Reconfigure_Event__copy(
  const roomba_msgs__srv__Reconfigure_Event * input,
  roomba_msgs__srv__Reconfigure_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!roomba_msgs__srv__Reconfigure_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!roomba_msgs__srv__Reconfigure_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

roomba_msgs__srv__Reconfigure_Event *
roomba_msgs__srv__Reconfigure_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Event * msg = (roomba_msgs__srv__Reconfigure_Event *)allocator.allocate(sizeof(roomba_msgs__srv__Reconfigure_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomba_msgs__srv__Reconfigure_Event));
  bool success = roomba_msgs__srv__Reconfigure_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomba_msgs__srv__Reconfigure_Event__destroy(roomba_msgs__srv__Reconfigure_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomba_msgs__srv__Reconfigure_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomba_msgs__srv__Reconfigure_Event__Sequence__init(roomba_msgs__srv__Reconfigure_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Event * data = NULL;

  if (size) {
    data = (roomba_msgs__srv__Reconfigure_Event *)allocator.zero_allocate(size, sizeof(roomba_msgs__srv__Reconfigure_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomba_msgs__srv__Reconfigure_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomba_msgs__srv__Reconfigure_Event__fini(&data[i - 1]);
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
roomba_msgs__srv__Reconfigure_Event__Sequence__fini(roomba_msgs__srv__Reconfigure_Event__Sequence * array)
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
      roomba_msgs__srv__Reconfigure_Event__fini(&array->data[i]);
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

roomba_msgs__srv__Reconfigure_Event__Sequence *
roomba_msgs__srv__Reconfigure_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomba_msgs__srv__Reconfigure_Event__Sequence * array = (roomba_msgs__srv__Reconfigure_Event__Sequence *)allocator.allocate(sizeof(roomba_msgs__srv__Reconfigure_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomba_msgs__srv__Reconfigure_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomba_msgs__srv__Reconfigure_Event__Sequence__destroy(roomba_msgs__srv__Reconfigure_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomba_msgs__srv__Reconfigure_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomba_msgs__srv__Reconfigure_Event__Sequence__are_equal(const roomba_msgs__srv__Reconfigure_Event__Sequence * lhs, const roomba_msgs__srv__Reconfigure_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomba_msgs__srv__Reconfigure_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomba_msgs__srv__Reconfigure_Event__Sequence__copy(
  const roomba_msgs__srv__Reconfigure_Event__Sequence * input,
  roomba_msgs__srv__Reconfigure_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomba_msgs__srv__Reconfigure_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomba_msgs__srv__Reconfigure_Event * data =
      (roomba_msgs__srv__Reconfigure_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomba_msgs__srv__Reconfigure_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomba_msgs__srv__Reconfigure_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomba_msgs__srv__Reconfigure_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
