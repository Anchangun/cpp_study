#include<iostream>
#include<memory>

class ImageData {
public:
    ImageData() {
        std::cout << "ImageData Constructor" << std::endl;
    }

    ~ImageData() {
        std::cout << "ImageData Destructor" << std::endl;
    }

    void draw() {
        std::cout << "Draw" << std::endl;
    }
};
int main() {
    try {
        std::shared_ptr<ImageData> p = std::make_shared<ImageData>();
        throw std::runtime_error("error occurred");
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}