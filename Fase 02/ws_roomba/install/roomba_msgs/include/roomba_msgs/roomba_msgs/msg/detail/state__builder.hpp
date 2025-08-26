// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomba_msgs:msg/State.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/state.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomba_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomba_msgs
{

namespace msg
{

namespace builder
{

class Init_State_battery_charge
{
public:
  explicit Init_State_battery_charge(::roomba_msgs::msg::State & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::msg::State battery_charge(::roomba_msgs::msg::State::_battery_charge_type arg)
  {
    msg_.battery_charge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::msg::State msg_;
};

class Init_State_is_charging
{
public:
  explicit Init_State_is_charging(::roomba_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_battery_charge is_charging(::roomba_msgs::msg::State::_is_charging_type arg)
  {
    msg_.is_charging = std::move(arg);
    return Init_State_battery_charge(msg_);
  }

private:
  ::roomba_msgs::msg::State msg_;
};

class Init_State_oi_mode
{
public:
  Init_State_oi_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_is_charging oi_mode(::roomba_msgs::msg::State::_oi_mode_type arg)
  {
    msg_.oi_mode = std::move(arg);
    return Init_State_is_charging(msg_);
  }

private:
  ::roomba_msgs::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::msg::State>()
{
  return roomba_msgs::msg::builder::Init_State_oi_mode();
}

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
