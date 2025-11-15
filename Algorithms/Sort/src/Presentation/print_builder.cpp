//
// Created by ChangunAn on 25. 11. 14.
//

#include "Presentation/print_builder.hpp"

namespace PRINT {
    PrintBuilder::PrintBuilder(Node* root)
        : root_(root), strategy_(nullptr){
    }

    PrintBuilder & PrintBuilder::set_strategy(std::unique_ptr<PrintStrategy> strat) {
        strategy_ = std::move(strat);
        return *this;
    }

    void PrintBuilder::build() {
        if (!strategy_ || !root_) {
            return;
        }
        strategy_->print(root_, 0);  // depth 0부터 시작
    }
}
