cmake_minimum_required(VERSION 3.7)
project(C101)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c math.h math.c)
add_executable(C101 ${SOURCE_FILES})