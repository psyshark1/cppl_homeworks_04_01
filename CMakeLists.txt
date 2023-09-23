cmake_minimum_required (VERSION 3.8)

project (01)

add_executable (01 01.cpp Lists.cpp Lists.h)

add_subdirectory(catch2)

add_executable (01test 01test.cpp Lists.cpp Lists.h)

target_link_libraries(01test PRIVATE Catch2::Catch2)