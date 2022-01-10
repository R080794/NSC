cmake_minimum_required(VERSION 3.2)
project(NSC_Project
        VERSION 0.0.1
        DESCRIPTION "This is a cross platform project "
        LANGUAGES CXX)

#add_subdirectory(WinPrj)
#add_subdirectory(LinuxPrj)
#add_subdirectory(MacPrj)

add_executable(WinPrj main.cpp
                        src/server.cpp
                        src/client.cpp)
target_compile_features(WinPrj PRIVATE cxx_std_20)
target_include_directories(WinPrj PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc/Windows)

add_executable(LinuxPrj main.cpp
                        src/server.cpp
                        src/client.cpp)
target_compile_features(LinuxPrj PRIVATE cxx_std_20)
target_include_directories(LinuxPrj PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc/Linux)

add_executable(MacPrj main.cpp
                        src/server.cpp
                        src/client.cpp)
target_compile_features(MacPrj PRIVATE cxx_std_20)
target_include_directories(MacPrj PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc/MacOs)