//
// Created by ChangunAn on 25. 11. 13.
//

#ifndef LEFT_FIRST_INSERT_HPP
#define LEFT_FIRST_INSERT_HPP
#include "Application/insert_strategy.hpp"
namespace INSERT {
class LeftFirstInsert : public InsertStrategy{
public :
    explicit LeftFirstInsert();
    void insert(std::unique_ptr<Node>& root, int data) override;
};

} // INSERT

#endif //LEFT_FIRST_INSERT_HPP
