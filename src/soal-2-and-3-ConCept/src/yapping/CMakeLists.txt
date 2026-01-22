cmake_minimum_required(VERSION 3.5)
project(yapping)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# ===== SERVICE =====
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Duration.srv"
  DEPENDENCIES std_msgs
)

# ===== CLOCK NODE =====
add_executable(clock src/clock.cpp)
ament_target_dependencies(clock rclcpp std_msgs)
rosidl_target_interfaces(clock ${PROJECT_NAME} "rosidl_typesupport_cpp")

# ===== USER NODE =====
add_executable(user src/user.cpp)
ament_target_dependencies(user rclcpp std_msgs)
rosidl_target_interfaces(user ${PROJECT_NAME} "rosidl_typesupport_cpp")

# ===== WATCH NODE =====
add_executable(watch src/watch.cpp)
ament_target_dependencies(watch rclcpp std_msgs)
rosidl_target_interfaces(watch ${PROJECT_NAME} "rosidl_typesupport_cpp")

# ===== INSTALL =====
install(TARGETS
  clock
  user
  watch
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
