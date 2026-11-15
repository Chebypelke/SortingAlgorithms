#pragma once 

#include <vector>
#include <cstddef>

namespace VectorUtils 
{
    template <typename T>
    void printVector(const std::vector<T>& vec, size_t limit = 10);

    std::vector<int> generateVector(size_t size);
}

#include "VectorUtils-inl.hpp" // IWYU pragma: keep