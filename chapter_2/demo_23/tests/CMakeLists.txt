add_executable(add_test add_test.cpp)
target_link_libraries(add_test PRIVATE add)
add_test(NAME add_test COMMAND add_test)
