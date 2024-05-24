#pragma once

#include <iostream>

class TheaterLights{
private:
    int level = 0;

public:
    void on(){
        level = 20;
        std::cout << "Theater Lights are on" << std::endl;
    }

    void off(){
        level = 0;
        std::cout << "Theater Lights are off" << std::endl;
    }

    void dim(int newLevel){
        level = newLevel;
        std::cout << "Theater Lights are dimmed" << std::endl;
    }
};