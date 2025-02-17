cmake_minimum_required(VERSION 3.31.5)

project(src)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(menu)
add_subdirectory(sort)

include_directories(menu)
include_directories(sort)