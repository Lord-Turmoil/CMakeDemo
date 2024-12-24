cmake_minimum_required(VERSION 3.16)

project(demo_22)

# Dependencies
add_subdirectory(lib)

# Main executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Link the app_ho library
target_link_libraries(${PROJECT_NAME} PRIVATE app_ho)
