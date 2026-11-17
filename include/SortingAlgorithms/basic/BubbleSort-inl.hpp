#pragma once

#include <SortingAlgorithms.hpp>
#include <algorithm> 

template <typename Container>
void Sorts::basic::BubbleSort<Container>::Sort(Container& arr)
{
    auto n = arr.size();

    for (auto i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (auto j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr [j + 1])
            {
                std::swap(arr[j], arr [j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}
