cmake_minimum_required(VERSION 3.30)

project(
    HelloWorld
    VERSION 0.0.0
    LANGUAGES C CXX)

    set(EXECUTABLE_NAME test)
    set(LIBRARY_NAME Lib)

    add_subdirectory(src)
    add_subdirectory(app)
