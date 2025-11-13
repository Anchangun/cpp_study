//
// Created by ChangunAn on 25. 11. 13.
//

#include "Application/left_first_insert.hpp"

void INSERT::LeftFirstInsert::insert(
            std::unique_ptr<Node>& root,
            int data) {
    if (!root) {
        root = std::make_unique<Node>(data);
        return;
    }
    if (!root->left) {
        root->left = std::make_unique<Node>(data);
    }
    else if (!root->right) {
        root->right = std::make_unique<Node>(data);
    }
    else {
        insert(root->left, data);
    }
}