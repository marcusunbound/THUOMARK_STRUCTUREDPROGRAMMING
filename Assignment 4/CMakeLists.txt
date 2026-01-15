cmake_minimum_required(VERSION 3.30)
project(Assignment4 C)

set(CMAKE_C_STANDARD 11)

add_executable(Assignment4 main.c
        assignment.h
        array_reverse.c
        sum_array.c
        unique_element.c
        min_max.c
        array_sort.c
        array_traverse.c)
