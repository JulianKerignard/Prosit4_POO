cmake_minimum_required(VERSION 3.29)
project(Prosit4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Prosit4 main.cpp
        Point.cpp
        Point.h
        Parcours.cpp
        Parcours.h)
