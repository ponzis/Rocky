cmake_minimum_required(VERSION 3.16)
project(Rocky VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

set(ROCKY_SRCS
        src/Rocky/Application.cpp
        src/Rocky/Log.cpp
        )
set(ROCKY_ALL_HEADERS include/Rocky.h)


add_library(Rocky SHARED ${ROCKY_SRCS} ${ROCKY_ALL_HEADERS})

IF (WIN32)
    add_compile_definitions(ROCKY_PLATFORM_WINDOWS)
ENDIF(WIN32)
add_compile_definitions(ROCKY_BUILD_DLL)

add_subdirectory(vendor/spdlog)
target_link_libraries(Rocky PUBLIC spdlog)

target_include_directories(Rocky PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:include>)


target_compile_features(Rocky PUBLIC cxx_std_11)