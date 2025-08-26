// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/misc.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__MISC__BUILDER_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__MISC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomba_msgs/msg/detail/misc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomba_msgs
{

namespace msg
{

namespace builder
{

class Init_Misc_button_spot
{
public:
  explicit Init_Misc_button_spot(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::msg::Misc button_spot(::roomba_msgs::msg::Misc::_button_spot_type arg)
  {
    msg_.button_spot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_button_schedule
{
public:
  explicit Init_Misc_button_schedule(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  Init_Misc_button_spot button_schedule(::roomba_msgs::msg::Misc::_button_schedule_type arg)
  {
    msg_.button_schedule = std::move(arg);
    return Init_Misc_button_spot(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_button_minute
{
public:
  explicit Init_Misc_button_minute(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  Init_Misc_button_schedule button_minute(::roomba_msgs::msg::Misc::_button_minute_type arg)
  {
    msg_.button_minute = std::move(arg);
    return Init_Misc_button_schedule(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_button_hour
{
public:
  explicit Init_Misc_button_hour(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  Init_Misc_button_minute button_hour(::roomba_msgs::msg::Misc::_button_hour_type arg)
  {
    msg_.button_hour = std::move(arg);
    return Init_Misc_button_minute(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_button_dock
{
public:
  explicit Init_Misc_button_dock(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  Init_Misc_button_hour button_dock(::roomba_msgs::msg::Misc::_button_dock_type arg)
  {
    msg_.button_dock = std::move(arg);
    return Init_Misc_button_hour(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_button_day
{
public:
  explicit Init_Misc_button_day(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  Init_Misc_button_dock button_day(::roomba_msgs::msg::Misc::_button_day_type arg)
  {
    msg_.button_day = std::move(arg);
    return Init_Misc_button_dock(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_button_clock
{
public:
  explicit Init_Misc_button_clock(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  Init_Misc_button_day button_clock(::roomba_msgs::msg::Misc::_button_clock_type arg)
  {
    msg_.button_clock = std::move(arg);
    return Init_Misc_button_day(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_button_clean
{
public:
  explicit Init_Misc_button_clean(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  Init_Misc_button_clock button_clean(::roomba_msgs::msg::Misc::_button_clean_type arg)
  {
    msg_.button_clean = std::move(arg);
    return Init_Misc_button_clock(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_song_number
{
public:
  explicit Init_Misc_song_number(::roomba_msgs::msg::Misc & msg)
  : msg_(msg)
  {}
  Init_Misc_button_clean song_number(::roomba_msgs::msg::Misc::_song_number_type arg)
  {
    msg_.song_number = std::move(arg);
    return Init_Misc_button_clean(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

class Init_Misc_is_song_playing
{
public:
  Init_Misc_is_song_playing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Misc_song_number is_song_playing(::roomba_msgs::msg::Misc::_is_song_playing_type arg)
  {
    msg_.is_song_playing = std::move(arg);
    return Init_Misc_song_number(msg_);
  }

private:
  ::roomba_msgs::msg::Misc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::msg::Misc>()
{
  return roomba_msgs::msg::builder::Init_Misc_is_song_playing();
}

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__MISC__BUILDER_HPP_
