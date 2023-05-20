#include "HomeFacade.hpp"
void HomeFacade::watch_movie(const std::string& movie, int& volume) {
    std::cout << "====== ��ȭ ������ �����մϴ� ======" << '\n';

    amplifier_.on();
    amplifier_.set_volume(volume);

    cdPlayer_.on();
    cdPlayer_.play();

    projector_.on();
    projector_.set_input(movie);

    std::cout << "===================================" << '\n';
}

void HomeFacade::end_movie() {
    std::cout << "====== ��ȭ ������ �����մϴ� ======" << '\n';
    amplifier_.off();
    cdPlayer_.stop();
    cdPlayer_.off();
    projector_.off();
    std::cout << "===================================" << '\n';
}