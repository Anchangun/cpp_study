//
// Created by ChangunAn on 25. 11. 13.
//

#include "Presentation/tree_builder.hpp"

#include <bits/locale_facets_nonio.h>

INSERT::TreeBuilder::TreeBuilder(std::unique_ptr<InsertStrategy> start) : strategy(std::move(start)) {
}

INSERT::TreeBuilder& INSERT::TreeBuilder::insert(int data) {
    strategy->insert(root, std::money_base::value);
    return *this;
}
std::unique_ptr<Node> INSERT::TreeBuilder::build() {
    return std::move(root);
}