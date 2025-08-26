// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomba_msgs:msg/Movement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/movement.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__BUILDER_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomba_msgs/msg/detail/movement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomba_msgs
{

namespace msg
{

namespace builder
{

class Init_Movement_requested_velocity
{
public:
  explicit Init_Movement_requested_velocity(::roomba_msgs::msg::Movement & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::msg::Movement requested_velocity(::roomba_msgs::msg::Movement::_requested_velocity_type arg)
  {
    msg_.requested_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::msg::Movement msg_;
};

class Init_Movement_requested_radius
{
public:
  explicit Init_Movement_requested_radius(::roomba_msgs::msg::Movement & msg)
  : msg_(msg)
  {}
  Init_Movement_requested_velocity requested_radius(::roomba_msgs::msg::Movement::_requested_radius_type arg)
  {
    msg_.requested_radius = std::move(arg);
    return Init_Movement_requested_velocity(msg_);
  }

private:
  ::roomba_msgs::msg::Movement msg_;
};

class Init_Movement_requested_right_velocity
{
public:
  explicit Init_Movement_requested_right_velocity(::roomba_msgs::msg::Movement & msg)
  : msg_(msg)
  {}
  Init_Movement_requested_radius requested_right_velocity(::roomba_msgs::msg::Movement::_requested_right_velocity_type arg)
  {
    msg_.requested_right_velocity = std::move(arg);
    return Init_Movement_requested_radius(msg_);
  }

private:
  ::roomba_msgs::msg::Movement msg_;
};

class Init_Movement_requested_left_velocity
{
public:
  explicit Init_Movement_requested_left_velocity(::roomba_msgs::msg::Movement & msg)
  : msg_(msg)
  {}
  Init_Movement_requested_right_velocity requested_left_velocity(::roomba_msgs::msg::Movement::_requested_left_velocity_type arg)
  {
    msg_.requested_left_velocity = std::move(arg);
    return Init_Movement_requested_right_velocity(msg_);
  }

private:
  ::roomba_msgs::msg::Movement msg_;
};

class Init_Movement_right_encoder_counts
{
public:
  explicit Init_Movement_right_encoder_counts(::roomba_msgs::msg::Movement & msg)
  : msg_(msg)
  {}
  Init_Movement_requested_left_velocity right_encoder_counts(::roomba_msgs::msg::Movement::_right_encoder_counts_type arg)
  {
    msg_.right_encoder_counts = std::move(arg);
    return Init_Movement_requested_left_velocity(msg_);
  }

private:
  ::roomba_msgs::msg::Movement msg_;
};

class Init_Movement_left_encoder_counts
{
public:
  explicit Init_Movement_left_encoder_counts(::roomba_msgs::msg::Movement & msg)
  : msg_(msg)
  {}
  Init_Movement_right_encoder_counts left_encoder_counts(::roomba_msgs::msg::Movement::_left_encoder_counts_type arg)
  {
    msg_.left_encoder_counts = std::move(arg);
    return Init_Movement_right_encoder_counts(msg_);
  }

private:
  ::roomba_msgs::msg::Movement msg_;
};

class Init_Movement_angle
{
public:
  explicit Init_Movement_angle(::roomba_msgs::msg::Movement & msg)
  : msg_(msg)
  {}
  Init_Movement_left_encoder_counts angle(::roomba_msgs::msg::Movement::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Movement_left_encoder_counts(msg_);
  }

private:
  ::roomba_msgs::msg::Movement msg_;
};

class Init_Movement_distance
{
public:
  Init_Movement_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_angle distance(::roomba_msgs::msg::Movement::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Movement_angle(msg_);
  }

private:
  ::roomba_msgs::msg::Movement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::msg::Movement>()
{
  return roomba_msgs::msg::builder::Init_Movement_distance();
}

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__BUILDER_HPP_
