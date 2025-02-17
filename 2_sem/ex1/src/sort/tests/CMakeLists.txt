cmake_minimum_required(VERSION 3.31.5)

project(tests)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(../../lib/googletest googletest)

include_directories(../src)

add_executable(test test.cpp ../src/generate.cpp ../src/io.cpp ../src/sortings.cpp)

target_link_libraries(test gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(test)