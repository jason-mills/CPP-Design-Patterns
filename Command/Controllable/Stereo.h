#pragma once

#include <iostream>

class Stereo{
private:
    int volume = 0;
public:
    Stereo(){}

    void on(){
        std::cout << "Stereo is on" << std::endl;
    }

    void off(){
        std::cout << "Stereo is off" << std::endl;
    }

    void setCd(){
        std::cout << "Stereo set to cd" << std::endl;
    }

    void setRadio(){
        std::cout << "Stereo set to radio" << std::endl;
    }

    void setVolume(int volume){
        this->volume = volume;

        std::cout << "Stereo volume set to " << volume << std::endl;
    }
};