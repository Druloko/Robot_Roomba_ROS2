// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomba_msgs:msg/Misc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/msg/misc.hpp"


#ifndef ROOMBA_MSGS__MSG__DETAIL__MISC__STRUCT_HPP_
#define ROOMBA_MSGS__MSG__DETAIL__MISC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomba_msgs__msg__Misc __attribute__((deprecated))
#else
# define DEPRECATED__roomba_msgs__msg__Misc __declspec(deprecated)
#endif

namespace roomba_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Misc_
{
  using Type = Misc_<ContainerAllocator>;

  explicit Misc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_song_playing = false;
      this->song_number = 0;
      this->button_clean = false;
      this->button_clock = false;
      this->button_day = false;
      this->button_dock = false;
      this->button_hour = false;
      this->button_minute = false;
      this->button_schedule = false;
      this->button_spot = false;
    }
  }

  explicit Misc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_song_playing = false;
      this->song_number = 0;
      this->button_clean = false;
      this->button_clock = false;
      this->button_day = false;
      this->button_dock = false;
      this->button_hour = false;
      this->button_minute = false;
      this->button_schedule = false;
      this->button_spot = false;
    }
  }

  // field types and members
  using _is_song_playing_type =
    bool;
  _is_song_playing_type is_song_playing;
  using _song_number_type =
    uint8_t;
  _song_number_type song_number;
  using _button_clean_type =
    bool;
  _button_clean_type button_clean;
  using _button_clock_type =
    bool;
  _button_clock_type button_clock;
  using _button_day_type =
    bool;
  _button_day_type button_day;
  using _button_dock_type =
    bool;
  _button_dock_type button_dock;
  using _button_hour_type =
    bool;
  _button_hour_type button_hour;
  using _button_minute_type =
    bool;
  _button_minute_type button_minute;
  using _button_schedule_type =
    bool;
  _button_schedule_type button_schedule;
  using _button_spot_type =
    bool;
  _button_spot_type button_spot;

  // setters for named parameter idiom
  Type & set__is_song_playing(
    const bool & _arg)
  {
    this->is_song_playing = _arg;
    return *this;
  }
  Type & set__song_number(
    const uint8_t & _arg)
  {
    this->song_number = _arg;
    return *this;
  }
  Type & set__button_clean(
    const bool & _arg)
  {
    this->button_clean = _arg;
    return *this;
  }
  Type & set__button_clock(
    const bool & _arg)
  {
    this->button_clock = _arg;
    return *this;
  }
  Type & set__button_day(
    const bool & _arg)
  {
    this->button_day = _arg;
    return *this;
  }
  Type & set__button_dock(
    const bool & _arg)
  {
    this->button_dock = _arg;
    return *this;
  }
  Type & set__button_hour(
    const bool & _arg)
  {
    this->button_hour = _arg;
    return *this;
  }
  Type & set__button_minute(
    const bool & _arg)
  {
    this->button_minute = _arg;
    return *this;
  }
  Type & set__button_schedule(
    const bool & _arg)
  {
    this->button_schedule = _arg;
    return *this;
  }
  Type & set__button_spot(
    const bool & _arg)
  {
    this->button_spot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomba_msgs::msg::Misc_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomba_msgs::msg::Misc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomba_msgs::msg::Misc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomba_msgs::msg::Misc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::Misc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::Misc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::msg::Misc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::msg::Misc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomba_msgs::msg::Misc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomba_msgs::msg::Misc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomba_msgs__msg__Misc
    std::shared_ptr<roomba_msgs::msg::Misc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomba_msgs__msg__Misc
    std::shared_ptr<roomba_msgs::msg::Misc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Misc_ & other) const
  {
    if (this->is_song_playing != other.is_song_playing) {
      return false;
    }
    if (this->song_number != other.song_number) {
      return false;
    }
    if (this->button_clean != other.button_clean) {
      return false;
    }
    if (this->button_clock != other.button_clock) {
      return false;
    }
    if (this->button_day != other.button_day) {
      return false;
    }
    if (this->button_dock != other.button_dock) {
      return false;
    }
    if (this->button_hour != other.button_hour) {
      return false;
    }
    if (this->button_minute != other.button_minute) {
      return false;
    }
    if (this->button_schedule != other.button_schedule) {
      return false;
    }
    if (this->button_spot != other.button_spot) {
      return false;
    }
    return true;
  }
  bool operator!=(const Misc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Misc_

// alias to use template instance with default allocator
using Misc =
  roomba_msgs::msg::Misc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__MSG__DETAIL__MISC__STRUCT_HPP_
