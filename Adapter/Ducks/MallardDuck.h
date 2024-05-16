#pragma once

#include "Duck.h"

class MallardDuck : public Duck{
public:
    void quack(){
        std::cout << "Quack" << std::endl;
    }

    void fly(){
        std::cout << "I'm flying" << std::endl;
    }
};