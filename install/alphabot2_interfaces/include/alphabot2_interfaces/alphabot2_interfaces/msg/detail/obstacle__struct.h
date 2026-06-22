// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from alphabot2_interfaces:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Obstacle in the package alphabot2_interfaces.
typedef struct alphabot2_interfaces__msg__Obstacle
{
  bool left_obstacle;
  bool right_obstacle;
} alphabot2_interfaces__msg__Obstacle;

// Struct for a sequence of alphabot2_interfaces__msg__Obstacle.
typedef struct alphabot2_interfaces__msg__Obstacle__Sequence
{
  alphabot2_interfaces__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} alphabot2_interfaces__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__STRUCT_H_
