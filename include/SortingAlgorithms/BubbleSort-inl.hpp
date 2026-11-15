#pragma once

#include "SortingAlgorithms.hpp"
#include <algorithm> 

template <typename Container>
void Sorts::BubbleSort<Container>::Sort(Container& arr)
{
    int n = arr.size();
    for (auto J = 0; J < n - 1; ++J)
    {
        bool F = false;

        for (auto I = 0; I < n - 1 - J; ++I)
        {
            if (arr[I] > arr [I+1])
            {
                std::swap(arr[I], arr [I+1]);
                F = true;
            }
        }

        if (!F) break;
    }
}
