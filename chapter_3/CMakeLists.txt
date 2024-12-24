# ====================================================================
# Top-level CMakeLists.txt file
# ====================================================================

cmake_minimum_required(VERSION 3.16)

include(cmake/utils.cmake)

# --------------------------------------------------------------------
# Project configuration
# --------------------------------------------------------------------

c3_extract_version()

project(c3
    VERSION ${C3_VERSION}
    DESCRIPTION "A complete example of a CMake project"
    LANGUAGES CXX)
set(PROJECT_FULLNAME "chapter_3")

# some message
message(STATUS "Building ${PROJECT_FULLNAME} ${C3_VERSION}")

# optional features
option(C3_BUILD_TEST "Build unit tests" ON)
option(C3_ENABLE_ASSERTION "Enable assertion" OFF)

# --------------------------------------------------------------------
# Project options
# --------------------------------------------------------------------

# set default build type
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose Release or Debug" FORCE)
endif()

# a helper variable to check if the project is built as a master project
if(NOT DEFINED C3_MASTER_PROJECT)
    if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
        set(C3_MASTER_PROJECT ON)
        message(STATUS "${PROJECT_FULLNAME} is built as the master project")
    else()
        set(C3_MASTER_PROJECT OFF)
        message(STATUS "${PROJECT_FULLNAME} is built as a sub-project")
    endif()
endif()

# --------------------------------------------------------------------
# Global compiler settings
# --------------------------------------------------------------------

set(CMAKE_CXX_STANDARD 17)

# --------------------------------------------------------------------
# 3rd-party dependencies
# --------------------------------------------------------------------

add_subdirectory(libs)
message(STATUS "3rd-party dependencies: ${C3_VENDORS}")

# --------------------------------------------------------------------
# main target
# --------------------------------------------------------------------

add_subdirectory(c3)
# this is why we need to export the list of vendors
target_link_libraries(c3 ${C3_VENDORS})

# --------------------------------------------------------------------
# Demo and tests
# --------------------------------------------------------------------

if(C3_BUILD_TEST)
    enable_testing()
    add_subdirectory(tests)
else()
    message(STATUS "Skipping ${PROJECT_FULLNAME} unit tests")
endif()
