cmake_minimum_required(VERSION 3.28)
project(AccelCompute)

set(CMAKE_CXX_STANDARD 11)

add_executable(AccelCompute
#        main.cpp
        MatrixAccel/main.cpp
#        MatrixAccel/demo.cpp
        MatrixAccel/Matrix.cpp
        MatrixAccel/Matrix.h
)
