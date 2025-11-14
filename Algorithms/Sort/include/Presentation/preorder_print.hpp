//
// Created by ChangunAn on 25. 11. 14.
//

#ifndef PREORDER_PRINT_HPP
#define PREORDER_PRINT_HPP
#include "Application/print_strategy.hpp"

namespace PRINT {

class PreorderPrint : public PrintStrategy {
public :
    void print(const std::unique_ptr<Node>& node , int depth) override;
};

} // PRINT

#endif //PREORDER_PRINT_HPP
