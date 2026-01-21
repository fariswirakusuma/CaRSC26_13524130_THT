// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yapping:srv/Duration.idl
// generated code does not contain a copyright notice

#ifndef YAPPING__SRV__DETAIL__DURATION__BUILDER_HPP_
#define YAPPING__SRV__DETAIL__DURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yapping/srv/detail/duration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yapping
{

namespace srv
{

namespace builder
{

class Init_Duration_Request_end_time
{
public:
  explicit Init_Duration_Request_end_time(::yapping::srv::Duration_Request & msg)
  : msg_(msg)
  {}
  ::yapping::srv::Duration_Request end_time(::yapping::srv::Duration_Request::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yapping::srv::Duration_Request msg_;
};

class Init_Duration_Request_start_time
{
public:
  Init_Duration_Request_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Duration_Request_end_time start_time(::yapping::srv::Duration_Request::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_Duration_Request_end_time(msg_);
  }

private:
  ::yapping::srv::Duration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yapping::srv::Duration_Request>()
{
  return yapping::srv::builder::Init_Duration_Request_start_time();
}

}  // namespace yapping


namespace yapping
{

namespace srv
{

namespace builder
{

class Init_Duration_Response_iso_duration
{
public:
  Init_Duration_Response_iso_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yapping::srv::Duration_Response iso_duration(::yapping::srv::Duration_Response::_iso_duration_type arg)
  {
    msg_.iso_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yapping::srv::Duration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yapping::srv::Duration_Response>()
{
  return yapping::srv::builder::Init_Duration_Response_iso_duration();
}

}  // namespace yapping

#endif  // YAPPING__SRV__DETAIL__DURATION__BUILDER_HPP_
