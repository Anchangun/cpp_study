#include <iostream>
#include <type_traits>



int main() {
    std::cout << std::is_same<int, int>::value << ' '; // ~ true
    std::cout << std::is_same<int, double>::value << ' '; // ~ false
    std::cout << std::is_same<int, const int>::value << '\n'; // ~ false

    // usually true if 'int' is 32 bit
    std::cout << std::is_same<int, std::int32_t>::value << ' '; // ~ true
    // possibly true if ILP64 data model is used
    std::cout << std::is_same<int, std::int64_t>::value << '\n'; // ~ false

    auto a = 3;
    decltype(3) x;
    auto b = 3.3;
    std::cout << std::is_same<decltype(a), decltype(b)>::value << ' '; // ~ false
    std::cout << std::is_same<decltype(a), decltype(x)>::value << ' '; // ~ true

}