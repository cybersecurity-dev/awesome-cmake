cmake_minimum_required(VERSION 3.16)

project(cmake_helloworld
    VERSION 1.0
    DESCRIPTION "CMake HelloWorld"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(cmake_helloworld STATIC src/libmath_util.cpp)

target_include_directories(cmake_helloworld
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

if(MSVC)
    target_compile_options(cmake_helloworld PRIVATE /W4 /permissive-)
else()
    target_compile_options(cmake_helloworld PRIVATE -Wall -Wextra -Wpedantic)
endif()

# CMAKE Demo executable
add_executable(cmake_demo src/main.cpp)
target_link_libraries(cmake_demo PRIVATE cmake_helloworld)