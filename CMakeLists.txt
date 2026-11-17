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
    block() # basic
        add_executable(BubbleSort 
            src/Sorts/basic/BubbleSort.cpp 
        )
        target_link_libraries(BubbleSort PRIVATE 
            SortingAlgorithms
            utils-lib
        )

        add_executable(InsertionSort 
            src/Sorts/basic/InsertionSort.cpp 
        )
        target_link_libraries(InsertionSort PRIVATE 
            SortingAlgorithms
            utils-lib
        )

        add_executable(SelectionSort
            src/Sorts/basic/SelectionSort.cpp
        )
        target_link_libraries(SelectionSort PRIVATE 
            SortingAlgorithms
            utils-lib
        )

        add_executable(CombSort
            src/Sorts/basic/CombSort.cpp
        )
        target_link_libraries(CombSort PRIVATE 
            SortingAlgorithms
            utils-lib
        )

        add_executable(CountingSort
            src/Sorts/basic/CountingSort.cpp
        )
        target_link_libraries(CountingSort PRIVATE 
            SortingAlgorithms
            utils-lib
        )
    endblock()

    block() # hybrid
        add_executable(CombInsertSort
            src/Sorts/hybrid/CombInsertSort.cpp 
        )
        target_link_libraries(CombInsertSort PRIVATE 
            SortingAlgorithms
            utils-lib
        )
    endblock()
endblock()