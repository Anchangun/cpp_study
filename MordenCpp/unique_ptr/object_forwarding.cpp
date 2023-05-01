#include<iostream>
#include<memory>
void print_unique_ptr(std::unique_ptr<int> up) {
    std::cout << "unique_ptr: " << *up << std::endl;
    // Destruct
}

int main() {
    std::unique_ptr<int> up(new int(10));
    print_unique_ptr(std::move(up));
    if (up == nullptr) {
        std::cout << "up is null" << std::endl;
    }
    return 0;
}