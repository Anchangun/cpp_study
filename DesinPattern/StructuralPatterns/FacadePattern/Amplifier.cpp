#include "Amplifier.hpp"
void Amplifier::on() {
    std::cout << "Amplifier�� �մϴ�." << '\n';
}

void Amplifier::set_volume(int& volume) {
    std::cout << "������ " << volume << "�� �����մϴ�." << '\n';
}

void Amplifier::off() {
    std::cout << "Amplifier�� ���ϴ�." << '\n';
}