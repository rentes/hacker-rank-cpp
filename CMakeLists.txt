cmake_minimum_required(VERSION 3.6)
project(hacker_rank_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES STL/vector-sort.cpp STL/STL.h)

add_executable(hacker_rank_cpp ${SOURCE_FILES})