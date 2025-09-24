cmake_minimum_required(VERSION 3.31)
project(week5_quiz)

set(CMAKE_CXX_STANDARD 20)

add_executable(week5_quiz main.cpp
        problem1.cpp
        problem2.cpp
        problem3.cpp
        problem4.cpp
        problem5.cpp
        problem6.cpp
        problem7.cpp
        cmake-build-debug/Testing/problem8.cpp
        problem9.cpp
        problem10.cpp)
