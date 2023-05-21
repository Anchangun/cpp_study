#pragma once
#include"Image.hpp"
#include"common.hpp"
class RealImage :
    public IImage{
private:
    std::string filename_;
public :
    RealImage(const std::string& filename);
    void display() override;
    void load_from_disk();
};

