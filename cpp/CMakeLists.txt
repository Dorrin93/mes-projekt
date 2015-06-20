cmake_minimum_required(VERSION 3.2)
project(mes)

include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_BIN_DIR}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lm")

set(SOURCE_FILES main.cpp vi_flow.cxx)
add_executable(main ${SOURCE_FILES})

install(TARGETS main DESTINATION bin)
