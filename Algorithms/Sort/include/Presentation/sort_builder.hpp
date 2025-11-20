//
// Created by ChangunAn on 25. 11. 20.
//

#ifndef SORT_BUILDER_HPP
#define SORT_BUILDER_HPP
#include <memory>
#include <vector>

#include "insertion_sort.hpp"

namespace SORT {

class SortBuilder {
    private:
        std::vector<int> data_;
        std::unique_ptr<SortStrategy> sort_strategy_;
    public :
        explicit SortBuilder(std::vector<int>& data);
        SortBuilder& set_strategy(std::unique_ptr<SortStrategy> sort_strategy);
        std::vector<int> build();

};

} // SORT

#endif //SORT_BUILDER_HPP
