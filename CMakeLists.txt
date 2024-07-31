cmake_minimum_required(VERSION 3.30)

project(
    CppProjectTemplate
    VERSION 0.1.2
    LANGUAGES C CXX)

    set(CMAKE_CXX_STANDARD          17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS        OFF)

    set(EXECUTABLE_NAME test)
    set(LIBRARY_NAME Lib)

    #option(COMPILE_EXECUTABLE "Wehther to compile the executable" ON)

    add_subdirectory(configured)
    add_subdirectory(src)

    #if(COMPILE_EXECUTABLE)
        add_subdirectory(app)
   #endif(COMPILE_EXECUTABLE)
