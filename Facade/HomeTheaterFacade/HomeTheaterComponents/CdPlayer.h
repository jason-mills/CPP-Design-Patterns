#pragma once

#include <iostream>
#include <string>

#include "Amplifier.h"

class Amplifier;

class CdPlayer{
private:
    Amplifier* amplifier;

public:
    CdPlayer(Amplifier* amplifier) : amplifier(amplifier) {}

    void on(){
        std::cout << "CD Player is on" << std::endl;
    }

    void off(){
        std::cout << "CD Player is off" << std::endl;
    }

    void eject(){
        std::cout << "CD is being ejected" << std::endl;
    }

    void pause(){
        std::cout << "CD Player is paused" << std::endl;
    }

    void play(std::string s){
        std::cout << "CD Player is now playing " << s << std::endl;
    }

    void play(){
        std::cout << "CD Player is playing " << std::endl;
    }

    void stop(){
        std::cout << "CD Player is stopped" << std::endl;
    }
};