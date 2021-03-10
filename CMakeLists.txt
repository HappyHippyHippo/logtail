cmake_minimum_required(VERSION 3.17)
project(logtail)
add_subdirectory( lib/json )

set(CMAKE_CXX_STANDARD 14)

add_executable(logtail main.cpp)
target_link_libraries( logtail PRIVATE nlohmann_json )
