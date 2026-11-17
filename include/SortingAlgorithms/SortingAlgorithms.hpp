#pragma once 

#include <iterator>

namespace Sorts
{
    namespace basic
    {
        
        class BubbleSort 
        {
            public: 
                template <typename RandomIt>
                    requires std::random_access_iterator<RandomIt>
                static void Sort(RandomIt first, RandomIt last);

                template <typename Container>    
                static void Sort(Container& arr);
        };

        class InsertionSort
        {
            public: 
                template <typename RandomIt>
                    requires std::random_access_iterator<RandomIt>
                static void Sort(RandomIt first, RandomIt last);

                template <typename Container>    
                static void Sort(Container& arr);
        };
        
        class SelectionSort 
        {
            public: 
                template <typename RandomIt>
                    requires std::random_access_iterator<RandomIt>
                static void Sort(RandomIt first, RandomIt last);

                template <typename Container>    
                static void Sort(Container& arr);
        };

        class CombSort
        {
            public: 
                template <typename RandomIt>
                    requires std::random_access_iterator<RandomIt>
                static void Sort(RandomIt first, RandomIt last);

                template <typename Container>    
                static void Sort(Container& arr);
        };

        
        class CountingSort
        {
            public: 
                template <typename RandomIt>
                    requires std::random_access_iterator<RandomIt>
                static void Sort(RandomIt first, RandomIt last);

                template <typename Container>
                static void Sort(Container& arr);
                
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