cmake_minimum_required(VERSION 3.27)
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-stack_size,1000000")
project(cppcon)

set(CMAKE_CXX_STANDARD 14)

add_executable(move_semantics move_semantics.cpp)
