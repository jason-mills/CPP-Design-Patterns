#pragma once

#include <iostream>

#include "DvdPlayer.h"

class Projector{
private:
    DvdPlayer* dvdPlayer;

public:
    Projector(DvdPlayer* dvdPlayer) : dvdPlayer(dvdPlayer) {}

    void on(){
        std::cout << "Projector is on" << std::endl;
    }

    void off(){
        std::cout << "Projector is off" << std::endl;
    }

    void tvMode(){
        std::cout << "Projector set to TV Mode" << std::endl;
    }

    void wideScreenMode(){
        std::cout << "Projector set to Wide Screen Mode" << std::endl;
    }
};