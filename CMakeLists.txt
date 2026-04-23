cmake_minimum_required(VERSION 3.28.3)
project(epubreader)

# Add the main executable
add_executable(epubreader src/main.cpp)

add_subdirectory(./glfw)
target_link_libraries(epubreader glfw)
find_package(OpenGL REQUIRED)
target_link_libraries(epubreader OpenGL::GL)