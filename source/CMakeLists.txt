cmake_minimum_required(VERSION 3.2)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "This is first project"
        LANGUAGES CXX)
add_executable(HelloAppBinary main.cpp
                                src/server.cpp
                                src/client.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc)