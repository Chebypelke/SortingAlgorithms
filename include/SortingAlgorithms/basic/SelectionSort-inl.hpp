#pragma once

#include <SortingAlgorithms.hpp>

template <typename Container>
void Sorts::basic::SelectionSort<Container>::Sort(Container& arr)
{
    auto n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr [min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            std::swap(arr[i], arr[min_index]);
        }
    }
}