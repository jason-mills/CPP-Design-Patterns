#pragma once

#include <iostream>
#include <string>

#include "Amplifier.h"

class Amplifier;

class Tuner{
private:
    Amplifier* amplifier;

public:
    Tuner(Amplifier* amplifier) : amplifier(amplifier) {}

    void on(){
        std::cout << "Tuner is on" << std::endl;
    }

    void off(){
        std::cout << "Tuner is off" << std::endl;
    }

    void setAm(){
        std::cout << "Tuner is set to AM" << std::endl;
    }

    void setFm(){
        std::cout << "Tuner is set to FM" << std::endl;
    }

    void setFrequency(int frequency){
        std::cout << "Tuner set to " <<  frequency << std::endl;
    }
};