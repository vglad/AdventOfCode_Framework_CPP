cmake_minimum_required(VERSION 3.5)
project(LibAoC)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(INCLUDE_DIRS ../../include/detail ../../include/lib/interface ../../include/lib ../../include/lib/days)

add_library(libAoC SHARED STATIC
        ../../include/lib/interface/IDay.hpp
        ../../include/lib/Day.hpp Day.cpp
        ../../include/lib/days/Day01.hpp days/Day01.cpp
        ../../include/lib/days/Day02.hpp days/Day02.cpp
        ../../include/lib/days/Day03.hpp days/Day03.cpp
        ../../include/lib/days/Day04.hpp days/Day04.cpp
        ../../include/lib/days/Day05.hpp days/Day05.cpp
        ../../include/lib/days/Day06.hpp days/Day06.cpp
        ../../include/lib/days/Day07.hpp days/Day07.cpp
        ../../include/lib/days/Day08.hpp days/Day08.cpp
        ../../include/lib/days/Day09.hpp days/Day09.cpp
        ../../include/lib/days/Day10.hpp days/Day10.cpp
        ../../include/lib/days/Day11.hpp days/Day11.cpp
        ../../include/lib/days/Day12.hpp days/Day12.cpp
        ../../include/lib/days/Day13.hpp days/Day13.cpp
        ../../include/lib/days/Day14.hpp days/Day14.cpp
        ../../include/lib/days/Day15.hpp days/Day15.cpp
        ../../include/lib/days/Day16.hpp days/Day16.cpp
        ../../include/lib/days/Day17.hpp days/Day17.cpp
        ../../include/lib/days/Day18.hpp days/Day18.cpp
        ../../include/lib/days/Day19.hpp days/Day19.cpp
        ../../include/lib/days/Day20.hpp days/Day20.cpp
        ../../include/lib/days/Day21.hpp days/Day21.cpp
        ../../include/lib/days/Day22.hpp days/Day22.cpp
        ../../include/lib/days/Day23.hpp days/Day23.cpp
        ../../include/lib/days/Day24.hpp days/Day24.cpp
        ../../include/lib/days/Day25.hpp days/Day25.cpp
        ../../include/lib/Factory.hpp Factory.cpp
        )

target_include_directories(libAoC PRIVATE ${INCLUDE_DIRS})
