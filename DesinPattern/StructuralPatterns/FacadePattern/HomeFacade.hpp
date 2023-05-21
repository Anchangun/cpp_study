#pragma once
#include"Amplifier.hpp"
#include"CdPlayer.hpp"
#include"Projector.hpp"
class HomeFacade{
private:
    Amplifier amplifier_;
    CdPlayer cdPlayer_;
    Projector projector_;
public :
    void watch_movie(const std::string& movie, int& volume);
    void end_movie();
};

