cmake_minimum_required (VERSION 3.5)
project(Main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(SOURCE_FILES main.cpp)
set(INCLUDE_DIRS ../include/detail ../include/interface ../include/lib)

add_executable(main ${SOURCE_FILES})
target_link_libraries(main PRIVATE libAoC)
target_include_directories(main PRIVATE ${INCLUDE_DIRS})

configure_file(../data/2019/day01.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day01.txt COPYONLY)
configure_file(../data/2019/day02.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day02.txt COPYONLY)
configure_file(../data/2019/day03.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day03.txt COPYONLY)
