#include "Utils/VectorUtils-inl.hpp"
#include "Utils/VectorUtils.hpp"
#include <SortingAlgorithms/SortingAlgorithms.hpp>
#include <cstddef>
#include <iostream>
#include <vector>
#include <chrono>

int main()
{
    constexpr size_t TESTS_COUNT = 1'000; 
    std::vector<int> vec = VectorUtils::generateVector(TESTS_COUNT);

    std::cout << "Before counting sort: ";
    VectorUtils::printVector(vec);
    std::cout << std::endl;
    std::cout << "Tests count: " << TESTS_COUNT;
    std::cout << std::endl;

    auto start = std::chrono::high_resolution_clock::now();
    Sorts::basic::CountingSort::Sort(vec);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration<double>(end - start);

    std::cout << "After counting sort(time: " << duration << "s.): ";
    VectorUtils::printVector(vec);  
}