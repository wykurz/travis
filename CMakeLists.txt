cmake_minimum_required(VERSION 2.8)
project("travis")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

include_directories(${travis_SOURCE_DIR})
file(GLOB travis_src "*.cpp")
add_executable(travis ${travis_src})
