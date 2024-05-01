cmake_minimum_required(VERSION 3.27)
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-stack_size,1000000")
project(learning_cpluscplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(learncpp_c5.1 chapter5/5.1.cpp)
add_executable(learncpp_c5.6 chapter5/5.6.cpp)
add_executable(learncpp_c5.9 chapter5/5.9.cpp)
add_executable(learncpp_c14.1 chapter14/14.1.cpp)
add_executable(learncpp_c19.1 chapter19/19.1.cpp)
add_executable(learncpp_c19.2 chapter19/19.2.cpp)
add_executable(learncpp_c19.3 chapter19/19.3.cpp)
