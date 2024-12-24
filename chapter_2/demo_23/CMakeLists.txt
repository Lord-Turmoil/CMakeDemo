cmake_minimum_required(VERSION 3.16)

project(demo_23)

add_subdirectory(lib)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE add)

# Enable testing
enable_testing()
add_subdirectory(tests)
