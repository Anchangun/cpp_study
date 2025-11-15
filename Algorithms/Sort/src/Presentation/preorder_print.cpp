//
// Created by ChangunAn on 25. 11. 14.
//

#include "Presentation/preorder_print.hpp"

#include <iostream>

namespace PRINT {
    void PreorderPrint::print(Node* node, int depth) {
        if (!node) {
            return ;
        }
        for (int i=0;i<depth;i++) {
            std::cout << ' ';
        }
        std::cout<< node->data << "\n";
        print(node->left.get(), depth+1);
        print(node->right.get(), depth+1);
    }
} // PRINT