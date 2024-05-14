#pragma once

#include "Veggies.h"

class Mushroom : public Veggies{
public:
    Mushroom(){
        std::cout << "Mushrooms made" << std::endl;
    }
};