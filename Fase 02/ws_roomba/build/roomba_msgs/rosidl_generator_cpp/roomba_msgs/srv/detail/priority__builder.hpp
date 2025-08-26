// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomba_msgs:srv/Priority.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/srv/priority.hpp"


#ifndef ROOMBA_MSGS__SRV__DETAIL__PRIORITY__BUILDER_HPP_
#define ROOMBA_MSGS__SRV__DETAIL__PRIORITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomba_msgs/srv/detail/priority__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Priority_Request_priority
{
public:
  explicit Init_Priority_Request_priority(::roomba_msgs::srv::Priority_Request & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Priority_Request priority(::roomba_msgs::srv::Priority_Request::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Priority_Request msg_;
};

class Init_Priority_Request_message_type
{
public:
  Init_Priority_Request_message_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Priority_Request_priority message_type(::roomba_msgs::srv::Priority_Request::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_Priority_Request_priority(msg_);
  }

private:
  ::roomba_msgs::srv::Priority_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Priority_Request>()
{
  return roomba_msgs::srv::builder::Init_Priority_Request_message_type();
}

}  // namespace roomba_msgs


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Priority_Response_message
{
public:
  explicit Init_Priority_Response_message(::roomba_msgs::srv::Priority_Response & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Priority_Response message(::roomba_msgs::srv::Priority_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Priority_Response msg_;
};

class Init_Priority_Response_success
{
public:
  Init_Priority_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Priority_Response_message success(::roomba_msgs::srv::Priority_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Priority_Response_message(msg_);
  }

private:
  ::roomba_msgs::srv::Priority_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Priority_Response>()
{
  return roomba_msgs::srv::builder::Init_Priority_Response_success();
}

}  // namespace roomba_msgs


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Priority_Event_response
{
public:
  explicit Init_Priority_Event_response(::roomba_msgs::srv::Priority_Event & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Priority_Event response(::roomba_msgs::srv::Priority_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Priority_Event msg_;
};

class Init_Priority_Event_request
{
public:
  explicit Init_Priority_Event_request(::roomba_msgs::srv::Priority_Event & msg)
  : msg_(msg)
  {}
  Init_Priority_Event_response request(::roomba_msgs::srv::Priority_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Priority_Event_response(msg_);
  }

private:
  ::roomba_msgs::srv::Priority_Event msg_;
};

class Init_Priority_Event_info
{
public:
  Init_Priority_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Priority_Event_request info(::roomba_msgs::srv::Priority_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Priority_Event_request(msg_);
  }

private:
  ::roomba_msgs::srv::Priority_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Priority_Event>()
{
  return roomba_msgs::srv::builder::Init_Priority_Event_info();
}

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__SRV__DETAIL__PRIORITY__BUILDER_HPP_
