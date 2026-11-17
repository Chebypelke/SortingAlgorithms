#pragma once

#include <SortingAlgorithms.hpp>
#include <cstddef>
#include <vector>

template <typename RandomIt>
    requires std::random_access_iterator<RandomIt>
void Sorts::basic::CountingSort::Sort(RandomIt first, RandomIt last)
{
    if (first == last) return;

    auto n = last - first;
    auto k = *std::ranges::max_element(first, last);
    using ValueType = typename RandomIt::value_type;

    auto count = std::vector<std::size_t>(static_cast<std::size_t>(k) + 1, 0);
    auto output = std::vector<ValueType>(n);

    for (auto i = 0; i < n; i++)
    {
        ++count[first[i]];
    }

    for (auto j = 1; j <= k; j++)
    {
        count[j] += count[j - 1];
    }

    for (auto i = n; i-- > 0; )
    {
        --count[first[i]];
        output[count[first[i]]] = first[i];
    }

    std::move(output.begin(), output.end(), first);
}

template <typename Container>
void Sorts::basic::CountingSort::Sort(Container& arr)
{
    Sort(arr.begin(), arr.end());
}
