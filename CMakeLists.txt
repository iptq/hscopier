cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(hscopier CXX)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0 gmodule-2.0 gmodule-export-2.0)

add_executable(
    hscopier
    src/main.cpp
    src/signals.cpp
)

add_subdirectory(libosu)
target_include_directories(hscopier PUBLIC libosu/include ${GTK3_INCLUDE_DIRS})
target_link_libraries(hscopier osu ${GTK3_LIBRARIES})
