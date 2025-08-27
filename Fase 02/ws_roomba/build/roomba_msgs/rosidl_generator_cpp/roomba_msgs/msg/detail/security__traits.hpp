// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/security.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__SECURITY__TRAITS_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__SECURITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roomba_msgs/msg/detail/security__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roomba_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Security & msg,
  std::ostream & out)
{
  out << "{";
  // member: bump_left
  {
    out << "bump_left: ";
    rosidl_generator_traits::value_to_yaml(msg.bump_left, out);
    out << ", ";
  }

  // member: bump_right
  {
    out << "bump_right: ";
    rosidl_generator_traits::value_to_yaml(msg.bump_right, out);
    out << ", ";
  }

  // member: wheel_drop_left
  {
    out << "wheel_drop_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_drop_left, out);
    out << ", ";
  }

  // member: wheel_drop_right
  {
    out << "wheel_drop_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_drop_right, out);
    out << ", ";
  }

  // member: wall
  {
    out << "wall: ";
    rosidl_generator_traits::value_to_yaml(msg.wall, out);
    out << ", ";
  }

  // member: virtual_wall
  {
    out << "virtual_wall: ";
    rosidl_generator_traits::value_to_yaml(msg.virtual_wall, out);
    out << ", ";
  }

  // member: cliff_left
  {
    out << "cliff_left: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_left, out);
    out << ", ";
  }

  // member: cliff_right
  {
    out << "cliff_right: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_right, out);
    out << ", ";
  }

  // member: cliff_front_left
  {
    out << "cliff_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_front_left, out);
    out << ", ";
  }

  // member: cliff_front_right
  {
    out << "cliff_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_front_right, out);
    out << ", ";
  }

  // member: cliff_left_signal
  {
    out << "cliff_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_left_signal, out);
    out << ", ";
  }

  // member: cliff_right_signal
  {
    out << "cliff_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_right_signal, out);
    out << ", ";
  }

  // member: cliff_front_left_signal
  {
    out << "cliff_front_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_front_left_signal, out);
    out << ", ";
  }

  // member: cliff_front_right_signal
  {
    out << "cliff_front_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_front_right_signal, out);
    out << ", ";
  }

  // member: wall_signal
  {
    out << "wall_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.wall_signal, out);
    out << ", ";
  }

  // member: light_bumper_left
  {
    out << "light_bumper_left: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_left, out);
    out << ", ";
  }

  // member: light_bumper_right
  {
    out << "light_bumper_right: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_right, out);
    out << ", ";
  }

  // member: light_bumper_center_left
  {
    out << "light_bumper_center_left: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_center_left, out);
    out << ", ";
  }

  // member: light_bumper_center_right
  {
    out << "light_bumper_center_right: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_center_right, out);
    out << ", ";
  }

  // member: light_bumper_front_left
  {
    out << "light_bumper_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_front_left, out);
    out << ", ";
  }

  // member: light_bumper_front_right
  {
    out << "light_bumper_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_front_right, out);
    out << ", ";
  }

  // member: light_bump_left_signal
  {
    out << "light_bump_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_left_signal, out);
    out << ", ";
  }

  // member: light_bump_right_signal
  {
    out << "light_bump_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_right_signal, out);
    out << ", ";
  }

  // member: light_bump_center_left_signal
  {
    out << "light_bump_center_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_center_left_signal, out);
    out << ", ";
  }

  // member: light_bump_center_right_signal
  {
    out << "light_bump_center_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_center_right_signal, out);
    out << ", ";
  }

  // member: light_bump_front_left_signal
  {
    out << "light_bump_front_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_front_left_signal, out);
    out << ", ";
  }

  // member: light_bump_front_right_signal
  {
    out << "light_bump_front_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_front_right_signal, out);
    out << ", ";
  }

  // member: dirt_detect
  {
    out << "dirt_detect: ";
    rosidl_generator_traits::value_to_yaml(msg.dirt_detect, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Security & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bump_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bump_left: ";
    rosidl_generator_traits::value_to_yaml(msg.bump_left, out);
    out << "\n";
  }

  // member: bump_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bump_right: ";
    rosidl_generator_traits::value_to_yaml(msg.bump_right, out);
    out << "\n";
  }

  // member: wheel_drop_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_drop_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_drop_left, out);
    out << "\n";
  }

  // member: wheel_drop_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_drop_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_drop_right, out);
    out << "\n";
  }

  // member: wall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wall: ";
    rosidl_generator_traits::value_to_yaml(msg.wall, out);
    out << "\n";
  }

  // member: virtual_wall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "virtual_wall: ";
    rosidl_generator_traits::value_to_yaml(msg.virtual_wall, out);
    out << "\n";
  }

  // member: cliff_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cliff_left: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_left, out);
    out << "\n";
  }

  // member: cliff_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cliff_right: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_right, out);
    out << "\n";
  }

  // member: cliff_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cliff_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_front_left, out);
    out << "\n";
  }

  // member: cliff_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cliff_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_front_right, out);
    out << "\n";
  }

  // member: cliff_left_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cliff_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_left_signal, out);
    out << "\n";
  }

  // member: cliff_right_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cliff_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_right_signal, out);
    out << "\n";
  }

  // member: cliff_front_left_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cliff_front_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_front_left_signal, out);
    out << "\n";
  }

  // member: cliff_front_right_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cliff_front_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.cliff_front_right_signal, out);
    out << "\n";
  }

  // member: wall_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wall_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.wall_signal, out);
    out << "\n";
  }

  // member: light_bumper_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bumper_left: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_left, out);
    out << "\n";
  }

  // member: light_bumper_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bumper_right: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_right, out);
    out << "\n";
  }

  // member: light_bumper_center_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bumper_center_left: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_center_left, out);
    out << "\n";
  }

  // member: light_bumper_center_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bumper_center_right: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_center_right, out);
    out << "\n";
  }

  // member: light_bumper_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bumper_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_front_left, out);
    out << "\n";
  }

  // member: light_bumper_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bumper_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bumper_front_right, out);
    out << "\n";
  }

  // member: light_bump_left_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bump_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_left_signal, out);
    out << "\n";
  }

  // member: light_bump_right_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bump_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_right_signal, out);
    out << "\n";
  }

  // member: light_bump_center_left_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bump_center_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_center_left_signal, out);
    out << "\n";
  }

  // member: light_bump_center_right_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bump_center_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_center_right_signal, out);
    out << "\n";
  }

  // member: light_bump_front_left_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bump_front_left_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_front_left_signal, out);
    out << "\n";
  }

  // member: light_bump_front_right_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_bump_front_right_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.light_bump_front_right_signal, out);
    out << "\n";
  }

  // member: dirt_detect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dirt_detect: ";
    rosidl_generator_traits::value_to_yaml(msg.dirt_detect, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Security & msg, bool use_flow_style = false)
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
inline const char * data_type<roomba_msgs::msg::Security>()
{
  return "roomba_msgs::msg::Security";
}

template<>
inline const char * name<roomba_msgs::msg::Security>()
{
  return "roomba_msgs/msg/Security";
}

template<>
struct has_fixed_size<roomba_msgs::msg::Security>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roomba_msgs::msg::Security>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roomba_msgs::msg::Security>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROOMBA_MSGS__MSG__DETAIL__SECURITY__TRAITS_HPP_
