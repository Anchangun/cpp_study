#include <iostream>
#include <memory>

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
    std::shared_ptr<ImageData> imageData = std::make_shared<ImageData>();
    std::shared_ptr<ImageData> sp1 = imageData;
    std::shared_ptr<ImageData> sp2 = imageData;
    std::shared_ptr<ImageData> sp3 = imageData;
    sp1->draw();
    sp2->draw();
    sp3->draw();

    return 0;
}