#include "HomeFacade.hpp"
void HomeFacade::watch_movie(const std::string& movie, int& volume) {
    std::cout << "====== 영화 관람을 시작합니다 ======" << '\n';

    amplifier_.on();
    amplifier_.set_volume(volume);

    cdPlayer_.on();
    cdPlayer_.play();

    projector_.on();
    projector_.set_input(movie);

    std::cout << "===================================" << '\n';
}

void HomeFacade::end_movie() {
    std::cout << "====== 영화 관람을 종료합니다 ======" << '\n';
    amplifier_.off();
    cdPlayer_.stop();
    cdPlayer_.off();
    projector_.off();
    std::cout << "===================================" << '\n';
}