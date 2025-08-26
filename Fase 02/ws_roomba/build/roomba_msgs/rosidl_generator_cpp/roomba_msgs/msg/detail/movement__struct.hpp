// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomba_msgs:msg/Movement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/movement.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__STRUCT_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomba_msgs__msg__Movement __attribute__((deprecated))
#else
# define DEPRECATED__roomba_msgs__msg__Movement __declspec(deprecated)
#endif

namespace roomba_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Movement_
{
  using Type = Movement_<ContainerAllocator>;

  explicit Movement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->angle = 0.0f;
      this->left_encoder_counts = 0l;
      this->right_encoder_counts = 0l;
      this->requested_left_velocity = 0;
      this->requested_right_velocity = 0;
      this->requested_radius = 0;
      this->requested_velocity = 0;
    }
  }

  explicit Movement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->angle = 0.0f;
      this->left_encoder_counts = 0l;
      this->right_encoder_counts = 0l;
      this->requested_left_velocity = 0;
      this->requested_right_velocity = 0;
      this->requested_radius = 0;
      this->requested_velocity = 0;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;
  using _angle_type =
    float;
  _angle_type angle;
  using _left_encoder_counts_type =
    int32_t;
  _left_encoder_counts_type left_encoder_counts;
  using _right_encoder_counts_type =
    int32_t;
  _right_encoder_counts_type right_encoder_counts;
  using _requested_left_velocity_type =
    int16_t;
  _requested_left_velocity_type requested_left_velocity;
  using _requested_right_velocity_type =
    int16_t;
  _requested_right_velocity_type requested_right_velocity;
  using _requested_radius_type =
    int16_t;
  _requested_radius_type requested_radius;
  using _requested_velocity_type =
    int16_t;
  _requested_velocity_type requested_velocity;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__left_encoder_counts(
    const int32_t & _arg)
  {
    this->left_encoder_counts = _arg;
    return *this;
  }
  Type & set__right_encoder_counts(
    const int32_t & _arg)
  {
    this->right_encoder_counts = _arg;
    return *this;
  }
  Type & set__requested_left_velocity(
    const int16_t & _arg)
  {
    this->requested_left_velocity = _arg;
    return *this;
  }
  Type & set__requested_right_velocity(
    const int16_t & _arg)
  {
    this->requested_right_velocity = _arg;
    return *this;
  }
  Type & set__requested_radius(
    const int16_t & _arg)
  {
    this->requested_radius = _arg;
    return *this;
  }
  Type & set__requested_velocity(
    const int16_t & _arg)
  {
    this->requested_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomba_msgs::msg::Movement_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomba_msgs::msg::Movement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomba_msgs::msg::Movement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomba_msgs::msg::Movement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::Movement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::Movement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::Movement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::Movement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomba_msgs::msg::Movement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomba_msgs::msg::Movement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomba_msgs__msg__Movement
    std::shared_ptr<roomba_msgs::msg::Movement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomba_msgs__msg__Movement
    std::shared_ptr<roomba_msgs::msg::Movement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->left_encoder_counts != other.left_encoder_counts) {
      return false;
    }
    if (this->right_encoder_counts != other.right_encoder_counts) {
      return false;
    }
    if (this->requested_left_velocity != other.requested_left_velocity) {
      return false;
    }
    if (this->requested_right_velocity != other.requested_right_velocity) {
      return false;
    }
    if (this->requested_radius != other.requested_radius) {
      return false;
    }
    if (this->requested_velocity != other.requested_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_

// alias to use template instance with default allocator
using Movement =
  roomba_msgs::msg::Movement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__MOVEMENT__STRUCT_HPP_
