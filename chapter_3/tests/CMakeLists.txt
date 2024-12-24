# ====================================================================
# Unit tests
# ====================================================================

set(tests div_test mul_test)
set(libs div mul)

# add all tests with loop
foreach(test ${tests})
    add_executable(${test} ${test}.cpp)
    target_link_libraries(${test} ${libs})
    add_test(NAME ${test} COMMAND ${test})
endforeach()
