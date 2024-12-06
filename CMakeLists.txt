cmake_minimum_required(VERSION 3.29)
project(memory_gestion C)

set(CMAKE_C_STANDARD 11)

add_executable(memory_gestion main.c
        bookrelated.c
        bookrelated.h)
