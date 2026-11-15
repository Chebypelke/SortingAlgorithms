#pragma once 

#include "VectorUtils.hpp"
#include <cstddef>
#include <iostream>

template <typename T>

void VectorUtils::printVector(const std::vector<T> &vec, size_t limit)
{
    for (size_t i = 0; i < std::min(vec.size(), limit); ++i) 
    {
        std::cout << vec[i] << " ";
    }

    if (vec.size() > limit) 
    {
        std::cout << "... ";

        for (size_t i = vec.size() - limit; i < vec.size(); ++i) 
        {
            std::cout << vec[i] << " ";
        }
    }
}