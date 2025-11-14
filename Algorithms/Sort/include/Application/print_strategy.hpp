//
// Created by ChangunAn on 25. 11. 14.
//

#ifndef PRINT_STRATEGY_HPP
#define PRINT_STRATEGY_HPP
#include "Domain/node.hpp"
#include <memory>

namespace PRINT {
    class PrintStrategy {
    public :
            virtual void print(const std::unique_ptr<Node>& node, int depth=0)=0;
            virtual ~PrintStrategy() = default;
    };

}

#endif //PRINT_STRATEGY_HPP
