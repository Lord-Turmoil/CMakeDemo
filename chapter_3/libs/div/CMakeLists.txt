cmake_minimum_required(VERSION 3.16)

project(div)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE include)
