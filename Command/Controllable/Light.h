#pragma once

#include <iostream>

class Light{
public:
    Light(){}

    void on(){
        std::cout << "Light on" << std::endl;
    }

    void off(){
        std::cout << "Light off" << std::endl;
    }
};

