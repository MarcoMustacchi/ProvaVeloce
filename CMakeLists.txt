cmake_minimum_required(VERSION 3.10)
project(Prova)

## Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

## Enable compile commands generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

## Set the build type to Debug
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)  # Ensure Debug build type for debugging
endif()

## Specify the include directories (header files location)
include_directories(include)

## Specify the executable
add_executable(Prova src/main.cpp)

## Link any required libraries (if any)
# target_link_libraries(Prova library_dependencies)