cmake_minimum_required(VERSION 3.14)
project(Bank)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bank main.cpp Bank.cpp Bank.h Account.cpp Account.h Owner.cpp Owner.h Date.cpp Date.h)