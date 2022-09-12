project(floating)
cmake_minimum_required(VERSION 2.8.2)

add_compile_options(-std=c++17)

if(UNIX AND NOT APPLE)
    set(LINUX TRUE)
endif()

enable_testing()

add_subdirectory(src)
