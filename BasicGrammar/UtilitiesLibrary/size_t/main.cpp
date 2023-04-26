#include <cstring> 
#include <iostream> 
#include <array> 
class A {
private : 
    int num_;
    std::string name_;
    double val_;
};
template<class T>
class B {
private :
    T t1;
    T t2;
};

class D : public A, public B<int>{
private :
    A a;
    B b;
};
class C : public B<int> {
private : 
    B b;
};

int main(){
    std::array<std::size_t, 10 > a;
    for (auto i = 0; i != a.size(); ++i) {
        std::cout << (a[i] = i) << ' ';
    }
    std::cout << '\n';
    for (std::size_t i = a.size(); i--; ) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
    std::size_t b = sizeof(a);
    std::cout << "array : " << b << '\n';
    std::size_t str = sizeof(std::string);
    std::cout << "string : " << str << '\n';
    std::size_t c_a = sizeof(A);
    std::cout << "class_A : " << c_a << '\n';

    std::size_t c_b = sizeof(B<int>);
    std::cout << "class_B : " << c_b << '\n';
    std::size_t c_c = sizeof(C);
    std::cout << "class_C : " << c_c << '\n';

    std::size_t c_d= sizeof(D);
    std::cout << "class_D : " << c_d << '\n';
    return 0;
}