#pragma once

#include <iostream>
#include <string>

#include "Amplifier.h"

class Amplifier;

class DvdPlayer{
private:
    Amplifier* amplifier;

public:
    DvdPlayer(Amplifier* amplifier) : amplifier(amplifier) {}

    void on(){
        std::cout << "DVD Player is on" << std::endl;
    }

    void off(){
        std::cout << "DVD Player is off" << std::endl;
    }

    void eject(){
        std::cout << "DVD is being ejected" << std::endl;
    }

    void pause(){
        std::cout << "DVD Player is paused" << std::endl;
    }

    void play(std::string s){
        std::cout << "DVD Player is now playing " << s << std::endl;
    }

    void play(){
        std::cout << "DVD Player is playing" << std::endl;
    }

    void setSurroundSound(){
        std::cout << "DVD Player set to Surround Sound" << std::endl;
    }

    void setTwoChannelAudio(){
        std::cout << "DVD Player set to Two Channel Audio" << std::endl;
    }

    void stop(){
        std::cout << "DVD Player is stopped" << std::endl;
    }
};