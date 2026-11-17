#pragma once

#include <SortingAlgorithms.hpp>
#include <cstddef>

template <typename Container>
void Sorts::basic::InsertionSort<Container>::Sort(Container& arr)
{
    auto n = arr.size();

    for (auto idx = 1; idx < n; idx++)
    {
        auto key = arr[idx];
        std::size_t j = idx;

        while (j > 0 && arr[j - 1] > key)
        {
            arr[j] = arr[j - 1];
            j++;
        }

        arr[j] = key;
    }
}
