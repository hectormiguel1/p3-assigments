cmake_minimum_required(VERSION 3.14)
project(Primes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Primes main.cpp PrimeSequence.cpp PrimeSequence.h)