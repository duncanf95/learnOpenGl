cmake_minimum_required(VERSION 4.0)
project(learnOpenGL)

set(CMAKE_CXX_STANDARD 20)

add_executable(learnOpenGL src/main.cpp
        src/renderer/shader.cpp
        src/renderer/shader.h)

add_subdirectory(libs/glfw)
add_subdirectory(libs/glad)

target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} glad)
