#pragma once 

namespace Sorts
{
    template <typename Container>    
    class BubbleSort 
    {
        public: 
            static void Sort(Container& arr);
    };

    template <typename Container>    
    class InsertionSort
    {
        public: 
            static void Sort(Container& arr);    
    };
}

#include "BubbleSort-inl.hpp" // IWYU pragma: keep