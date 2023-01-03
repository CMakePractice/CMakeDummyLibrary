cmake_minimum_required(VERSION 3.15)

project(CMakeDummyLibrary)

add_library(${PROJECT_NAME})
add_subdirectory(src)
target_include_directories(${PROJECT_NAME} PUBLIC include)


