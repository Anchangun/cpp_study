#include<iostream>
#include <memory>

#include "Presentation/insertion_sort.hpp"
#include "Presentation/random_data.hpp"
#include "Presentation/sort_builder.hpp"

int main() {
    int min = -100;
    int max = 100;

    // 1. 랜덤 데이터 생성
    INSERT::RandomData generator(min, max);
    std::vector<int> data = generator.get_random_data(); // 10만개

    for (auto show: data) {
        std::cout << show << ' ';
    }
    std::cout << std::endl;
    // 2. SortBuilder 생성
    SORT::SortBuilder builder(data);

    // 3. Insertion Sort 전략 설정
    data = builder.set_strategy(std::make_unique<SORT::InsertionSort>()).build();
    for (auto show: data) {
        std::cout << show << ' ';
    }

    return 0;
}
