cmake_minimum_required(VERSION 3.24)
project(Skillbox_32)

set(CMAKE_CXX_STANDARD 14)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(src)
add_subdirectory(nlohmann_json)



