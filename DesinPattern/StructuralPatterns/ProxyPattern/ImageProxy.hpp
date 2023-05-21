#pragma once
#include"common.hpp"
#include"Image.hpp"
#include"RealImage.hpp"
#include<memory>
class ImageProxy :
    public IImage
{
private:
    std::string filename_;
    std::shared_ptr<RealImage> real_image_;
public:
    ImageProxy(const std::string& filename);
    void display() override;
};

