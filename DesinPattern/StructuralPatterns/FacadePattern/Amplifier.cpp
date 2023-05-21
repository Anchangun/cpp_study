#include "Amplifier.hpp"
void Amplifier::on() {
    std::cout << "Amplifier를 켭니다." << '\n';
}

void Amplifier::set_volume(int& volume) {
    std::cout << "볼륨을 " << volume << "로 설정합니다." << '\n';
}

void Amplifier::off() {
    std::cout << "Amplifier를 끕니다." << '\n';
}