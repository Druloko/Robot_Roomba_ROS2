// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomba_msgs:srv/Connect.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/srv/connect.hpp"


#ifndef ROOMBA_MSGS__SRV__DETAIL__CONNECT__STRUCT_HPP_
#define ROOMBA_MSGS__SRV__DETAIL__CONNECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomba_msgs__srv__Connect_Request __attribute__((deprecated))
#else
# define DEPRECATED__roomba_msgs__srv__Connect_Request __declspec(deprecated)
#endif

namespace roomba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Connect_Request_
{
  using Type = Connect_Request_<ContainerAllocator>;

  explicit Connect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port = "";
      this->mode = "";
    }
  }

  explicit Connect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : port(_alloc),
    mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port = "";
      this->mode = "";
    }
  }

  // field types and members
  using _port_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _port_type port;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__port(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->port = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomba_msgs::srv::Connect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomba_msgs::srv::Connect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomba_msgs::srv::Connect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomba_msgs::srv::Connect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::srv::Connect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::srv::Connect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::srv::Connect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::srv::Connect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomba_msgs::srv::Connect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomba_msgs::srv::Connect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomba_msgs__srv__Connect_Request
    std::shared_ptr<roomba_msgs::srv::Connect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomba_msgs__srv__Connect_Request
    std::shared_ptr<roomba_msgs::srv::Connect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connect_Request_ & other) const
  {
    if (this->port != other.port) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connect_Request_

// alias to use template instance with default allocator
using Connect_Request =
  roomba_msgs::srv::Connect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roomba_msgs


#ifndef _WIN32
# define DEPRECATED__roomba_msgs__srv__Connect_Response __attribute__((deprecated))
#else
# define DEPRECATED__roomba_msgs__srv__Connect_Response __declspec(deprecated)
#endif

namespace roomba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Connect_Response_
{
  using Type = Connect_Response_<ContainerAllocator>;

  explicit Connect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Connect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomba_msgs::srv::Connect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomba_msgs::srv::Connect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomba_msgs::srv::Connect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomba_msgs::srv::Connect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::srv::Connect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::srv::Connect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::srv::Connect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::srv::Connect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomba_msgs::srv::Connect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomba_msgs::srv::Connect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomba_msgs__srv__Connect_Response
    std::shared_ptr<roomba_msgs::srv::Connect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomba_msgs__srv__Connect_Response
    std::shared_ptr<roomba_msgs::srv::Connect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connect_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connect_Response_

// alias to use template instance with default allocator
using Connect_Response =
  roomba_msgs::srv::Connect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roomba_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__roomba_msgs__srv__Connect_Event __attribute__((deprecated))
#else
# define DEPRECATED__roomba_msgs__srv__Connect_Event __declspec(deprecated)
#endif

namespace roomba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Connect_Event_
{
  using Type = Connect_Event_<ContainerAllocator>;

  explicit Connect_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Connect_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<roomba_msgs::srv::Connect_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<roomba_msgs::srv::Connect_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<roomba_msgs::srv::Connect_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<roomba_msgs::srv::Connect_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<roomba_msgs::srv::Connect_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<roomba_msgs::srv::Connect_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<roomba_msgs::srv::Connect_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<roomba_msgs::srv::Connect_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomba_msgs::srv::Connect_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomba_msgs::srv::Connect_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomba_msgs::srv::Connect_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomba_msgs::srv::Connect_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::srv::Connect_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::srv::Connect_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomba_msgs::srv::Connect_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomba_msgs::srv::Connect_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomba_msgs::srv::Connect_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomba_msgs::srv::Connect_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomba_msgs__srv__Connect_Event
    std::shared_ptr<roomba_msgs::srv::Connect_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomba_msgs__srv__Connect_Event
    std::shared_ptr<roomba_msgs::srv::Connect_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connect_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connect_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connect_Event_

// alias to use template instance with default allocator
using Connect_Event =
  roomba_msgs::srv::Connect_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roomba_msgs

namespace roomba_msgs
{

namespace srv
{

struct Connect
{
  using Request = roomba_msgs::srv::Connect_Request;
  using Response = roomba_msgs::srv::Connect_Response;
  using Event = roomba_msgs::srv::Connect_Event;
};

}  // namespace srv

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__SRV__DETAIL__CONNECT__STRUCT_HPP_
