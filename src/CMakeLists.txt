cmake_minimum_required (VERSION 3.5)
project(Main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(SOURCE_FILES main.cpp)

configure_file( ../data/2019day01.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019day01.txt COPYONLY)
configure_file( ../data/2019day02.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019day02.txt COPYONLY)
configure_file( ../data/2019day03.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019day03.txt COPYONLY)


add_executable(main ${SOURCE_FILES})
target_link_libraries(main PRIVATE libAoC)
target_include_directories(main PRIVATE
        ../include/detail
        ../include/interface
        ../include/lib)
