// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomba_msgs:srv/Reconfigure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomba_msgs/srv/reconfigure.hpp"


#ifndef ROOMBA_MSGS__SRV__DETAIL__RECONFIGURE__BUILDER_HPP_
#define ROOMBA_MSGS__SRV__DETAIL__RECONFIGURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomba_msgs/srv/detail/reconfigure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Reconfigure_Request_value
{
public:
  explicit Init_Reconfigure_Request_value(::roomba_msgs::srv::Reconfigure_Request & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Reconfigure_Request value(::roomba_msgs::srv::Reconfigure_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Reconfigure_Request msg_;
};

class Init_Reconfigure_Request_parameter
{
public:
  Init_Reconfigure_Request_parameter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reconfigure_Request_value parameter(::roomba_msgs::srv::Reconfigure_Request::_parameter_type arg)
  {
    msg_.parameter = std::move(arg);
    return Init_Reconfigure_Request_value(msg_);
  }

private:
  ::roomba_msgs::srv::Reconfigure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Reconfigure_Request>()
{
  return roomba_msgs::srv::builder::Init_Reconfigure_Request_parameter();
}

}  // namespace roomba_msgs


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Reconfigure_Response_message
{
public:
  explicit Init_Reconfigure_Response_message(::roomba_msgs::srv::Reconfigure_Response & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Reconfigure_Response message(::roomba_msgs::srv::Reconfigure_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Reconfigure_Response msg_;
};

class Init_Reconfigure_Response_success
{
public:
  Init_Reconfigure_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reconfigure_Response_message success(::roomba_msgs::srv::Reconfigure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Reconfigure_Response_message(msg_);
  }

private:
  ::roomba_msgs::srv::Reconfigure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Reconfigure_Response>()
{
  return roomba_msgs::srv::builder::Init_Reconfigure_Response_success();
}

}  // namespace roomba_msgs


namespace roomba_msgs
{

namespace srv
{

namespace builder
{

class Init_Reconfigure_Event_response
{
public:
  explicit Init_Reconfigure_Event_response(::roomba_msgs::srv::Reconfigure_Event & msg)
  : msg_(msg)
  {}
  ::roomba_msgs::srv::Reconfigure_Event response(::roomba_msgs::srv::Reconfigure_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomba_msgs::srv::Reconfigure_Event msg_;
};

class Init_Reconfigure_Event_request
{
public:
  explicit Init_Reconfigure_Event_request(::roomba_msgs::srv::Reconfigure_Event & msg)
  : msg_(msg)
  {}
  Init_Reconfigure_Event_response request(::roomba_msgs::srv::Reconfigure_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Reconfigure_Event_response(msg_);
  }

private:
  ::roomba_msgs::srv::Reconfigure_Event msg_;
};

class Init_Reconfigure_Event_info
{
public:
  Init_Reconfigure_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reconfigure_Event_request info(::roomba_msgs::srv::Reconfigure_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Reconfigure_Event_request(msg_);
  }

private:
  ::roomba_msgs::srv::Reconfigure_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomba_msgs::srv::Reconfigure_Event>()
{
  return roomba_msgs::srv::builder::Init_Reconfigure_Event_info();
}

}  // namespace roomba_msgs

#endif  // ROOMBA_MSGS__SRV__DETAIL__RECONFIGURE__BUILDER_HPP_
