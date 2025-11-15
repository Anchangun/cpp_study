//
// Created by ChangunAn on 25. 11. 13.
//

#ifndef TREE_BUILDER_HPP
#define TREE_BUILDER_HPP
#include <memory>
#include <vector>

#include "Application/insert_strategy.hpp"
#include "Domain/node.hpp"

namespace INSERT {

class InsertBuilder {
private :
    std::unique_ptr<Node> root_;
    std::unique_ptr<InsertStrategy> strategy_;
public :
    explicit InsertBuilder(std::unique_ptr<InsertStrategy> start);
    InsertBuilder& insert(int data);
    InsertBuilder& insert(const std::vector<int>& values);
    std::unique_ptr<Node> build();
};

} // insert

#endif //TREE_BUILDER_HPP
