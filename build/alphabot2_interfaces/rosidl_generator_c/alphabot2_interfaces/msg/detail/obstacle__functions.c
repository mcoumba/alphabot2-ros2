// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from alphabot2_interfaces:msg/Obstacle.idl
// generated code does not contain a copyright notice
#include "alphabot2_interfaces/msg/detail/obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
alphabot2_interfaces__msg__Obstacle__init(alphabot2_interfaces__msg__Obstacle * msg)
{
  if (!msg) {
    return false;
  }
  // left_obstacle
  // right_obstacle
  return true;
}

void
alphabot2_interfaces__msg__Obstacle__fini(alphabot2_interfaces__msg__Obstacle * msg)
{
  if (!msg) {
    return;
  }
  // left_obstacle
  // right_obstacle
}

bool
alphabot2_interfaces__msg__Obstacle__are_equal(const alphabot2_interfaces__msg__Obstacle * lhs, const alphabot2_interfaces__msg__Obstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_obstacle
  if (lhs->left_obstacle != rhs->left_obstacle) {
    return false;
  }
  // right_obstacle
  if (lhs->right_obstacle != rhs->right_obstacle) {
    return false;
  }
  return true;
}

bool
alphabot2_interfaces__msg__Obstacle__copy(
  const alphabot2_interfaces__msg__Obstacle * input,
  alphabot2_interfaces__msg__Obstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // left_obstacle
  output->left_obstacle = input->left_obstacle;
  // right_obstacle
  output->right_obstacle = input->right_obstacle;
  return true;
}

alphabot2_interfaces__msg__Obstacle *
alphabot2_interfaces__msg__Obstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  alphabot2_interfaces__msg__Obstacle * msg = (alphabot2_interfaces__msg__Obstacle *)allocator.allocate(sizeof(alphabot2_interfaces__msg__Obstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(alphabot2_interfaces__msg__Obstacle));
  bool success = alphabot2_interfaces__msg__Obstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
alphabot2_interfaces__msg__Obstacle__destroy(alphabot2_interfaces__msg__Obstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    alphabot2_interfaces__msg__Obstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
alphabot2_interfaces__msg__Obstacle__Sequence__init(alphabot2_interfaces__msg__Obstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  alphabot2_interfaces__msg__Obstacle * data = NULL;

  if (size) {
    data = (alphabot2_interfaces__msg__Obstacle *)allocator.zero_allocate(size, sizeof(alphabot2_interfaces__msg__Obstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = alphabot2_interfaces__msg__Obstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        alphabot2_interfaces__msg__Obstacle__fini(&data[i - 1]);
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
alphabot2_interfaces__msg__Obstacle__Sequence__fini(alphabot2_interfaces__msg__Obstacle__Sequence * array)
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
      alphabot2_interfaces__msg__Obstacle__fini(&array->data[i]);
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

alphabot2_interfaces__msg__Obstacle__Sequence *
alphabot2_interfaces__msg__Obstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  alphabot2_interfaces__msg__Obstacle__Sequence * array = (alphabot2_interfaces__msg__Obstacle__Sequence *)allocator.allocate(sizeof(alphabot2_interfaces__msg__Obstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = alphabot2_interfaces__msg__Obstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
alphabot2_interfaces__msg__Obstacle__Sequence__destroy(alphabot2_interfaces__msg__Obstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    alphabot2_interfaces__msg__Obstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
alphabot2_interfaces__msg__Obstacle__Sequence__are_equal(const alphabot2_interfaces__msg__Obstacle__Sequence * lhs, const alphabot2_interfaces__msg__Obstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!alphabot2_interfaces__msg__Obstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
alphabot2_interfaces__msg__Obstacle__Sequence__copy(
  const alphabot2_interfaces__msg__Obstacle__Sequence * input,
  alphabot2_interfaces__msg__Obstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(alphabot2_interfaces__msg__Obstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    alphabot2_interfaces__msg__Obstacle * data =
      (alphabot2_interfaces__msg__Obstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!alphabot2_interfaces__msg__Obstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          alphabot2_interfaces__msg__Obstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!alphabot2_interfaces__msg__Obstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
