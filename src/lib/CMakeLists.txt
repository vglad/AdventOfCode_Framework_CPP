cmake_minimum_required(VERSION 3.5)
project(LibAoC)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(INCLUDE_DIRS ../../include/detail ../../include/interface ../../include/lib)

add_library(libAoC SHARED STATIC
        ../../include/interface/IDay.hpp
        ../../include/lib/Day.hpp Day.cpp
        ../../include/lib/Day01.hpp Day01.cpp
        ../../include/lib/Day02.hpp Day02.cpp
        ../../include/lib/Day03.hpp Day03.cpp
        ../../include/lib/Factory.hpp Factory.cpp
        )

target_include_directories(libAoC PRIVATE ${INCLUDE_DIRS})
