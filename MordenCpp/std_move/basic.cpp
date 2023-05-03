#include <iostream>
#include<algorithm>
int main() {
    std::string str1 = "Hello";
    std::cout << "str1: " << str1 << '\n'; 
    std::string str2 = std::move(str1); 

    std::cout << "str1: " << str1 << '\n';  
    std::cout << "str2: " << str2 << '\n';  

    std::shared_ptr<int> sp1 = std::make_shared<int>(42); 
    std::shared_ptr<int> sp2 = std::move(sp1); 

    if (sp1.get() == nullptr) {
        std::cout << "sp1 null " << '\n';
    }
    else {
        std::cout << "sp1: " << sp1.get() << '\n'; 
    }
    std::cout << "sp2: " << *(sp2.get()) << std::endl; 

    return 0;
}
