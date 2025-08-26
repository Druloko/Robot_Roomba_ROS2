// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomba_msgs:msg/Security.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/security.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__SECURITY__STRUCT_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__SECURITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomba_msgs__msg__Security __attribute__((deprecated))
#else
# define DEPRECATED__roomba_msgs__msg__Security __declspec(deprecated)
#endif

namespace roomba_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Security_
{
  using Type = Security_<ContainerAllocator>;

  explicit Security_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bump_left = false;
      this->bump_right = false;
      this->wheel_drop_left = false;
      this->wheel_drop_right = false;
      this->wall = false;
      this->virtual_wall = false;
      this->cliff_left = false;
      this->cliff_right = false;
      this->cliff_front_left = false;
      this->cliff_front_right = false;
      this->cliff_left_signal = 0;
      this->cliff_right_signal = 0;
      this->cliff_front_left_signal = 0;
      this->cliff_front_right_signal = 0;
      this->wall_signal = 0;
      this->light_bumper_left = false;
      this->light_bumper_right = false;
      this->light_bumper_center_left = false;
      this->light_bumper_center_right = false;
      this->light_bumper_front_left = false;
      this->light_bumper_front_right = false;
      this->dirt_detect = 0;
    }
  }

  explicit Security_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bump_left = false;
      this->bump_right = false;
      this->wheel_drop_left = false;
      this->wheel_drop_right = false;
      this->wall = false;
      this->virtual_wall = false;
      this->cliff_left = false;
      this->cliff_right = false;
      this->cliff_front_left = false;
      this->cliff_front_right = false;
      this->cliff_left_signal = 0;
      this->cliff_right_signal = 0;
      this->cliff_front_left_signal = 0;
      this->cliff_front_right_signal = 0;
      this->wall_signal = 0;
      this->light_bumper_left = false;
      this->light_bumper_right = false;
      this->light_bumper_center_left = false;
      this->light_bumper_center_right = false;
      this->light_bumper_front_left = false;
      this->light_bumper_front_right = false;
      this->dirt_detect = 0;
    }
  }

  // field types and members
  using _bump_left_type =
    bool;
  _bump_left_type bump_left;
  using _bump_right_type =
    bool;
  _bump_right_type bump_right;
  using _wheel_drop_left_type =
    bool;
  _wheel_drop_left_type wheel_drop_left;
  using _wheel_drop_right_type =
    bool;
  _wheel_drop_right_type wheel_drop_right;
  using _wall_type =
    bool;
  _wall_type wall;
  using _virtual_wall_type =
    bool;
  _virtual_wall_type virtual_wall;
  using _cliff_left_type =
    bool;
  _cliff_left_type cliff_left;
  using _cliff_right_type =
    bool;
  _cliff_right_type cliff_right;
  using _cliff_front_left_type =
    bool;
  _cliff_front_left_type cliff_front_left;
  using _cliff_front_right_type =
    bool;
  _cliff_front_right_type cliff_front_right;
  using _cliff_left_signal_type =
    uint16_t;
  _cliff_left_signal_type cliff_left_signal;
  using _cliff_right_signal_type =
    uint16_t;
  _cliff_right_signal_type cliff_right_signal;
  using _cliff_front_left_signal_type =
    uint16_t;
  _cliff_front_left_signal_type cliff_front_left_signal;
  using _cliff_front_right_signal_type =
    uint16_t;
  _cliff_front_right_signal_type cliff_front_right_signal;
  using _wall_signal_type =
    uint16_t;
  _wall_signal_type wall_signal;
  using _light_bumper_left_type =
    bool;
  _light_bumper_left_type light_bumper_left;
  using _light_bumper_right_type =
    bool;
  _light_bumper_right_type light_bumper_right;
  using _light_bumper_center_left_type =
    bool;
  _light_bumper_center_left_type light_bumper_center_left;
  using _light_bumper_center_right_type =
    bool;
  _light_bumper_center_right_type light_bumper_center_right;
  using _light_bumper_front_left_type =
    bool;
  _light_bumper_front_left_type light_bumper_front_left;
  using _light_bumper_front_right_type =
    bool;
  _light_bumper_front_right_type light_bumper_front_right;
  using _dirt_detect_type =
    uint8_t;
  _dirt_detect_type dirt_detect;

  // setters for named parameter idiom
  Type & set__bump_left(
    const bool & _arg)
  {
    this->bump_left = _arg;
    return *this;
  }
  Type & set__bump_right(
    const bool & _arg)
  {
    this->bump_right = _arg;
    return *this;
  }
  Type & set__wheel_drop_left(
    const bool & _arg)
  {
    this->wheel_drop_left = _arg;
    return *this;
  }
  Type & set__wheel_drop_right(
    const bool & _arg)
  {
    this->wheel_drop_right = _arg;
    return *this;
  }
  Type & set__wall(
    const bool & _arg)
  {
    this->wall = _arg;
    return *this;
  }
  Type & set__virtual_wall(
    const bool & _arg)
  {
    this->virtual_wall = _arg;
    return *this;
  }
  Type & set__cliff_left(
    const bool & _arg)
  {
    this->cliff_left = _arg;
    return *this;
  }
  Type & set__cliff_right(
    const bool & _arg)
  {
    this->cliff_right = _arg;
    return *this;
  }
  Type & set__cliff_front_left(
    const bool & _arg)
  {
    this->cliff_front_left = _arg;
    return *this;
  }
  Type & set__cliff_front_right(
    const bool & _arg)
  {
    this->cliff_front_right = _arg;
    return *this;
  }
  Type & set__cliff_left_signal(
    const uint16_t & _arg)
  {
    this->cliff_left_signal = _arg;
    return *this;
  }
  Type & set__cliff_right_signal(
    const uint16_t & _arg)
  {
    this->cliff_right_signal = _arg;
    return *this;
  }
  Type & set__cliff_front_left_signal(
    const uint16_t & _arg)
  {
    this->cliff_front_left_signal = _arg;
    return *this;
  }
  Type & set__cliff_front_right_signal(
    const uint16_t & _arg)
  {
    this->cliff_front_right_signal = _arg;
    return *this;
  }
  Type & set__wall_signal(
    const uint16_t & _arg)
  {
    this->wall_signal = _arg;
    return *this;
  }
  Type & set__light_bumper_left(
    const bool & _arg)
  {
    this->light_bumper_left = _arg;
    return *this;
  }
  Type & set__light_bumper_right(
    const bool & _arg)
  {
    this->light_bumper_right = _arg;
    return *this;
  }
  Type & set__light_bumper_center_left(
    const bool & _arg)
  {
    this->light_bumper_center_left = _arg;
    return *this;
  }
  Type & set__light_bumper_center_right(
    const bool & _arg)
  {
    this->light_bumper_center_right = _arg;
    return *this;
  }
  Type & set__light_bumper_front_left(
    const bool & _arg)
  {
    this->light_bumper_front_left = _arg;
    return *this;
  }
  Type & set__light_bumper_front_right(
    const bool & _arg)
  {
    this->light_bumper_front_right = _arg;
    return *this;
  }
  Type & set__dirt_detect(
    const uint8_t & _arg)
  {
    this->dirt_detect = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomba_msgs::msg::Security_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomba_msgs::msg::Security_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomba_msgs::msg::Security_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomba_msgs::msg::Security_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::Security_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::Security_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::Security_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::Security_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomba_msgs::msg::Security_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomba_msgs::msg::Security_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomba_msgs__msg__Security
    std::shared_ptr<roomba_msgs::msg::Security_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomba_msgs__msg__Security
    std::shared_ptr<roomba_msgs::msg::Security_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Security_ & other) const
  {
    if (this->bump_left != other.bump_left) {
      return false;
    }
    if (this->bump_right != other.bump_right) {
      return false;
    }
    if (this->wheel_drop_left != other.wheel_drop_left) {
      return false;
    }
    if (this->wheel_drop_right != other.wheel_drop_right) {
      return false;
    }
    if (this->wall != other.wall) {
      return false;
    }
    if (this->virtual_wall != other.virtual_wall) {
      return false;
    }
    if (this->cliff_left != other.cliff_left) {
      return false;
    }
    if (this->cliff_right != other.cliff_right) {
      return false;
    }
    if (this->cliff_front_left != other.cliff_front_left) {
      return false;
    }
    if (this->cliff_front_right != other.cliff_front_right) {
      return false;
    }
    if (this->cliff_left_signal != other.cliff_left_signal) {
      return false;
    }
    if (this->cliff_right_signal != other.cliff_right_signal) {
      return false;
    }
    if (this->cliff_front_left_signal != other.cliff_front_left_signal) {
      return false;
    }
    if (this->cliff_front_right_signal != other.cliff_front_right_signal) {
      return false;
    }
    if (this->wall_signal != other.wall_signal) {
      return false;
    }
    if (this->light_bumper_left != other.light_bumper_left) {
      return false;
    }
    if (this->light_bumper_right != other.light_bumper_right) {
      return false;
    }
    if (this->light_bumper_center_left != other.light_bumper_center_left) {
      return false;
    }
    if (this->light_bumper_center_right != other.light_bumper_center_right) {
      return false;
    }
    if (this->light_bumper_front_left != other.light_bumper_front_left) {
      return false;
    }
    if (this->light_bumper_front_right != other.light_bumper_front_right) {
      return false;
    }
    if (this->dirt_detect != other.dirt_detect) {
      return false;
    }
    return true;
  }
  bool operator!=(const Security_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Security_

// alias to use template instance with default allocator
using Security =
  roomba_msgs::msg::Security_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__SECURITY__STRUCT_HPP_
