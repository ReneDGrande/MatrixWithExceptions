cmake_minimum_required(VERSION 3.14)
project(Matrix)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Exception)

add_executable(Matrix
        Exception/CMakeLists.txt
        Exception/DimensionMismatchError.h
        Exception/DivideByZeroError.cpp
        Exception/DivideByZeroError.h
        Exception/MatrixDimensionMismatchError.cpp
        Exception/MatrixDimensionMismatchError.h
        Exception/MatrixError.cpp
        Exception/MatrixError.h
        Exception/MatrixInnerDimensionMismatchError.cpp
        Exception/MatrixInnerDimensionMismatchError.h
        Exception/MatrixOutOfBoundsError.cpp
        Exception/MatrixOutOfBoundsError.h
        Exception/OutOfBoundsError.h
        Exception/VectorDimensionMismatchError.cpp
        Exception/VectorDimensionMismatchError.h
        Exception/VectorOutOfBoundsError.cpp
        Exception/VectorOutOfBoundsError.h
        Matrix.cpp
        Matrix.h
        MatrixTypeDefs.h
        Vector.cpp
        Vector.h)
