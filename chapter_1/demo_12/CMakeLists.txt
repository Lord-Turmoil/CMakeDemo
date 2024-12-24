cmake_minimum_required(VERSION 3.16)

project(demo_12)

# Add files manually
# add_executable(demo_12 src/main.cpp src/app.cpp)

# Or use GLOB to add files automatically
file(GLOB_RECURSE SRC_LIST CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/src/*.cpp")
add_executable(demo_12 ${SRC_LIST})

target_include_directories(demo_12 PRIVATE include)
