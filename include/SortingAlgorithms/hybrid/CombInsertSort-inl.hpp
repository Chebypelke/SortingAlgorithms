#pragma once

#include <SortingAlgorithms.hpp>
#include <cstddef>

template <typename Container>
void Sorts::hybrid::CombInsertSort<Container>::Sort(Container& arr)
{
    auto n = arr.size();
    auto step = n;

    while (step > 32)
    {
        if (step > 1)
        {
            step = step * 10 / 13;
        }

        std::size_t i = 0;

        while (i + step < n)
        {
            if (arr[i] > arr[i + step])
            {
                std::swap(arr[i], arr[i + step]);
            }

            i++;
        }
    }

    for (auto idx = 1; idx < n; idx++)
    {
        auto key = arr[idx];
        std::size_t j = idx;

        while (j > 0 && arr[j - 1] > key)
        {
            arr[j] = arr[j - 1];
            --j;
        }

        arr[j] = key;
    }
}
