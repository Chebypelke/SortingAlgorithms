#pragma once

#include "SortingAlgorithms.hpp"

template <typename Container>
void Sorts::InsertionSort<Container>::Sort(Container& arr)
{
    auto n = arr.size();
    for (auto j = 1; j < n; j++)
    {
        auto key = arr[j];
        int i = j - 1;

        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i = i - 1;
        }

        arr[i + 1] = key;
    }
}
