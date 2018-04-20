cmake_minimum_required(VERSION 3.9)
project(get_next_line_re C)

set(CMAKE_C_STANDARD 99)

add_executable(get_next_line_re main.c get_next_line.c get_next_line.h)