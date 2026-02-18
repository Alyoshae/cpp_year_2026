cmake_minimum_required(VERSION 3.10)

if(APPLE)
    list(APPEND CMAKE_PREFIX_PATH "/opt/homebrew")
endif()

project(MiMotorGrafico VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3 COMPONENTS Graphics Window System Audio REQUIRED)

add_executable(MiApp 07/sfml2.cpp)

target_link_libraries(MiApp 
    SFML::Graphics 
    SFML::Window 
    SFML::System 
    SFML::Audio
)