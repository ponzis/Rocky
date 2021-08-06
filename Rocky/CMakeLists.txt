cmake_minimum_required(VERSION 3.16)
project(Rocky)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES src/Rocky/Application.cpp)

add_library(Rocky SHARED ${SOURCES})
target_include_directories(Rocky INTERFACE include)

IF (WIN32)
    add_compile_definitions(ROCKY_PLATFORM_WINDOWS)
ENDIF()
add_compile_definitions(ROCKY_BUILD_DLL)

