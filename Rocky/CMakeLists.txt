cmake_minimum_required(VERSION 3.16)
project(Rocky VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

set(ROCKY_SRCS
        src/Rocky/Application.cpp
        src/Rocky/Log.cpp
        src/Rocky/Layer.cpp
        src/Rocky/LayerStack.cpp

        src/Rocky/ImGui/ImGuiLayer.cpp

        src/Platform/OpenGL/ImGuiOpenGLRenderer.cpp

        src/Platform/Windows/WindowsWindow.cpp)

set(ROCKY_ALL_HEADERS
        src/Rocky.h
        src/rockypch.h

        src/Rocky/Core.h
        src/Rocky/Log.h
        src/Rocky/Window.h
        src/Rocky/EntryPoint.h
        src/Rocky/Layer.h
        src/Rocky/LayerStack.h

        src/Rocky/Events/Event.h
        src/Rocky/Events/ApplicationEvent.h
        src/Rocky/Events/KeyEvent.h
        src/Rocky/Events/MouseEvent.h

        src/Rocky/ImGui/ImGuiLayer.h

        src/Platform/OpenGL/ImGuiOpenGLRenderer.h

        src/Platform/Windows/WindowsWindow.h)


add_library(Rocky SHARED ${ROCKY_SRCS} ${ROCKY_ALL_HEADERS})

IF (WIN32)
    add_compile_definitions(ROCKY_PLATFORM_WINDOWS)
    add_compile_definitions(ROCKY_BUILD_DLL)
ENDIF()
add_compile_definitions(ROCKY_ENABLE_ASSERTS)



add_subdirectory(vendor/spdlog)
target_link_libraries(Rocky PUBLIC spdlog)

add_subdirectory(vendor/GLFW)
target_link_libraries(Rocky PRIVATE glfw)


add_compile_definitions(GLFW_INCLUDE_NONE)
add_subdirectory(vendor/Glad)
target_link_libraries(Rocky PRIVATE glad)

add_subdirectory(vendor)
target_link_libraries(Rocky PRIVATE imgui)

target_precompile_headers(Rocky PUBLIC src/rockypch.h)
target_include_directories(Rocky PUBLIC src)

target_compile_features(Rocky PRIVATE cxx_std_11)

