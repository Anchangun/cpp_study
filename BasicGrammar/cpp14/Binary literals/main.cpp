#include <bitset>
#include<iostream>

int main() {
    // binary literal
    // 14 이전 이진법 표현 시 bitset or 16진수 0x사용 필요
   std::bitset<8> bits("1010");
    int first = 0b1010 ;

    std::cout << first << std::endl;
    std::cout << std::bitset<8>(first) << std::endl;
    std::cout << bits.to_string() << std::endl;
    return 0;
}