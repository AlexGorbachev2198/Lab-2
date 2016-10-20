cmake_minimum_required(VERSION 3.6)
project(Lab2_Calculator_)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Calculator.cpp)
add_executable(Lab2_Calculator_ ${SOURCE_FILES})