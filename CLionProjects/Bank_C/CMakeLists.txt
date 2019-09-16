cmake_minimum_required(VERSION 3.14)
project(Bank_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Bank_C main.c Bank.cpp Bank.h Owner.cpp Owner.h)