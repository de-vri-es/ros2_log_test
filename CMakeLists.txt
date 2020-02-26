cmake_minimum_required(VERSION 3.9)
project(log_test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(${PROJECT_NAME}
	src/main.cpp
)
ament_target_dependencies(${PROJECT_NAME}
	rclcpp
)

install(TARGETS ${PROJECT_NAME} DESTINATION "lib/${PROJECT_NAME}")
