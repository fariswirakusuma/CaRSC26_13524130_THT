// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yapping:srv/Duration.idl
// generated code does not contain a copyright notice

#ifndef YAPPING__SRV__DETAIL__DURATION__STRUCT_HPP_
#define YAPPING__SRV__DETAIL__DURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yapping__srv__Duration_Request __attribute__((deprecated))
#else
# define DEPRECATED__yapping__srv__Duration_Request __declspec(deprecated)
#endif

namespace yapping
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Duration_Request_
{
  using Type = Duration_Request_<ContainerAllocator>;

  explicit Duration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_time = "";
      this->end_time = "";
    }
  }

  explicit Duration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_alloc),
    end_time(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_time = "";
      this->end_time = "";
    }
  }

  // field types and members
  using _start_time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_time_type start_time;
  using _end_time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_time_type end_time;

  // setters for named parameter idiom
  Type & set__start_time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__end_time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yapping::srv::Duration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const yapping::srv::Duration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yapping::srv::Duration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yapping::srv::Duration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yapping::srv::Duration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yapping::srv::Duration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yapping::srv::Duration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yapping::srv::Duration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yapping::srv::Duration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yapping::srv::Duration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yapping__srv__Duration_Request
    std::shared_ptr<yapping::srv::Duration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yapping__srv__Duration_Request
    std::shared_ptr<yapping::srv::Duration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Duration_Request_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Duration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Duration_Request_

// alias to use template instance with default allocator
using Duration_Request =
  yapping::srv::Duration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace yapping


#ifndef _WIN32
# define DEPRECATED__yapping__srv__Duration_Response __attribute__((deprecated))
#else
# define DEPRECATED__yapping__srv__Duration_Response __declspec(deprecated)
#endif

namespace yapping
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Duration_Response_
{
  using Type = Duration_Response_<ContainerAllocator>;

  explicit Duration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iso_duration = "";
    }
  }

  explicit Duration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : iso_duration(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iso_duration = "";
    }
  }

  // field types and members
  using _iso_duration_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _iso_duration_type iso_duration;

  // setters for named parameter idiom
  Type & set__iso_duration(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->iso_duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yapping::srv::Duration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const yapping::srv::Duration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yapping::srv::Duration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yapping::srv::Duration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yapping::srv::Duration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yapping::srv::Duration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yapping::srv::Duration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yapping::srv::Duration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yapping::srv::Duration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yapping::srv::Duration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yapping__srv__Duration_Response
    std::shared_ptr<yapping::srv::Duration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yapping__srv__Duration_Response
    std::shared_ptr<yapping::srv::Duration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Duration_Response_ & other) const
  {
    if (this->iso_duration != other.iso_duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Duration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Duration_Response_

// alias to use template instance with default allocator
using Duration_Response =
  yapping::srv::Duration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace yapping

namespace yapping
{

namespace srv
{

struct Duration
{
  using Request = yapping::srv::Duration_Request;
  using Response = yapping::srv::Duration_Response;
};

}  // namespace srv

}  // namespace yapping

#endif  // YAPPING__SRV__DETAIL__DURATION__STRUCT_HPP_
