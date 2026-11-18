cmake_minimum_required(VERSION 4.2)
project(projeto C)

set(CMAKE_C_STANDARD 11)

add_executable(projeto main.c
        jogo.c
        jogo.h)
