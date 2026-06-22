// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from alphabot2_interfaces:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "alphabot2_interfaces/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace alphabot2_interfaces
{

namespace msg
{

namespace builder
{

class Init_Obstacle_right_obstacle
{
public:
  explicit Init_Obstacle_right_obstacle(::alphabot2_interfaces::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::alphabot2_interfaces::msg::Obstacle right_obstacle(::alphabot2_interfaces::msg::Obstacle::_right_obstacle_type arg)
  {
    msg_.right_obstacle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::alphabot2_interfaces::msg::Obstacle msg_;
};

class Init_Obstacle_left_obstacle
{
public:
  Init_Obstacle_left_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_right_obstacle left_obstacle(::alphabot2_interfaces::msg::Obstacle::_left_obstacle_type arg)
  {
    msg_.left_obstacle = std::move(arg);
    return Init_Obstacle_right_obstacle(msg_);
  }

private:
  ::alphabot2_interfaces::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::alphabot2_interfaces::msg::Obstacle>()
{
  return alphabot2_interfaces::msg::builder::Init_Obstacle_left_obstacle();
}

}  // namespace alphabot2_interfaces

#endif  // ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
