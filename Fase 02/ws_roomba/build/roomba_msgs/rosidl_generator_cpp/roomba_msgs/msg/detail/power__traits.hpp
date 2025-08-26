// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roomba_msgs:msg/Power.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/power.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__POWER__TRAITS_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__POWER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roomba_msgs/msg/detail/power__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roomba_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Power & msg,
  std::ostream & out)
{
  out << "{";
  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: charge
  {
    out << "charge: ";
    rosidl_generator_traits::value_to_yaml(msg.charge, out);
    out << ", ";
  }

  // member: capacity
  {
    out << "capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.capacity, out);
    out << ", ";
  }

  // member: home_base
  {
    out << "home_base: ";
    rosidl_generator_traits::value_to_yaml(msg.home_base, out);
    out << ", ";
  }

  // member: internal_charger
  {
    out << "internal_charger: ";
    rosidl_generator_traits::value_to_yaml(msg.internal_charger, out);
    out << ", ";
  }

  // member: ir_char_omni
  {
    out << "ir_char_omni: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_char_omni, out);
    out << ", ";
  }

  // member: ir_char_left
  {
    out << "ir_char_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_char_left, out);
    out << ", ";
  }

  // member: ir_char_right
  {
    out << "ir_char_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_char_right, out);
    out << ", ";
  }

  // member: left_wheel_overcurrent
  {
    out << "left_wheel_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_overcurrent, out);
    out << ", ";
  }

  // member: right_wheel_overcurrent
  {
    out << "right_wheel_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_overcurrent, out);
    out << ", ";
  }

  // member: main_brush_overcurrent
  {
    out << "main_brush_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.main_brush_overcurrent, out);
    out << ", ";
  }

  // member: side_brush_overcurrent
  {
    out << "side_brush_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.side_brush_overcurrent, out);
    out << ", ";
  }

  // member: left_motor_current
  {
    out << "left_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_current, out);
    out << ", ";
  }

  // member: right_motor_current
  {
    out << "right_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_current, out);
    out << ", ";
  }

  // member: main_brush_motor_current
  {
    out << "main_brush_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.main_brush_motor_current, out);
    out << ", ";
  }

  // member: side_brush_motor_current
  {
    out << "side_brush_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.side_brush_motor_current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Power & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge: ";
    rosidl_generator_traits::value_to_yaml(msg.charge, out);
    out << "\n";
  }

  // member: capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.capacity, out);
    out << "\n";
  }

  // member: home_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_base: ";
    rosidl_generator_traits::value_to_yaml(msg.home_base, out);
    out << "\n";
  }

  // member: internal_charger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "internal_charger: ";
    rosidl_generator_traits::value_to_yaml(msg.internal_charger, out);
    out << "\n";
  }

  // member: ir_char_omni
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ir_char_omni: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_char_omni, out);
    out << "\n";
  }

  // member: ir_char_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ir_char_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_char_left, out);
    out << "\n";
  }

  // member: ir_char_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ir_char_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_char_right, out);
    out << "\n";
  }

  // member: left_wheel_overcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_overcurrent, out);
    out << "\n";
  }

  // member: right_wheel_overcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_overcurrent, out);
    out << "\n";
  }

  // member: main_brush_overcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_brush_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.main_brush_overcurrent, out);
    out << "\n";
  }

  // member: side_brush_overcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side_brush_overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.side_brush_overcurrent, out);
    out << "\n";
  }

  // member: left_motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_current, out);
    out << "\n";
  }

  // member: right_motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_current, out);
    out << "\n";
  }

  // member: main_brush_motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_brush_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.main_brush_motor_current, out);
    out << "\n";
  }

  // member: side_brush_motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side_brush_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.side_brush_motor_current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Power & msg, bool use_flow_style = false)
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
inline const char * data_type<roomba_msgs::msg::Power>()
{
  return "roomba_msgs::msg::Power";
}

template<>
inline const char * name<roomba_msgs::msg::Power>()
{
  return "roomba_msgs/msg/Power";
}

template<>
struct has_fixed_size<roomba_msgs::msg::Power>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roomba_msgs::msg::Power>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roomba_msgs::msg::Power>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROOMBA_MSGS__MSG__DETAIL__POWER__TRAITS_HPP_
