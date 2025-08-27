// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomba_msgs:msg/Power.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/power.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__POWER__STRUCT_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__POWER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomba_msgs__msg__Power __attribute__((deprecated))
#else
# define DEPRECATED__roomba_msgs__msg__Power __declspec(deprecated)
#endif

namespace roomba_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Power_
{
  using Type = Power_<ContainerAllocator>;

  explicit Power_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->temperature = 0.0f;
      this->charge = 0.0f;
      this->capacity = 0.0f;
      this->home_base = false;
      this->internal_charger = false;
      this->ir_char_omni = 0;
      this->ir_char_left = 0;
      this->ir_char_right = 0;
      this->left_wheel_overcurrent = false;
      this->right_wheel_overcurrent = false;
      this->main_brush_overcurrent = false;
      this->side_brush_overcurrent = false;
      this->left_motor_current = 0;
      this->right_motor_current = 0;
      this->main_brush_motor_current = 0;
      this->side_brush_motor_current = 0;
    }
  }

  explicit Power_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->temperature = 0.0f;
      this->charge = 0.0f;
      this->capacity = 0.0f;
      this->home_base = false;
      this->internal_charger = false;
      this->ir_char_omni = 0;
      this->ir_char_left = 0;
      this->ir_char_right = 0;
      this->left_wheel_overcurrent = false;
      this->right_wheel_overcurrent = false;
      this->main_brush_overcurrent = false;
      this->side_brush_overcurrent = false;
      this->left_motor_current = 0;
      this->right_motor_current = 0;
      this->main_brush_motor_current = 0;
      this->side_brush_motor_current = 0;
    }
  }

  // field types and members
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _current_type =
    float;
  _current_type current;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _charge_type =
    float;
  _charge_type charge;
  using _capacity_type =
    float;
  _capacity_type capacity;
  using _home_base_type =
    bool;
  _home_base_type home_base;
  using _internal_charger_type =
    bool;
  _internal_charger_type internal_charger;
  using _ir_char_omni_type =
    uint8_t;
  _ir_char_omni_type ir_char_omni;
  using _ir_char_left_type =
    uint8_t;
  _ir_char_left_type ir_char_left;
  using _ir_char_right_type =
    uint8_t;
  _ir_char_right_type ir_char_right;
  using _left_wheel_overcurrent_type =
    bool;
  _left_wheel_overcurrent_type left_wheel_overcurrent;
  using _right_wheel_overcurrent_type =
    bool;
  _right_wheel_overcurrent_type right_wheel_overcurrent;
  using _main_brush_overcurrent_type =
    bool;
  _main_brush_overcurrent_type main_brush_overcurrent;
  using _side_brush_overcurrent_type =
    bool;
  _side_brush_overcurrent_type side_brush_overcurrent;
  using _left_motor_current_type =
    int16_t;
  _left_motor_current_type left_motor_current;
  using _right_motor_current_type =
    int16_t;
  _right_motor_current_type right_motor_current;
  using _main_brush_motor_current_type =
    int16_t;
  _main_brush_motor_current_type main_brush_motor_current;
  using _side_brush_motor_current_type =
    int16_t;
  _side_brush_motor_current_type side_brush_motor_current;

  // setters for named parameter idiom
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__charge(
    const float & _arg)
  {
    this->charge = _arg;
    return *this;
  }
  Type & set__capacity(
    const float & _arg)
  {
    this->capacity = _arg;
    return *this;
  }
  Type & set__home_base(
    const bool & _arg)
  {
    this->home_base = _arg;
    return *this;
  }
  Type & set__internal_charger(
    const bool & _arg)
  {
    this->internal_charger = _arg;
    return *this;
  }
  Type & set__ir_char_omni(
    const uint8_t & _arg)
  {
    this->ir_char_omni = _arg;
    return *this;
  }
  Type & set__ir_char_left(
    const uint8_t & _arg)
  {
    this->ir_char_left = _arg;
    return *this;
  }
  Type & set__ir_char_right(
    const uint8_t & _arg)
  {
    this->ir_char_right = _arg;
    return *this;
  }
  Type & set__left_wheel_overcurrent(
    const bool & _arg)
  {
    this->left_wheel_overcurrent = _arg;
    return *this;
  }
  Type & set__right_wheel_overcurrent(
    const bool & _arg)
  {
    this->right_wheel_overcurrent = _arg;
    return *this;
  }
  Type & set__main_brush_overcurrent(
    const bool & _arg)
  {
    this->main_brush_overcurrent = _arg;
    return *this;
  }
  Type & set__side_brush_overcurrent(
    const bool & _arg)
  {
    this->side_brush_overcurrent = _arg;
    return *this;
  }
  Type & set__left_motor_current(
    const int16_t & _arg)
  {
    this->left_motor_current = _arg;
    return *this;
  }
  Type & set__right_motor_current(
    const int16_t & _arg)
  {
    this->right_motor_current = _arg;
    return *this;
  }
  Type & set__main_brush_motor_current(
    const int16_t & _arg)
  {
    this->main_brush_motor_current = _arg;
    return *this;
  }
  Type & set__side_brush_motor_current(
    const int16_t & _arg)
  {
    this->side_brush_motor_current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomba_msgs::msg::Power_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomba_msgs::msg::Power_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomba_msgs::msg::Power_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomba_msgs::msg::Power_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::Power_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::Power_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::Power_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::Power_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomba_msgs::msg::Power_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomba_msgs::msg::Power_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomba_msgs__msg__Power
    std::shared_ptr<roomba_msgs::msg::Power_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomba_msgs__msg__Power
    std::shared_ptr<roomba_msgs::msg::Power_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Power_ & other) const
  {
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->charge != other.charge) {
      return false;
    }
    if (this->capacity != other.capacity) {
      return false;
    }
    if (this->home_base != other.home_base) {
      return false;
    }
    if (this->internal_charger != other.internal_charger) {
      return false;
    }
    if (this->ir_char_omni != other.ir_char_omni) {
      return false;
    }
    if (this->ir_char_left != other.ir_char_left) {
      return false;
    }
    if (this->ir_char_right != other.ir_char_right) {
      return false;
    }
    if (this->left_wheel_overcurrent != other.left_wheel_overcurrent) {
      return false;
    }
    if (this->right_wheel_overcurrent != other.right_wheel_overcurrent) {
      return false;
    }
    if (this->main_brush_overcurrent != other.main_brush_overcurrent) {
      return false;
    }
    if (this->side_brush_overcurrent != other.side_brush_overcurrent) {
      return false;
    }
    if (this->left_motor_current != other.left_motor_current) {
      return false;
    }
    if (this->right_motor_current != other.right_motor_current) {
      return false;
    }
    if (this->main_brush_motor_current != other.main_brush_motor_current) {
      return false;
    }
    if (this->side_brush_motor_current != other.side_brush_motor_current) {
      return false;
    }
    return true;
  }
  bool operator!=(const Power_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Power_

// alias to use template instance with default allocator
using Power =
  roomba_msgs::msg::Power_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__POWER__STRUCT_HPP_
