cmake_minimum_required(VERSION 3.2)
project(ROT13)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(ROT13 ${SOURCE_FILES})