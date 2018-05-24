cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(hscopier CXX)

add_executable(
    hscopier
    src/main.cpp
)

add_subdirectory(libosu)
target_include_directories(hscopier PUBLIC libosu/include)
target_link_libraries(hscopier osu)
