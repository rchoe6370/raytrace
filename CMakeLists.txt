cmake_minimum_required(VERSION 3.10.0)
project(ray VERSION 0.1.0 LANGUAGES C CXX)

add_executable(ray main.cpp)

add_custom_command(
    TARGET ray POST_BUILD
    COMMENT "Generating image.ppm..."
    COMMAND $<TARGET_FILE:ray> > "${CMAKE_BINARY_DIR}/image.ppm"
)

