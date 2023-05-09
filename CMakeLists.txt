
cmake_minimum_required(VERSION 3.25)

project(lib_test)

find_package(my_lib)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE my_lib::my_lib)
