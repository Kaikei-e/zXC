cmake_minimum_required(VERSION 3.26)
project(zXC C)

set(CMAKE_C_STANDARD 23)

add_executable(zXC main.c
        src/fileExplorer/search.c
        src/fileExplorer/search.h)
