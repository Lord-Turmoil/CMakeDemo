cmake_minimum_required(VERSION 3.16)

project(app_ho)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(
    ${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_LIST_DIR}/include
)
