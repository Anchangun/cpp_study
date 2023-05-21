#include "RealImage.hpp"

RealImage::RealImage(const std::string& filename) :filename_(filename){
	load_from_disk();
}

void RealImage::display(){
	std::cout << "Displaying image: " << filename_ << '\n';
}

void RealImage::load_from_disk(){
	std::cout << "Loading image from disk: " << filename_ << '\n';
}
