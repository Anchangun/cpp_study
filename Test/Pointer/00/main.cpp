#include <iostream>

//
void first_test() {
    int nums[] = {123,456,789};
    int *p = nums; //123
    int num = (*p)++;

    std::cout << num << std::endl; // 123
    std::cout << *p << std::endl; //124
}

void second_test() {
    int nums[] = { 123, 456, 789 };

    int* p = nums;

    int num = *p++;

    std::cout << num <<std::endl; //123
    std::cout << *p <<std::endl; //456
}

void third_test() {
    int nums[] = { 123, 456, 789 };
    int *p = nums;
    int num = *++p;

    std::cout << num <<std::endl; //456
    std::cout << *p <<std::endl; //456
}

void fourth_test() {
    int nums[] = { 123, 456, 789 };
    int *p = nums;
    int num = ++(*p);

    std::cout << num <<std::endl; //124
    std::cout << *p <<std::endl; //124
}
int main() {
    fourth_test();
    return 0;
}