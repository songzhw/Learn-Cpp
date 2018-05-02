cmake_minimum_required(VERSION 3.7)
project(C_Trap)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES NumberTrap.c NumberTrap.h mainc.c)
add_executable(C_Trap ${SOURCE_FILES})