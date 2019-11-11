cmake_minimum_required(VERSION 3.12)
project(strat01 C)

set(CMAKE_C_STANDARD 99)

add_executable(strat01 main.c customerModule.c customerModule.h)