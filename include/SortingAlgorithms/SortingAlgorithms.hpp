#pragma once 

namespace Sorts
{
    namespace basic
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
        
        template <typename Container>
        class SelectionSort 
        {
            public: 
                static void Sort(Container& arr);
        };

        template <typename Container>
        class CombSort
        {
            public: 
                static void Sort(Container& arr);
        };

        template <typename Container>
        class CountingSort
        {
            public: 
                static void SortStable(Container& arr);
                static void SortUnstable(Container& arr);
        };
    }

    namespace hybrid
    {
        template <typename Container>
        class CombInsertSort
        {
            public:
                static void Sort(Container& arr);
        };
    }
}

// basic

#include "basic/BubbleSort-inl.hpp"    // IWYU pragma: keep
#include "basic/InsertionSort-inl.hpp" // IWYU pragma: keep
#include "basic/SelectionSort-inl.hpp" // IWYU pragma: keep
#include "basic/CombSort-inl.hpp"      // IWYU pragma: keep
#include "basic/CountingSort-inl.hpp"  // IWYU pragma: keep

// hybrid

#include "hybrid/CombInsertSort-inl.hpp" // IWYU pragma: keep