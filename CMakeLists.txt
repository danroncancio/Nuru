cmake_minimum_required(VERSION 3.22)
project(Nuru)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/glfw)

file(GLOB NURU_SRC Nuru/*.cpp)
file(GLOB GLFW_SRC libs/glfw)
file(GLOB IMGUI_SRC libs/imgui/*.cpp)
file(GLOB IMGUI_BACKENDS_SRC libs/imgui/backends/imgui_impl_glfw.cpp libs/imgui/backends/imgui_impl_opengl3.cpp)

add_executable(Nuru App/NuruApp.cpp libs/glad/src/gl.c ${NURU_SRC} ${IMGUI_SRC} ${IMGUI_BACKENDS_SRC})

target_include_directories(Nuru PUBLIC libs/glfw/include)
target_include_directories(Nuru PUBLIC libs/glad/include)
target_include_directories(Nuru PUBLIC libs/imgui)
target_include_directories(Nuru PUBLIC libs/imgui/backends)
target_include_directories(Nuru PUBLIC Nuru)

target_link_libraries(Nuru PUBLIC glfw)