#pragma once

#include <SortingAlgorithms.hpp>

template <typename RandomIt>
    requires std::random_access_iterator<RandomIt>
void Sorts::basic::SelectionSort::Sort(RandomIt first, RandomIt last)
{
    auto n = last - first;

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        
        for (int j = i + 1; j < n; j++)
        {
            if (first[j] < first [min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            std::swap(first[i], first[min_index]);
        }
    }
}

template <typename Container>
void Sorts::basic::SelectionSort::Sort(Container& arr)
{
    Sort(arr.begin(), arr.end());
}