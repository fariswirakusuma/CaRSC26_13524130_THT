// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yapping:srv/Duration.idl
// generated code does not contain a copyright notice

#ifndef YAPPING__SRV__DETAIL__DURATION__TRAITS_HPP_
#define YAPPING__SRV__DETAIL__DURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yapping/srv/detail/duration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yapping
{

namespace srv
{

inline void to_flow_style_yaml(
  const Duration_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_time
  {
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: end_time
  {
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Duration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << "\n";
  }

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Duration_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace yapping

namespace rosidl_generator_traits
{

[[deprecated("use yapping::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yapping::srv::Duration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  yapping::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yapping::srv::to_yaml() instead")]]
inline std::string to_yaml(const yapping::srv::Duration_Request & msg)
{
  return yapping::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yapping::srv::Duration_Request>()
{
  return "yapping::srv::Duration_Request";
}

template<>
inline const char * name<yapping::srv::Duration_Request>()
{
  return "yapping/srv/Duration_Request";
}

template<>
struct has_fixed_size<yapping::srv::Duration_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yapping::srv::Duration_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yapping::srv::Duration_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace yapping
{

namespace srv
{

inline void to_flow_style_yaml(
  const Duration_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: iso_duration
  {
    out << "iso_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.iso_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Duration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: iso_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iso_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.iso_duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Duration_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace yapping

namespace rosidl_generator_traits
{

[[deprecated("use yapping::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yapping::srv::Duration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  yapping::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yapping::srv::to_yaml() instead")]]
inline std::string to_yaml(const yapping::srv::Duration_Response & msg)
{
  return yapping::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yapping::srv::Duration_Response>()
{
  return "yapping::srv::Duration_Response";
}

template<>
inline const char * name<yapping::srv::Duration_Response>()
{
  return "yapping/srv/Duration_Response";
}

template<>
struct has_fixed_size<yapping::srv::Duration_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yapping::srv::Duration_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yapping::srv::Duration_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yapping::srv::Duration>()
{
  return "yapping::srv::Duration";
}

template<>
inline const char * name<yapping::srv::Duration>()
{
  return "yapping/srv/Duration";
}

template<>
struct has_fixed_size<yapping::srv::Duration>
  : std::integral_constant<
    bool,
    has_fixed_size<yapping::srv::Duration_Request>::value &&
    has_fixed_size<yapping::srv::Duration_Response>::value
  >
{
};

template<>
struct has_bounded_size<yapping::srv::Duration>
  : std::integral_constant<
    bool,
    has_bounded_size<yapping::srv::Duration_Request>::value &&
    has_bounded_size<yapping::srv::Duration_Response>::value
  >
{
};

template<>
struct is_service<yapping::srv::Duration>
  : std::true_type
{
};

template<>
struct is_service_request<yapping::srv::Duration_Request>
  : std::true_type
{
};

template<>
struct is_service_response<yapping::srv::Duration_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YAPPING__SRV__DETAIL__DURATION__TRAITS_HPP_
