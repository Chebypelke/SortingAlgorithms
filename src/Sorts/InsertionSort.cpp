#include <Utils/VectorUtils.hpp>
#include <SortingAlgorithms/SortingAlgorithms.hpp>
#include <iostream>
#include <vector>
#include <chrono>

int main()
{
    std::vector<int> vec = VectorUtils::generateVector(100000);

    std::cout << "Before insertion sort: ";
    VectorUtils::printVector(vec);
    std::cout << std::endl;

    auto start = std::chrono::high_resolution_clock::now();
    Sorts::InsertionSort<decltype(vec)>::Sort(vec);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration<double>(end - start);

    std::cout << "After insertion sort(time: " << duration << "s.): ";
    VectorUtils::printVector(vec);  
}