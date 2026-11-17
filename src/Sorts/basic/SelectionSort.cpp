#include "Utils/VectorUtils-inl.hpp"
#include "Utils/VectorUtils.hpp"
#include <SortingAlgorithms/SortingAlgorithms.hpp>
#include <cstddef>
#include <iostream>
#include <vector>
#include <chrono>

int main()
{
    constexpr size_t TESTS_COUNT = 100'000; 
    std::vector<int> vec = VectorUtils::generateVector(TESTS_COUNT);

    std::cout << "Before selection sort: ";
    VectorUtils::printVector(vec);
    std::cout << std::endl;
    std::cout << "Tests count: " << TESTS_COUNT;
    std::cout << std::endl;

    auto start = std::chrono::high_resolution_clock::now();
    Sorts::basic::SelectionSort::Sort(vec);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration<double>(end - start);

    std::cout << "After selection sort(time: " << duration << "s.): ";
    VectorUtils::printVector(vec);  
}