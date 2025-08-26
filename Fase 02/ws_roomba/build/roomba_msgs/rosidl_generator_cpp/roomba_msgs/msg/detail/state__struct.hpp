// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomba_msgs:msg/State.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/state.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomba_msgs__msg__State __attribute__((deprecated))
#else
# define DEPRECATED__roomba_msgs__msg__State __declspec(deprecated)
#endif

namespace roomba_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct State_
{
  using Type = State_<ContainerAllocator>;

  explicit State_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oi_mode = "";
      this->is_charging = false;
      this->battery_charge = 0.0f;
    }
  }

  explicit State_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : oi_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oi_mode = "";
      this->is_charging = false;
      this->battery_charge = 0.0f;
    }
  }

  // field types and members
  using _oi_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _oi_mode_type oi_mode;
  using _is_charging_type =
    bool;
  _is_charging_type is_charging;
  using _battery_charge_type =
    float;
  _battery_charge_type battery_charge;

  // setters for named parameter idiom
  Type & set__oi_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->oi_mode = _arg;
    return *this;
  }
  Type & set__is_charging(
    const bool & _arg)
  {
    this->is_charging = _arg;
    return *this;
  }
  Type & set__battery_charge(
    const float & _arg)
  {
    this->battery_charge = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomba_msgs::msg::State_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomba_msgs::msg::State_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomba_msgs::msg::State_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomba_msgs::msg::State_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::State_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::State_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::State_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::State_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomba_msgs::msg::State_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomba_msgs::msg::State_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomba_msgs__msg__State
    std::shared_ptr<roomba_msgs::msg::State_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomba_msgs__msg__State
    std::shared_ptr<roomba_msgs::msg::State_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_ & other) const
  {
    if (this->oi_mode != other.oi_mode) {
      return false;
    }
    if (this->is_charging != other.is_charging) {
      return false;
    }
    if (this->battery_charge != other.battery_charge) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_

// alias to use template instance with default allocator
using State =
  roomba_msgs::msg::State_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
