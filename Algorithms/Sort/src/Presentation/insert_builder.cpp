//
// Created by ChangunAn on 25. 11. 13.
//

#include "Presentation/insert_builder.hpp"

#include <bits/locale_facets_nonio.h>
namespace INSERT {
    InsertBuilder::InsertBuilder(std::unique_ptr<InsertStrategy> start) : strategy_(std::move(start)) {
    }
    // 단일 값 삽입
    InsertBuilder& InsertBuilder::insert(int data) {
        strategy_->insert(root_, data);
        return *this;
    }

    // 여러 값 삽입
    InsertBuilder& InsertBuilder::insert(const std::vector<int>& values) {
        for (int v : values){
            strategy_->insert(root_, v);
        }
        return *this;
    }
    std::unique_ptr<Node> InsertBuilder::build() {
        return std::move(root_);
    }
}
