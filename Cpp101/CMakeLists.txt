cmake_minimum_required(VERSION 3.7)
project(Cpp101)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Square.cpp Square.h)
add_executable(Cpp101 ${SOURCE_FILES})