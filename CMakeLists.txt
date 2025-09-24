cmake_minimum_required(VERSION 3.31)
project(week5_quiz)

set(CMAKE_CXX_STANDARD 20)

add_executable(week5_quiz main.cpp
        cmake-build-debug/problem1.cpp
        cmake-build-debug/problem2.cpp
        cmake-build-debug/problem3.cpp
        cmake-build-debug/problem4.cpp
        cmake-build-debug/problem5.cpp
        cmake-build-debug/problem6.cpp
        cmake-build-debug/problem7.cpp
        cmake-build-debug/Testing/problem8.cpp
        cmake-build-debug/problem9.cpp
        cmake-build-debug/problem10.cpp)
