cmake_minimum_required(VERSION 3.16)
project(Sandbox)

set(CMAKE_CXX_STANDARD 14)


add_executable(Sandbox ./src/main.cpp)

IF (WIN32)
    add_compile_definitions(ROCKY_PLATFORM_WINDOWS)
    add_custom_command(TARGET Sandbox
            POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:Rocky>
            $<TARGET_FILE_DIR:Sandbox>/$<TARGET_FILE_NAME:Rocky>)
ENDIF(WIN32)
add_compile_definitions(ROCKY_ENABLE_ASSERTS)

target_link_libraries(Sandbox PRIVATE Rocky)