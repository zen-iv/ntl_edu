cmake_minimum_required(VERSION 3.22.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

project (netology_hw2.11.3_cmake_dll)

add_library (Leaver_dll SHARED Leaver.h Leaver.cpp)

add_executable (netology_hw_Exe netology_hw2.11.3_app.cpp)

target_link_libraries (netology_hw_Exe Leaver_dll)