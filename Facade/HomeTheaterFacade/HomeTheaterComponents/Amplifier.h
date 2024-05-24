#pragma once

#include <iostream>
#include <string>

#include "CdPlayer.h"
#include "DvdPlayer.h"
#include "Tuner.h"

class Amplifier{
private:
    Tuner* tuner;
    DvdPlayer* dvdPlayer;
    CdPlayer* cdPlayer;
    int volume = 0;

public:
    Amplifier(){}

    void on(){
        std::cout << "Amplifier is on" << std::endl;
    }

    void off(){
        std::cout << "Amplifier is off" << std::endl;
    }

    void setCd(CdPlayer* aCdPlayer){
        cdPlayer = aCdPlayer;
        std::cout << "Amplifier CD Player set" << std::endl;
    }

    void setDvd(DvdPlayer* aDvdPlayer){
        dvdPlayer = aDvdPlayer;
        std::cout << "Amplifier DVD Player set" << std::endl;
    }

    void setStereoSound(){
        std::cout << "Amplifier is set to Stereo Sound" << std::endl;
    }

    void setSurroundSound(){
        std::cout << "Amplifier is set to Surround Sound" << std::endl;
    }

    void setTuner(Tuner* aTuner){
        tuner = aTuner;
        std::cout << "Amplifier is on" << std::endl;
    }

    void setVolume(int aVolume){
        volume = aVolume;
        std::cout << "Amplifier is on" << std::endl;
    }
};