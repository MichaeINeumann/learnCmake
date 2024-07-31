cmake_minimum_required(VERSION 3.30)

project(
    HelloWorld
    VERSION 0.0.0
    LANGUAGES C CXX)

    set(EXECUTABLE_NAME test)
    set(LIBRARY_NAME Lib)

    add_library(${LIBRARY_NAME} myLib.cpp)

    add_executable(${EXECUTABLE_NAME} main.cpp)

    target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})
