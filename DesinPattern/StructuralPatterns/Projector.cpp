#include "Projector.hpp"

void Projector::on() {
    std::cout << "�������͸� �մϴ�." << '\n';
}

void Projector::set_input(const std::string& input) {
    std::cout << "�Է��� " << input << "�� �����մϴ�." << '\n';
}

void Projector::off() {
    std::cout << "�������͸� ���ϴ�." << '\n';
}