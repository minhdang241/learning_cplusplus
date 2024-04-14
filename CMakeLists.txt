cmake_minimum_required(VERSION 3.27)
project(learning_cpluscplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(learning_cpluscplus_c1 chapter1/main.cpp std_lib_facilities.h)
add_executable(learning_cpluscplus_c2 chapter2/main.cpp std_lib_facilities.h)
add_executable(learning_cpluscplus_c3 chapter3/main.cpp std_lib_facilities.h)
add_executable(learning_cpluscplus_c4 chapter4/main.cpp std_lib_facilities.h)
add_executable(learning_cpluscplus_c5 chapter5/main.cpp std_lib_facilities.h)
add_executable(learning_cpluscplus_c8 chapter8/main.cpp std_lib_facilities.h)
add_executable(learning_cpluscplus_c20 chapter20/main.cpp std_lib_facilities.h)
add_executable(learning_cpluscplus_misc misc/main.cpp std_lib_facilities.h
        misc/macros.h)
add_executable(learning_cpluscplus_misc_auto_kw misc/auto_example.cpp std_lib_facilities.h
        misc/macros.h)
