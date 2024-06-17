cmake_minimum_required(VERSION 3.27)
project(concurrency_in_action_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(c1 chapter1/main.cpp)
add_executable(c2 chapter2/main.cpp)
add_executable(c2_pa chapter2/parallel_acc.cpp)
add_executable(c3_datarace chapter3/data_race.cpp)
add_executable(c3 chapter3/main.cpp)
