#include "Projector.hpp"

void Projector::on() {
    std::cout << "프로젝터를 켭니다." << '\n';
}

void Projector::set_input(const std::string& input) {
    std::cout << "입력을 " << input << "로 설정합니다." << '\n';
}

void Projector::off() {
    std::cout << "프로젝터를 끕니다." << '\n';
}