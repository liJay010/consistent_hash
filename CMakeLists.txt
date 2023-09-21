cmake_minimum_required(VERSION 3.0)
project(consistent_hash)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include_directories(.)

add_executable(consistent_hash
        main.cpp
        consistent_hash.cpp)
