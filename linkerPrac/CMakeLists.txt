cmake_minimum_required(VERSION 3.1)
project(prj_first VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(themain mymain.cpp)
add_library(thetools tools.cpp)
target_link_libraries(themain thetools)