cmake_minimum_required(VERSION 3.22.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project (netology_hw2.10.2_cmake)
add_library (fig_lib
Figure.cpp
Equilateral_triangle.cpp
Isosceles_triangle.cpp
Parallelogram.cpp
Quadrilateral.cpp
Rectangle.cpp
Rhombus.cpp
Right_triangle.cpp
Square.cpp
Triangle.cpp
Uncorrect_Figure.cpp)

add_executable (netology_hw2.10.2_cmake netology_hw2.10.2.cpp)

target_link_libraries (netology_hw2.10.2_cmake fig_lib)