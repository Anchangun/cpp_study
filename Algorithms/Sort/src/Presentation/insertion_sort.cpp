//
// Created by ChangunAn on 25. 11. 20.
//

#include "Presentation/insertion_sort.hpp"

namespace SORT {
    void InsertionSort::sort(std::vector<int> &data) {
        for (size_t i = 1; i < data.size(); ++i) {
            int key = data[i];
            int j = static_cast<int>(i) - 1;
            while (j >= 0 && data[j] > key) {
                data[j + 1] = data[j];
                j--;
            }

            data[j + 1] = key;
        }
    }
    InsertionSort::~InsertionSort(){
    }
} // SORT