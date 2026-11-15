#include <SortingAlgorithms/SortingAlgorithms.hpp>
#include <iostream>
#include <vector>
#include <chrono>

int main()
{
    std::vector<int> v = {30, 20, 25, 10, 2, 6};

    std::cout << "Before bubble sort: ";
    for (auto iter = v.begin(); iter != v.end(); ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    auto start = std::chrono::high_resolution_clock::now();
    Sorts::BubbleSort<decltype(v)>::Sort(v);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration<double>(end - start);

    std::cout << "After bubble sort(time: " << duration << "s.): ";
    for (auto iter = v.begin(); iter != v.end(); ++iter) {
        std::cout << *iter << " ";
    }
}