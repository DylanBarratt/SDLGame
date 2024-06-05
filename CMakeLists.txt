cmake_minimum_required(VERSION 3.28)

project(SDLGame)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(SDL2 REQUIRED)
include_directories(src/)

# IK this is bad... - Dylan
file(GLOB SOURCES "src/*.cpp")

add_executable(SDLGame ${SOURCES})
target_link_libraries(SDLGame ${SDL2_LIBRARIES})
