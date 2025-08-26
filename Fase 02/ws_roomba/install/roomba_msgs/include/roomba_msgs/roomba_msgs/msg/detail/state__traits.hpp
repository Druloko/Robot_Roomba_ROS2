// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roomba_msgs:msg/State.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/state.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roomba_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roomba_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const State & msg,
  std::ostream & out)
{
  out << "{";
  // member: oi_mode
  {
    out << "oi_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.oi_mode, out);
    out << ", ";
  }

  // member: is_charging
  {
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << ", ";
  }

  // member: battery_charge
  {
    out << "battery_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_charge, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: oi_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oi_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.oi_mode, out);
    out << "\n";
  }

  // member: is_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << "\n";
  }

  // member: battery_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_charge, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State & msg, bool use_flow_style = false)
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
inline const char * data_type<roomba_msgs::msg::State>()
{
  return "roomba_msgs::msg::State";
}

template<>
inline const char * name<roomba_msgs::msg::State>()
{
  return "roomba_msgs/msg/State";
}

template<>
struct has_fixed_size<roomba_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roomba_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roomba_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROOMBA_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
