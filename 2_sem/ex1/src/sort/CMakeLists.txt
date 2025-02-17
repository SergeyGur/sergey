cmake_minimum_required(VERSION 3.31.5)

project(sort)

set(CMAKE_CXX_STANDARD 11)

set(HEADERS
    src/generate.hpp
    src/io.hpp
    src/sortings.hpp
)

set(SOURCES
    main.cpp 
    src/generate.cpp
    src/io.cpp
    src/sortings.cpp
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES}) 

add_subdirectory(tests)