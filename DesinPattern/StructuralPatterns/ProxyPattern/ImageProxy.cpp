#include "ImageProxy.hpp"

ImageProxy::ImageProxy(const std::string& filename):filename_(filename), real_image_(nullptr) {
}

void ImageProxy::display()
{
    if (real_image_ == nullptr) {
        real_image_ = std::make_shared<RealImage>(filename_);
    }
    real_image_->display();
}
