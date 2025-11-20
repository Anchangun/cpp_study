//
// Created by ChangunAn on 25. 11. 20.
//

#include "Presentation/sort_builder.hpp"

namespace SORT {
    SortBuilder::SortBuilder(std::vector<int> &data) : data_(data) {
    }

    SortBuilder & SortBuilder::set_strategy(std::unique_ptr<SortStrategy> sort_strategy) {
        sort_strategy_= std::move(sort_strategy);
        return *this;
    }

    std::vector<int> SortBuilder::build() {
        if (sort_strategy_ ) {
            sort_strategy_->sort(data_);
        }
        return data_;
    }
} // SORT