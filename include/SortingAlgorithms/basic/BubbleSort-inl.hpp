#pragma once

#include <SortingAlgorithms.hpp>
#include <algorithm> 

template <typename RandomIt>
    requires std::random_access_iterator<RandomIt>
void Sorts::basic::BubbleSort::Sort(RandomIt first, RandomIt last)
{
    auto n = last - first;

    for (auto i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (auto j = 0; j < n - 1 - i; j++)
        {
            if (first[j] > first [j + 1])
            {
                std::swap(first[j], first [j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

template <typename Container>
void Sorts::basic::BubbleSort::Sort(Container& arr)
{
    Sort(arr.begin(), arr.end());
}
