// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomba_msgs:msg/Power.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/power.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomba_msgs/msg/detail/power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomba_msgs
{

namespace msg
{

namespace builder
{

class Init_Power_side_brush_motor_current
{
public:
  explicit Init_Power_side_brush_motor_current(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::msg::Power side_brush_motor_current(::roomba_msgs::msg::Power::_side_brush_motor_current_type arg)
  {
    msg_.side_brush_motor_current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_main_brush_motor_current
{
public:
  explicit Init_Power_main_brush_motor_current(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_side_brush_motor_current main_brush_motor_current(::roomba_msgs::msg::Power::_main_brush_motor_current_type arg)
  {
    msg_.main_brush_motor_current = std::move(arg);
    return Init_Power_side_brush_motor_current(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_right_motor_current
{
public:
  explicit Init_Power_right_motor_current(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_main_brush_motor_current right_motor_current(::roomba_msgs::msg::Power::_right_motor_current_type arg)
  {
    msg_.right_motor_current = std::move(arg);
    return Init_Power_main_brush_motor_current(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_left_motor_current
{
public:
  explicit Init_Power_left_motor_current(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_right_motor_current left_motor_current(::roomba_msgs::msg::Power::_left_motor_current_type arg)
  {
    msg_.left_motor_current = std::move(arg);
    return Init_Power_right_motor_current(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_side_brush_overcurrent
{
public:
  explicit Init_Power_side_brush_overcurrent(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_left_motor_current side_brush_overcurrent(::roomba_msgs::msg::Power::_side_brush_overcurrent_type arg)
  {
    msg_.side_brush_overcurrent = std::move(arg);
    return Init_Power_left_motor_current(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_main_brush_overcurrent
{
public:
  explicit Init_Power_main_brush_overcurrent(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_side_brush_overcurrent main_brush_overcurrent(::roomba_msgs::msg::Power::_main_brush_overcurrent_type arg)
  {
    msg_.main_brush_overcurrent = std::move(arg);
    return Init_Power_side_brush_overcurrent(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_right_wheel_overcurrent
{
public:
  explicit Init_Power_right_wheel_overcurrent(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_main_brush_overcurrent right_wheel_overcurrent(::roomba_msgs::msg::Power::_right_wheel_overcurrent_type arg)
  {
    msg_.right_wheel_overcurrent = std::move(arg);
    return Init_Power_main_brush_overcurrent(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_left_wheel_overcurrent
{
public:
  explicit Init_Power_left_wheel_overcurrent(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_right_wheel_overcurrent left_wheel_overcurrent(::roomba_msgs::msg::Power::_left_wheel_overcurrent_type arg)
  {
    msg_.left_wheel_overcurrent = std::move(arg);
    return Init_Power_right_wheel_overcurrent(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_ir_char_right
{
public:
  explicit Init_Power_ir_char_right(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_left_wheel_overcurrent ir_char_right(::roomba_msgs::msg::Power::_ir_char_right_type arg)
  {
    msg_.ir_char_right = std::move(arg);
    return Init_Power_left_wheel_overcurrent(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_ir_char_left
{
public:
  explicit Init_Power_ir_char_left(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_ir_char_right ir_char_left(::roomba_msgs::msg::Power::_ir_char_left_type arg)
  {
    msg_.ir_char_left = std::move(arg);
    return Init_Power_ir_char_right(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_ir_char_omni
{
public:
  explicit Init_Power_ir_char_omni(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_ir_char_left ir_char_omni(::roomba_msgs::msg::Power::_ir_char_omni_type arg)
  {
    msg_.ir_char_omni = std::move(arg);
    return Init_Power_ir_char_left(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_internal_charger
{
public:
  explicit Init_Power_internal_charger(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_ir_char_omni internal_charger(::roomba_msgs::msg::Power::_internal_charger_type arg)
  {
    msg_.internal_charger = std::move(arg);
    return Init_Power_ir_char_omni(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_home_base
{
public:
  explicit Init_Power_home_base(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_internal_charger home_base(::roomba_msgs::msg::Power::_home_base_type arg)
  {
    msg_.home_base = std::move(arg);
    return Init_Power_internal_charger(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_capacity
{
public:
  explicit Init_Power_capacity(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_home_base capacity(::roomba_msgs::msg::Power::_capacity_type arg)
  {
    msg_.capacity = std::move(arg);
    return Init_Power_home_base(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_charge
{
public:
  explicit Init_Power_charge(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_capacity charge(::roomba_msgs::msg::Power::_charge_type arg)
  {
    msg_.charge = std::move(arg);
    return Init_Power_capacity(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_temperature
{
public:
  explicit Init_Power_temperature(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_charge temperature(::roomba_msgs::msg::Power::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Power_charge(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_current
{
public:
  explicit Init_Power_current(::roomba_msgs::msg::Power & msg)
  : msg_(msg)
  {}
  Init_Power_temperature current(::roomba_msgs::msg::Power::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_Power_temperature(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

class Init_Power_voltage
{
public:
  Init_Power_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Power_current voltage(::roomba_msgs::msg::Power::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_Power_current(msg_);
  }

private:
  ::roomba_msgs::msg::Power msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::msg::Power>()
{
  return roomba_msgs::msg::builder::Init_Power_voltage();
}

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__POWER__BUILDER_HPP_
