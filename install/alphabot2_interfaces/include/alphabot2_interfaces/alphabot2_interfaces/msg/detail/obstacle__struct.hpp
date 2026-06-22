// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from alphabot2_interfaces:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__STRUCT_HPP_
#define ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__alphabot2_interfaces__msg__Obstacle __attribute__((deprecated))
#else
# define DEPRECATED__alphabot2_interfaces__msg__Obstacle __declspec(deprecated)
#endif

namespace alphabot2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Obstacle_
{
  using Type = Obstacle_<ContainerAllocator>;

  explicit Obstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_obstacle = false;
      this->right_obstacle = false;
    }
  }

  explicit Obstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_obstacle = false;
      this->right_obstacle = false;
    }
  }

  // field types and members
  using _left_obstacle_type =
    bool;
  _left_obstacle_type left_obstacle;
  using _right_obstacle_type =
    bool;
  _right_obstacle_type right_obstacle;

  // setters for named parameter idiom
  Type & set__left_obstacle(
    const bool & _arg)
  {
    this->left_obstacle = _arg;
    return *this;
  }
  Type & set__right_obstacle(
    const bool & _arg)
  {
    this->right_obstacle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    alphabot2_interfaces::msg::Obstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const alphabot2_interfaces::msg::Obstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<alphabot2_interfaces::msg::Obstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<alphabot2_interfaces::msg::Obstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      alphabot2_interfaces::msg::Obstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<alphabot2_interfaces::msg::Obstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      alphabot2_interfaces::msg::Obstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<alphabot2_interfaces::msg::Obstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<alphabot2_interfaces::msg::Obstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<alphabot2_interfaces::msg::Obstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__alphabot2_interfaces__msg__Obstacle
    std::shared_ptr<alphabot2_interfaces::msg::Obstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__alphabot2_interfaces__msg__Obstacle
    std::shared_ptr<alphabot2_interfaces::msg::Obstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Obstacle_ & other) const
  {
    if (this->left_obstacle != other.left_obstacle) {
      return false;
    }
    if (this->right_obstacle != other.right_obstacle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Obstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Obstacle_

// alias to use template instance with default allocator
using Obstacle =
  alphabot2_interfaces::msg::Obstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace alphabot2_interfaces

#endif  // ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__STRUCT_HPP_
