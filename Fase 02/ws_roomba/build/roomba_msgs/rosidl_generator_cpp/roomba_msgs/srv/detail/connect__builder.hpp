// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomba_msgs:srv/Connect.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/srv/connect.hpp"


#ifndef ROOMBA_MSGS__SRV__DETAIL__CONNECT__BUILDER_HPP_
#define ROOMBA_MSGS__SRV__DETAIL__CONNECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomba_msgs/srv/detail/connect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Connect_Request_mode
{
public:
  explicit Init_Connect_Request_mode(::roomba_msgs::srv::Connect_Request & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Connect_Request mode(::roomba_msgs::srv::Connect_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Connect_Request msg_;
};

class Init_Connect_Request_port
{
public:
  Init_Connect_Request_port()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connect_Request_mode port(::roomba_msgs::srv::Connect_Request::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_Connect_Request_mode(msg_);
  }

private:
  ::roomba_msgs::srv::Connect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Connect_Request>()
{
  return roomba_msgs::srv::builder::Init_Connect_Request_port();
}

}  // namespace roomba_msgs


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Connect_Response_message
{
public:
  explicit Init_Connect_Response_message(::roomba_msgs::srv::Connect_Response & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Connect_Response message(::roomba_msgs::srv::Connect_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Connect_Response msg_;
};

class Init_Connect_Response_success
{
public:
  Init_Connect_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connect_Response_message success(::roomba_msgs::srv::Connect_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Connect_Response_message(msg_);
  }

private:
  ::roomba_msgs::srv::Connect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Connect_Response>()
{
  return roomba_msgs::srv::builder::Init_Connect_Response_success();
}

}  // namespace roomba_msgs


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Connect_Event_response
{
public:
  explicit Init_Connect_Event_response(::roomba_msgs::srv::Connect_Event & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Connect_Event response(::roomba_msgs::srv::Connect_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Connect_Event msg_;
};

class Init_Connect_Event_request
{
public:
  explicit Init_Connect_Event_request(::roomba_msgs::srv::Connect_Event & msg)
  : msg_(msg)
  {}
  Init_Connect_Event_response request(::roomba_msgs::srv::Connect_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Connect_Event_response(msg_);
  }

private:
  ::roomba_msgs::srv::Connect_Event msg_;
};

class Init_Connect_Event_info
{
public:
  Init_Connect_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connect_Event_request info(::roomba_msgs::srv::Connect_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Connect_Event_request(msg_);
  }

private:
  ::roomba_msgs::srv::Connect_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Connect_Event>()
{
  return roomba_msgs::srv::builder::Init_Connect_Event_info();
}

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__SRV__DETAIL__CONNECT__BUILDER_HPP_
