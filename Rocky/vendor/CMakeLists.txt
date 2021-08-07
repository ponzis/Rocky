cmake_minimum_required(VERSION 3.0)
project(ImGui LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(imgui
        imgui/imconfig.h
        imgui/imgui.h
        imgui/imgui.cpp
        imgui/imgui_draw.cpp
        imgui/imgui_internal.h
        imgui/imgui_tables.cpp
        imgui/imgui_widgets.cpp
        imgui/imstb_rectpack.h
        imgui/imstb_textedit.h
        imgui/imstb_truetype.h
        imgui/imgui_demo.cpp
        )

target_include_directories(imgui PUBLIC imgui/)