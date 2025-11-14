#include<iostream>

#include "../include/Presentation/left_first_insert.hpp"
#include "Presentation/insert_builder.hpp"
#include "Presentation/random_data.hpp"

int main() {
    int min = -500000;
    int max = 500000;

    // 1. 랜덤 데이터 생성
    INSERT::RandomData generator(min, max);
    auto data = generator.get_random_data(); // 100만개

    // 2. InsertBuilder 생성
    INSERT::InsertBuilder tree(std::make_unique<INSERT::LeftFirstInsert>());

    // 3. for문으로 하나씩 삽입
    for (int value : data) {
        tree.insert(value);
    }

    // 4. PrintBuilder 생성
    const auto* root = tree.get_root();
    PrintBuilder printer(root);

    std::cout << "----- Preorder -----\n";
    printer.set_strategy(std::make_unique<PreorderPrint>()).build();

    std::cout << "----- Inorder -----\n";
    printer.set_strategy(std::make_unique<InorderPrint>()).build();

    std::cout << "----- Postorder -----\n";
    printer.set_strategy(std::make_unique<PostorderPrint>()).build();

    return 0;
}
