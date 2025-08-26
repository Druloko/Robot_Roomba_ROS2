// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/security.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__SECURITY__BUILDER_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__SECURITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomba_msgs/msg/detail/security__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomba_msgs
{

namespace msg
{

namespace builder
{

class Init_Security_dirt_detect
{
public:
  explicit Init_Security_dirt_detect(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::msg::Security dirt_detect(::roomba_msgs::msg::Security::_dirt_detect_type arg)
  {
    msg_.dirt_detect = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_light_bumper_front_right
{
public:
  explicit Init_Security_light_bumper_front_right(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_dirt_detect light_bumper_front_right(::roomba_msgs::msg::Security::_light_bumper_front_right_type arg)
  {
    msg_.light_bumper_front_right = std::move(arg);
    return Init_Security_dirt_detect(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_light_bumper_front_left
{
public:
  explicit Init_Security_light_bumper_front_left(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_light_bumper_front_right light_bumper_front_left(::roomba_msgs::msg::Security::_light_bumper_front_left_type arg)
  {
    msg_.light_bumper_front_left = std::move(arg);
    return Init_Security_light_bumper_front_right(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_light_bumper_center_right
{
public:
  explicit Init_Security_light_bumper_center_right(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_light_bumper_front_left light_bumper_center_right(::roomba_msgs::msg::Security::_light_bumper_center_right_type arg)
  {
    msg_.light_bumper_center_right = std::move(arg);
    return Init_Security_light_bumper_front_left(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_light_bumper_center_left
{
public:
  explicit Init_Security_light_bumper_center_left(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_light_bumper_center_right light_bumper_center_left(::roomba_msgs::msg::Security::_light_bumper_center_left_type arg)
  {
    msg_.light_bumper_center_left = std::move(arg);
    return Init_Security_light_bumper_center_right(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_light_bumper_right
{
public:
  explicit Init_Security_light_bumper_right(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_light_bumper_center_left light_bumper_right(::roomba_msgs::msg::Security::_light_bumper_right_type arg)
  {
    msg_.light_bumper_right = std::move(arg);
    return Init_Security_light_bumper_center_left(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_light_bumper_left
{
public:
  explicit Init_Security_light_bumper_left(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_light_bumper_right light_bumper_left(::roomba_msgs::msg::Security::_light_bumper_left_type arg)
  {
    msg_.light_bumper_left = std::move(arg);
    return Init_Security_light_bumper_right(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_wall_signal
{
public:
  explicit Init_Security_wall_signal(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_light_bumper_left wall_signal(::roomba_msgs::msg::Security::_wall_signal_type arg)
  {
    msg_.wall_signal = std::move(arg);
    return Init_Security_light_bumper_left(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_cliff_front_right_signal
{
public:
  explicit Init_Security_cliff_front_right_signal(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_wall_signal cliff_front_right_signal(::roomba_msgs::msg::Security::_cliff_front_right_signal_type arg)
  {
    msg_.cliff_front_right_signal = std::move(arg);
    return Init_Security_wall_signal(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_cliff_front_left_signal
{
public:
  explicit Init_Security_cliff_front_left_signal(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_cliff_front_right_signal cliff_front_left_signal(::roomba_msgs::msg::Security::_cliff_front_left_signal_type arg)
  {
    msg_.cliff_front_left_signal = std::move(arg);
    return Init_Security_cliff_front_right_signal(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_cliff_right_signal
{
public:
  explicit Init_Security_cliff_right_signal(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_cliff_front_left_signal cliff_right_signal(::roomba_msgs::msg::Security::_cliff_right_signal_type arg)
  {
    msg_.cliff_right_signal = std::move(arg);
    return Init_Security_cliff_front_left_signal(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_cliff_left_signal
{
public:
  explicit Init_Security_cliff_left_signal(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_cliff_right_signal cliff_left_signal(::roomba_msgs::msg::Security::_cliff_left_signal_type arg)
  {
    msg_.cliff_left_signal = std::move(arg);
    return Init_Security_cliff_right_signal(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_cliff_front_right
{
public:
  explicit Init_Security_cliff_front_right(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_cliff_left_signal cliff_front_right(::roomba_msgs::msg::Security::_cliff_front_right_type arg)
  {
    msg_.cliff_front_right = std::move(arg);
    return Init_Security_cliff_left_signal(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_cliff_front_left
{
public:
  explicit Init_Security_cliff_front_left(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_cliff_front_right cliff_front_left(::roomba_msgs::msg::Security::_cliff_front_left_type arg)
  {
    msg_.cliff_front_left = std::move(arg);
    return Init_Security_cliff_front_right(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_cliff_right
{
public:
  explicit Init_Security_cliff_right(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_cliff_front_left cliff_right(::roomba_msgs::msg::Security::_cliff_right_type arg)
  {
    msg_.cliff_right = std::move(arg);
    return Init_Security_cliff_front_left(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_cliff_left
{
public:
  explicit Init_Security_cliff_left(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_cliff_right cliff_left(::roomba_msgs::msg::Security::_cliff_left_type arg)
  {
    msg_.cliff_left = std::move(arg);
    return Init_Security_cliff_right(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_virtual_wall
{
public:
  explicit Init_Security_virtual_wall(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_cliff_left virtual_wall(::roomba_msgs::msg::Security::_virtual_wall_type arg)
  {
    msg_.virtual_wall = std::move(arg);
    return Init_Security_cliff_left(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_wall
{
public:
  explicit Init_Security_wall(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_virtual_wall wall(::roomba_msgs::msg::Security::_wall_type arg)
  {
    msg_.wall = std::move(arg);
    return Init_Security_virtual_wall(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_wheel_drop_right
{
public:
  explicit Init_Security_wheel_drop_right(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_wall wheel_drop_right(::roomba_msgs::msg::Security::_wheel_drop_right_type arg)
  {
    msg_.wheel_drop_right = std::move(arg);
    return Init_Security_wall(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_wheel_drop_left
{
public:
  explicit Init_Security_wheel_drop_left(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_wheel_drop_right wheel_drop_left(::roomba_msgs::msg::Security::_wheel_drop_left_type arg)
  {
    msg_.wheel_drop_left = std::move(arg);
    return Init_Security_wheel_drop_right(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_bump_right
{
public:
  explicit Init_Security_bump_right(::roomba_msgs::msg::Security & msg)
  : msg_(msg)
  {}
  Init_Security_wheel_drop_left bump_right(::roomba_msgs::msg::Security::_bump_right_type arg)
  {
    msg_.bump_right = std::move(arg);
    return Init_Security_wheel_drop_left(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

class Init_Security_bump_left
{
public:
  Init_Security_bump_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Security_bump_right bump_left(::roomba_msgs::msg::Security::_bump_left_type arg)
  {
    msg_.bump_left = std::move(arg);
    return Init_Security_bump_right(msg_);
  }

private:
  ::roomba_msgs::msg::Security msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::msg::Security>()
{
  return roomba_msgs::msg::builder::Init_Security_bump_left();
}

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__SECURITY__BUILDER_HPP_
