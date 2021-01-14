cmake_minimum_required(VERSION 3.17)
project(test_speed)

IF( NOT CMAKE_BUILD_TYPE )
    SET( CMAKE_BUILD_TYPE Release ... FORCE )
ENDIF()

set(CMAKE_CXX_STANDARD 20)

add_executable(test_speed main.cpp log_duration.h)