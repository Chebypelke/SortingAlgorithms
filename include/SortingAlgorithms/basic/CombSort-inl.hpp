#pragma once

#include <SortingAlgorithms.hpp>
#include <cstddef>

template <typename Container>
void Sorts::basic::CombSort<Container>::Sort(Container& arr)
{
    auto n = arr.size();
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
            if (arr[i] > arr[i + step])
            {
                std::swap(arr[i], arr[i + step]);
                swapped = true;
            }

            ++i;
        }
    }
}
