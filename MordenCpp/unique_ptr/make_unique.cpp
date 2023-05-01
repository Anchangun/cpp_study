#include<iostream>
#include<memory>
#include <iomanip>
struct Vec3{
    int x, y, z;
    Vec3(int x = 0, int y = 0, int z = 0) noexcept : x(x), y(y), z(z) { }
    friend std::ostream& operator<<(std::ostream& os, const Vec3& v){
        return os << "{ x=" << v.x << ", y=" << v.y << ", z=" << v.z << " }";
    }
};

int main() {
    std::unique_ptr<Vec3> test1 = std::make_unique<Vec3>();
    std::unique_ptr<Vec3> test2 = std::make_unique<Vec3>(1, 2, 3);
    std::unique_ptr<Vec3[]> test3 = std::make_unique<Vec3[]>(5);
    std::cout << "make_unique<Vec3>():      " << *test1 << '\n'
        << "make_unique<Vec3>(0,1,2): " << *test2 << '\n'
        << "make_unique<Vec3[]>(5):   ";
    for (int i = 0; i < 5; i++) {
        std::cout << std::setw(i ? 30 : 0) << test3[i] << '\n';
    }
    return 0;
}