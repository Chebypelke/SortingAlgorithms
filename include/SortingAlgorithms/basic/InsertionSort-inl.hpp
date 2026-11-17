#pragma once

#include <SortingAlgorithms.hpp>
#include <cstddef>

template <typename RandomIt>
    requires std::random_access_iterator<RandomIt>
void Sorts::basic::InsertionSort::Sort(RandomIt first, RandomIt last)
{
    auto n = last - first;

    for (auto idx = 1; idx < n; idx++)
    {
        auto key = first[idx];
        std::size_t j = idx;

        while (j > 0 && first[j - 1] > key)
        {
            first[j] = first[j - 1];
            j--;
        }

        first[j] = key;
    }
}

template <typename Container>
void Sorts::basic::InsertionSort::Sort(Container& arr)
{
    Sort(arr.begin(), arr.end());
}
