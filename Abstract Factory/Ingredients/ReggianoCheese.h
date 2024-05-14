#pragma once

#include "Cheese.h"

class ReggianoCheese : public Cheese{
public:
    ReggianoCheese(){
        std::cout << "Reggiano cheese made" << std::endl;
    }
};