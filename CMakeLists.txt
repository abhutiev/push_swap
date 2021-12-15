cmake_minimum_required(VERSION 3.19)
project(push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(push_swap
        src/atoi.c
        src/main.c
        src/split.c
        src/stack.c
        src/utils.c
        src/validation.c
        push_swap.h)
