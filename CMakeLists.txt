cmake_minimum_required(VERSION 3.20)

project(ChebyMessenger LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(include)

add_executable(BubbleSort 
    src/Sorts/BubbleSort.cpp 
)