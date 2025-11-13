//
// Created by ChangunAn on 25. 11. 13.
//

#ifndef TREE_BUILDER_HPP
#define TREE_BUILDER_HPP
#include <memory>

#include "insert_strategy.hpp"
#include "Domain/node.hpp"

namespace INSERT {

class TreeBuilder {
private :
    std::unique_ptr<Node> root;
    std::unique_ptr<InsertStrategy> strategy;
public :
    explicit TreeBuilder(std::unique_ptr<InsertStrategy> start);
    TreeBuilder& insert(int data);
    std::unique_ptr<Node> build();
};

} // insert

#endif //TREE_BUILDER_HPP
