// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from alphabot2_interfaces:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "alphabot2_interfaces/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace alphabot2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_obstacle
  {
    out << "left_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.left_obstacle, out);
    out << ", ";
  }

  // member: right_obstacle
  {
    out << "right_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.right_obstacle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.left_obstacle, out);
    out << "\n";
  }

  // member: right_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.right_obstacle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace alphabot2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use alphabot2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const alphabot2_interfaces::msg::Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  alphabot2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use alphabot2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const alphabot2_interfaces::msg::Obstacle & msg)
{
  return alphabot2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<alphabot2_interfaces::msg::Obstacle>()
{
  return "alphabot2_interfaces::msg::Obstacle";
}

template<>
inline const char * name<alphabot2_interfaces::msg::Obstacle>()
{
  return "alphabot2_interfaces/msg/Obstacle";
}

template<>
struct has_fixed_size<alphabot2_interfaces::msg::Obstacle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<alphabot2_interfaces::msg::Obstacle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<alphabot2_interfaces::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ALPHABOT2_INTERFACES__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
