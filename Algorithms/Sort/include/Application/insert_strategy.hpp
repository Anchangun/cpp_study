//
// Created by ChangunAn on 25. 11. 13.
//

#ifndef INSERT_STRATEGY_HPP
#define INSERT_STRATEGY_HPP

#include "Domain/node.hpp"

namespace INSERT {
    class InsertStrategy {
    public :
        virtual void insert(std::unique_ptr<Node>& root, int data)=0;
        virtual ~InsertStrategy() {};
    };
}


#endif //INSERT_STRATEGY_HPP
