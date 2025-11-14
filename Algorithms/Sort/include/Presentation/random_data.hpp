//
// Created by ChangunAn on 25. 11. 14.
//

#ifndef RANDOM_DATA_HPP
#define RANDOM_DATA_HPP
#include <vector>

namespace INSERT {

class RandomData {
private :
    constexpr int min_;
    constexpr int max_;

public :
    std::vector<int> get_random_data();
    constexpr RandomData(int min , int max);
};

} // INSERT

#endif //RANDOM_DATA_HPP
