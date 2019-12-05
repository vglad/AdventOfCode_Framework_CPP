cmake_minimum_required (VERSION 3.5)
project(AllTests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(SOURCE_FILES testMain.cpp
        2019/Day01_Tests.cpp
        2019/Day02_Tests.cpp
        2019/Day03_Tests.cpp
        2019/Day04_Tests.cpp
        2019/Day05_Tests.cpp
        2019/Day06_Tests.cpp
        2019/Day07_Tests.cpp
        2019/Day08_Tests.cpp
        2019/Day09_Tests.cpp
        2019/Day10_Tests.cpp
        2019/Day11_Tests.cpp
        2019/Day12_Tests.cpp
        2019/Day13_Tests.cpp
        2019/Day14_Tests.cpp
        2019/Day15_Tests.cpp
        2019/Day16_Tests.cpp
        2019/Day17_Tests.cpp
        2019/Day18_Tests.cpp
        2019/Day19_Tests.cpp
        2019/Day20_Tests.cpp
        2019/Day21_Tests.cpp
        2019/Day22_Tests.cpp
        2019/Day23_Tests.cpp
        2019/Day24_Tests.cpp
        2019/Day25_Tests.cpp
        )
set(INCLUDE_DIRS ../include/detail ../include/lib/interface ../include/lib ../include/lib/days)
set(DATA_DIR 2019/data)

add_executable (allTests ${SOURCE_FILES})
target_link_libraries(allTests PRIVATE catch2 libAoC)
target_include_directories(allTests PRIVATE ${INCLUDE_DIRS})

#Day01
set(DAY day01)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day02
set(DAY day02)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day03
set(DAY day03)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_4.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_4.txt COPYONLY)

#Day04
set(DAY day04)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day05
set(DAY day05)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day06
set(DAY day06)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day07
set(DAY day07)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day08
set(DAY day08)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day09
set(DAY day09)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day10
set(DAY day10)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day11
set(DAY day11)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day12
set(DAY day12)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day13
set(DAY day13)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day14
set(DAY day14)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day15
set(DAY day15)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day16
set(DAY day16)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day17
set(DAY day17)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day18
set(DAY day18)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day19
set(DAY day19)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day20
set(DAY day20)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day21
set(DAY day21)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day22
set(DAY day22)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day23
set(DAY day23)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day24
set(DAY day24)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)

#Day25
set(DAY day25)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_1.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_1.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_2.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_2.txt COPYONLY)
configure_file( ${DATA_DIR}/${DAY}/${DAY}_3.txt ${CMAKE_CURRENT_BINARY_DIR}/${DATA_DIR}/${DAY}/${DAY}_3.txt COPYONLY)
