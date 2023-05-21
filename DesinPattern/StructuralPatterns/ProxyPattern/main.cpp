#include"ImageProxy.hpp"
#include"Image.hpp"
int main() {
	std::shared_ptr<IImage> image = std::make_shared<ImageProxy>("image.jpg");
	image->display();
	return 0;
}