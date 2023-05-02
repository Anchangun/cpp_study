#include<iostream>
#include<memory>

class ImageData {
private : 
    int num;
public:
    ImageData() {
        std::cout << "ImageData Constructor" << std::endl;
        num = 0;
    }

    ~ImageData() {
        std::cout << "ImageData Destructor" << std::endl;
    }

    void draw() {
        std::cout << "Draw" << std::endl;
        num++;
    }

    int get_num() {
        return this->num;
    }
};

int main() {
    std::shared_ptr<ImageData> ptr1 = std::make_shared<ImageData>(); // 객체 생성 및 shared_ptr에 할당
    std::shared_ptr<ImageData> ptr2 = ptr1; // 객체를 참조하는 새로운 shared_ptr 객체 생성
    std::cout << "ptr1 use_count : " << ptr1.use_count() << '\n'; 
    std::cout << "ptr2 use_count : " << ptr2.use_count() << '\n';
    (*ptr1).draw();
    (*ptr2).draw();
    ptr1.reset(); 
    std::cout << "ptr1 use_count : " << ptr1.use_count() << '\n';
    std::cout << "ptr2 use_count : " << ptr2.use_count() << '\n';
    std::cout << (*ptr2).get_num() << '\n';
    return 0;
}