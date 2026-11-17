#pragma once

#include <SortingAlgorithms.hpp>
#include <cstddef>

template <typename RandomIt>
    requires std::random_access_iterator<RandomIt>
void Sorts::basic::CombSort::Sort(RandomIt first, RandomIt last)
{
    auto n = last - first;
    auto step = n;
    bool swapped = false;

    while (step > 1 || swapped)
    {
        if (step > 1)
        {
            step = step * 10 / 13;
        }

        swapped = false;
        size_t i = 0;

        while (i + step < n)
        {
            if (first[i] > first[i + step])
            {
                std::swap(first[i], first[i + step]);
                swapped = true;
            }

            i++;
        }
    }
}

template <typename Container>
void Sorts::basic::CombSort::Sort(Container& arr)
{
    Sort(arr.begin(), arr.end());
}