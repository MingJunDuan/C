cmake_minimum_required(VERSION 3.8)
project(hello_world)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c MyFunction3.h)
add_executable(hello_world ${SOURCE_FILES})