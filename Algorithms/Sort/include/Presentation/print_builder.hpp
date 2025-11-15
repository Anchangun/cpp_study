//
// Created by ChangunAn on 25. 11. 14.
//

#ifndef PRINT_BUILDER_HPP
#define PRINT_BUILDER_HPP
#include <memory>

#include "Application/print_strategy.hpp"
#include "Domain/node.hpp"


namespace PRINT {
    class PrintBuilder {
    private:
            std::unique_ptr<PrintStrategy> strategy_;
            Node* root_;
    public:
        explicit PrintBuilder(Node* root);
        PrintBuilder& set_strategy(std::unique_ptr<PrintStrategy> strat);
        void build();
    };
}


#endif //PRINT_BUILDER_HPP
