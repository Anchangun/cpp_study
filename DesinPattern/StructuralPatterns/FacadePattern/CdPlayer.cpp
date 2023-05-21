#include "CdPlayer.hpp"
void CdPlayer::on() {
    std::cout << "CD 플레이어를 켭니다." << '\n';
}

void CdPlayer::play() {
    std::cout << "CD를 재생합니다." << '\n';
}

void CdPlayer::stop() {
    std::cout << "CD 재생을 중지합니다." << '\n';
}

void CdPlayer::off() {
    std::cout << "CD 플레이어를 끕니다." << '\n';
}