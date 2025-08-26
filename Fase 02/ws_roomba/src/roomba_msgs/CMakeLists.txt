cmake_minimum_required(VERSION 3.8)
project(roomba_msgs)

# Seguridad de compilador
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
if(NOT CMAKE_C_EXTENSIONS)
  set(CMAKE_C_EXTENSIONS OFF)
endif()
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()
if(NOT CMAKE_CXX_EXTENSIONS)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)

set(MSG_FILES
  "msg/Movement.msg"
  "msg/Security.msg"
  "msg/Power.msg"
  "msg/Misc.msg"
  "msg/State.msg"
)

set(SRV_FILES
  "srv/Connect.srv"
  "srv/Priority.srv"
  "srv/Reconfigure.srv"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${MSG_FILES}
  ${SRV_FILES}
  DEPENDENCIES geometry_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
