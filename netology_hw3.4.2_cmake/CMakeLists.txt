# CMakeList.txt: проект CMake для netology_hw3.4.2_cmake; включите исходный код и определения,
# укажите здесь логику для конкретного проекта
# TODO: Добавьте тесты и целевые объекты, если это необходимо.

cmake_minimum_required(VERSION 3.22.0)

set(CMAKE_CXX_STANDARD 17)

project (TEST)

# Добавьте источник в исполняемый файл этого проекта.
add_subdirectory(../Catch2 Catch2_build)
add_executable(TEST netology_hw3.4.2_cmake.cpp netology_hw3.4.2_cmake.h  "Double_linked_list.cpp")
target_link_libraries(TEST PRIVATE Catch2::Catch2)