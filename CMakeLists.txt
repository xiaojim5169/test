cmake_minimum_required(VERSION 3.17)
project(test)

set(CMAKE_CXX_STANDARD 11)

add_executable(test list.c)
add_executable(sort sort.c)
add_executable(mid mid.c )
add_executable(dynamic dynamic_program.c)
add_executable(array array.c)