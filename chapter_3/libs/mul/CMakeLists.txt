cmake_minimum_required(VERSION 3.16)

project(mul)

add_library(${PROJECT_NAME} src/mul.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC include)
