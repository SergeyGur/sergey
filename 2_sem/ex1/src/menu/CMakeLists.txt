cmake_minimum_required(VERSION 3.31.5)

project(menu)

set(CMAKE_CXX_STANDARD 11)

set(HEADERS
    src/menu.hpp
    src/menu_func.hpp
    src/menu_items.hpp
)

set(SOURCES
    main.cpp 
    src/menu_func.cpp
    src/menu_items.cpp
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})