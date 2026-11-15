#include <Utils/VectorUtils.hpp>
#include <random>

std::vector<int> VectorUtils::generateVector(size_t size)
{
    std::vector<int> vec(size);

    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(0, 1'000'000);

    for (auto& num : vec) 
    {
        num = dist(rng);
    }

    return vec;
}