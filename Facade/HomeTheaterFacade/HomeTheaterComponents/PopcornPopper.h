#pragma once

#include <iostream>

class PopcornPopper{
public:
    PopcornPopper(){}

    void on(){
        std::cout << "Popcorn Popper is on" << std::endl;
    }

    void off(){
        std::cout << "Popcorn Popper is off" << std::endl;
    }

    void pop(){
        std::cout << "Popcorn Popper is popping" << std::endl;
    }
};