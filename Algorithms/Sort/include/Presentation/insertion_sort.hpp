//
// Created by ChangunAn on 25. 11. 20.
//

#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP
#include <vector>

#include "Application/sort_strategy.hpp"

namespace SORT {

class InsertionSort : public SortStrategy {
public :
        InsertionSort()=default;
        void sort(std::vector<int>& data) override;
        virtual ~InsertionSort();
};

} // SORT

#endif //INSERTION_SORT_HPP
