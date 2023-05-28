cmake_minimum_required(VERSION 3.23)
project(myproject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(myproject
        main.cpp
        consistent_hash.cpp
        consistent_hash.h
        SkipList.h)
