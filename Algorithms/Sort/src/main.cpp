#include<iostream>
#include "Presentation/random_data.hpp"

int main() {
    int min = -5;
    int max = 5;

    // 1. 랜덤 데이터 생성
    INSERT::RandomData generator(min, max);
    std::vector<int> data = generator.get_random_data(); // 10만개

    return 0;
}
