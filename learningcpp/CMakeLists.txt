cmake_minimum_required(VERSION 3.27)
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-stack_size,1000000")
project(learning_cpluscplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(learncpp_c19.1 chapter19/19.1.cpp)
add_executable(learncpp_c19.2 chapter19/19.2.cpp)
