cmake_minimum_required (VERSION 2.6)

project (vibejs)

include_directories (parser)
file (GLOB SRC_FILES main.cpp parser/*.cpp)
add_executable (vibe ${SRC_FILES})
