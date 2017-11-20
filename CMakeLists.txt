cmake_minimum_required (VERSION 2.6)

project (vibejs)

include_directories (src src/parser)
file (GLOB SRC_FILES src/main.cpp src/parser/*.cpp)

add_executable (vibe ${SRC_FILES})
