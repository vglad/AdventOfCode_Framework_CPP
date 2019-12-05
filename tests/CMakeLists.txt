cmake_minimum_required (VERSION 3.5)
project(AllTests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(SOURCE_FILES testMain.cpp All_Tests.cpp)
set(INCLUDE_DIRS ../include/detail ../include/interface ../include/lib)

add_executable (allTests ${SOURCE_FILES})
target_link_libraries(allTests PRIVATE catch2 libAoC)
target_include_directories(allTests PRIVATE ${INCLUDE_DIRS})

#Day01
configure_file( data/2019/day01/day01_1.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day01/day01_1.txt COPYONLY)
configure_file( data/2019/day01/day01_2.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day01/day01_2.txt COPYONLY)
configure_file( data/2019/day01/day01_3.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day01/day01_3.txt COPYONLY)

#Day03
configure_file( data/2019/day03/day03_3.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day03/day03_3.txt COPYONLY)
configure_file( data/2019/day03/day03_1.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day03/day03_1.txt COPYONLY)
configure_file( data/2019/day03/day03_2.txt ${CMAKE_CURRENT_BINARY_DIR}/data/2019/day03/day03_2.txt COPYONLY)
