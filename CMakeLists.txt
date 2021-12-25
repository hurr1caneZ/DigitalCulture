cmake_minimum_required(VERSION 3.20)
project(untitled21)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(googletest)

include_directories(googletest/googletest/include)
set(SOURCE_FILES test.cpp)
add_executable(untitled21 ${SOURCE_FILES})
target_link_libraries(untitled21 gtest gtest_main)

