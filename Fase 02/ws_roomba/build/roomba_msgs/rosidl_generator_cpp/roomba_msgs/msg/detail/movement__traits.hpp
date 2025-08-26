// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roomba_msgs:msg/Movement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/movement.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__TRAITS_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roomba_msgs/msg/detail/movement__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roomba_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Movement & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: left_encoder_counts
  {
    out << "left_encoder_counts: ";
    rosidl_generator_traits::value_to_yaml(msg.left_encoder_counts, out);
    out << ", ";
  }

  // member: right_encoder_counts
  {
    out << "right_encoder_counts: ";
    rosidl_generator_traits::value_to_yaml(msg.right_encoder_counts, out);
    out << ", ";
  }

  // member: requested_left_velocity
  {
    out << "requested_left_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_left_velocity, out);
    out << ", ";
  }

  // member: requested_right_velocity
  {
    out << "requested_right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_right_velocity, out);
    out << ", ";
  }

  // member: requested_radius
  {
    out << "requested_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_radius, out);
    out << ", ";
  }

  // member: requested_velocity
  {
    out << "requested_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movement & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: left_encoder_counts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_encoder_counts: ";
    rosidl_generator_traits::value_to_yaml(msg.left_encoder_counts, out);
    out << "\n";
  }

  // member: right_encoder_counts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_encoder_counts: ";
    rosidl_generator_traits::value_to_yaml(msg.right_encoder_counts, out);
    out << "\n";
  }

  // member: requested_left_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_left_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_left_velocity, out);
    out << "\n";
  }

  // member: requested_right_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_right_velocity, out);
    out << "\n";
  }

  // member: requested_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_radius, out);
    out << "\n";
  }

  // member: requested_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movement & msg, bool use_flow_style = false)
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

}  // namespace roomba_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roomba_msgs::msg::Movement>()
{
  return "roomba_msgs::msg::Movement";
}

template<>
inline const char * name<roomba_msgs::msg::Movement>()
{
  return "roomba_msgs/msg/Movement";
}

template<>
struct has_fixed_size<roomba_msgs::msg::Movement>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roomba_msgs::msg::Movement>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roomba_msgs::msg::Movement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__TRAITS_HPP_
