//
// Created by ChangunAn on 25. 11. 14.
//

#include "Presentation/random_data.hpp"
#include <algorithm>
#include <random>

namespace INSERT {
    RandomData::RandomData(int min , int max): min_(min), max_(max) {

    }
    std::vector<int> RandomData::get_random_data() {
        std::vector<int> vec;
        int size = (min_>0) ? max_+min_:max_+min_+1;
        vec.reserve(size);
        for (int i = min_; i <= max_; i++) {
            vec.push_back(i);
        }
        std::random_device rd;
        std::mt19937 gen(rd());
        std::ranges::shuffle(vec, gen);
        return vec;
    }
} // INSERT