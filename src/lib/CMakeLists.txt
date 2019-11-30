cmake_minimum_required(VERSION 3.5)
project(LibAOC2018)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(INCLUDE_DIRS ../../include/detail ../../include/lib)

add_library(days SHARED STATIC ../../include/lib/Days.hpp Days.cpp)
add_library(day01 SHARED STATIC ../../include/lib/Day01.hpp Day01.cpp)
add_library(day02 SHARED STATIC ../../include/lib/Day02.hpp Day02.cpp)
target_include_directories(days PRIVATE ${INCLUDE_DIRS})
target_include_directories(day01 PRIVATE ${INCLUDE_DIRS})
target_include_directories(day02 PRIVATE ${INCLUDE_DIRS})
