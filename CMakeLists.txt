cmake_minimum_required(VERSION 3.20)

project(SortingAlgorithms LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(include)


block() # Libs
    add_library(SortingAlgorithms INTERFACE)
    target_include_directories(SortingAlgorithms INTERFACE 
        ${CMAKE_CURRENT_SOURCE_DIR}/include/SortingAlgorithms
    )

    add_library(utils-lib STATIC 
        src/Utils/VectorUtils.cpp
    )
    target_include_directories(utils-lib
        PUBLIC ${PROJECT_SOURCE_DIR}/include
        PRIVATE ${PROJECT_SOURCE_DIR}/src
    )
endblock()

block() # Testers
    add_executable(BubbleSort 
        src/Sorts/BubbleSort.cpp 
    )
    target_link_libraries(BubbleSort PRIVATE 
        SortingAlgorithms
        utils-lib
    )

    add_executable(InsertionSort 
        src/Sorts/InsertionSort.cpp 
    )
    target_link_libraries(InsertionSort PRIVATE 
        SortingAlgorithms
        utils-lib
    )

    add_executable(SelectionSort
        src/Sorts/SelectionSort.cpp
    )
    target_link_libraries(SelectionSort PRIVATE 
        SortingAlgorithms
        utils-lib
    )
endblock()