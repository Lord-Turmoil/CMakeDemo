# ====================================================================
# main target
# ====================================================================

project(c3)

set(TARGET_NAME ${PROJECT_NAME})

# --------------------------------------------------------------------
# Source files and build options
# --------------------------------------------------------------------

file(GLOB_RECURSE SRC_LIST CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/src/*.cpp")
add_executable(${TARGET_NAME} ${SRC_LIST})

# --------------------------------------------------------------------
# Target properties
# --------------------------------------------------------------------

if(C3_ENABLE_ASSERTION)
    target_compile_definitions(${TARGET_NAME} PUBLIC C3_ENABLE_ASSERT)
else()
    message(WARNING "Assertion disabled for ${PROJECT_NAME}")
endif()

# enable extra warnings if build as master project
if(C3_MASTER_PROJECT)
    c3_enable_warnings(${TARGET_NAME})
endif()

target_include_directories(
    ${TARGET_NAME}
    PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include
)
