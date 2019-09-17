cmake_minimum_required(VERSION 3.14)
project(Bank C)

set(CMAKE_C_STANDARD 90)

add_executable(Bank main.c owner.c date.c owner.h date.h Account.c Account.h)