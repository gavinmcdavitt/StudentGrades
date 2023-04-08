cmake_minimum_required(VERSION 3.23)
project(StudentGrades)

set(CMAKE_CXX_STANDARD 11)

add_executable(StudentGrades main.cpp studentlist.cpp studentlist.h cmake-build-debug/ComputerScience.cpp cmake-build-debug/ComputerScience.h)
