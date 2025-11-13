//
// Created by ChangunAn on 25. 11. 13.
//

#ifndef NODE_HPP
#define NODE_HPP
#include <memory>

struct Node{
  int data;
  std::unique_ptr<Node> left;
  std::unique_ptr<Node> right;
  explicit Node(int v) : data(0){
  }
};

#endif //NODE_HPP
