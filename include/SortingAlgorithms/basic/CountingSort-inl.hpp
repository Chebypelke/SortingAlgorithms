#pragma once

#include <SortingAlgorithms.hpp>
#include <cstddef>
#include <vector>

template <typename Container>
void Sorts::basic::CountingSort<Container>::SortStable(Container& arr)
{
    auto n = arr.size();
    auto k = *std::ranges::max_element(arr);
    using ValueType = typename Container::value_type;

    auto count = std::vector<std::size_t>(static_cast<std::size_t>(k) + 1uz, 0uz);
    auto output = std::vector<ValueType>(n);

    for (auto i = 0; i < n; i++)
    {
        ++count[arr[i]];
    }

    for (auto j = 1; j <= k; j++)
    {
        count[j] += count[j - 1];
    }

    for (auto i = n; i-- > 0; )
    {
        --count[arr[i]];
        output[count[arr[i]]] = arr[i];
    }

    arr = std::move(output);
}
