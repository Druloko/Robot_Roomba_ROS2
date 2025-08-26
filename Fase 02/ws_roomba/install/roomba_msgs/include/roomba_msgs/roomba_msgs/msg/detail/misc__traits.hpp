// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/misc.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__MISC__TRAITS_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__MISC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roomba_msgs/msg/detail/misc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roomba_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Misc & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_song_playing
  {
    out << "is_song_playing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_song_playing, out);
    out << ", ";
  }

  // member: song_number
  {
    out << "song_number: ";
    rosidl_generator_traits::value_to_yaml(msg.song_number, out);
    out << ", ";
  }

  // member: button_clean
  {
    out << "button_clean: ";
    rosidl_generator_traits::value_to_yaml(msg.button_clean, out);
    out << ", ";
  }

  // member: button_clock
  {
    out << "button_clock: ";
    rosidl_generator_traits::value_to_yaml(msg.button_clock, out);
    out << ", ";
  }

  // member: button_day
  {
    out << "button_day: ";
    rosidl_generator_traits::value_to_yaml(msg.button_day, out);
    out << ", ";
  }

  // member: button_dock
  {
    out << "button_dock: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dock, out);
    out << ", ";
  }

  // member: button_hour
  {
    out << "button_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.button_hour, out);
    out << ", ";
  }

  // member: button_minute
  {
    out << "button_minute: ";
    rosidl_generator_traits::value_to_yaml(msg.button_minute, out);
    out << ", ";
  }

  // member: button_schedule
  {
    out << "button_schedule: ";
    rosidl_generator_traits::value_to_yaml(msg.button_schedule, out);
    out << ", ";
  }

  // member: button_spot
  {
    out << "button_spot: ";
    rosidl_generator_traits::value_to_yaml(msg.button_spot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Misc & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_song_playing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_song_playing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_song_playing, out);
    out << "\n";
  }

  // member: song_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "song_number: ";
    rosidl_generator_traits::value_to_yaml(msg.song_number, out);
    out << "\n";
  }

  // member: button_clean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_clean: ";
    rosidl_generator_traits::value_to_yaml(msg.button_clean, out);
    out << "\n";
  }

  // member: button_clock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_clock: ";
    rosidl_generator_traits::value_to_yaml(msg.button_clock, out);
    out << "\n";
  }

  // member: button_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_day: ";
    rosidl_generator_traits::value_to_yaml(msg.button_day, out);
    out << "\n";
  }

  // member: button_dock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_dock: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dock, out);
    out << "\n";
  }

  // member: button_hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.button_hour, out);
    out << "\n";
  }

  // member: button_minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_minute: ";
    rosidl_generator_traits::value_to_yaml(msg.button_minute, out);
    out << "\n";
  }

  // member: button_schedule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_schedule: ";
    rosidl_generator_traits::value_to_yaml(msg.button_schedule, out);
    out << "\n";
  }

  // member: button_spot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_spot: ";
    rosidl_generator_traits::value_to_yaml(msg.button_spot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Misc & msg, bool use_flow_style = false)
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
inline const char * data_type<roomba_msgs::msg::Misc>()
{
  return "roomba_msgs::msg::Misc";
}

template<>
inline const char * name<roomba_msgs::msg::Misc>()
{
  return "roomba_msgs/msg/Misc";
}

template<>
struct has_fixed_size<roomba_msgs::msg::Misc>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roomba_msgs::msg::Misc>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roomba_msgs::msg::Misc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROOMBA_MSGS__MSG__DETAIL__MISC__TRAITS_HPP_
