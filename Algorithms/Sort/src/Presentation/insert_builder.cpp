//
// Created by ChangunAn on 25. 11. 13.
//

#include "Presentation/insert_builder.hpp"

#include <bits/locale_facets_nonio.h>

INSERT::InsertBuilder::InsertBuilder(std::unique_ptr<InsertStrategy> start) : strategy_(std::move(start)) {
}

std::unique_ptr<Node> INSERT::InsertBuilder::insert(int data) {
    strategy_->insert(root_, data);
    return root_;
}