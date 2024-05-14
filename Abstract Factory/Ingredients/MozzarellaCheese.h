#pragma once

#include "Cheese.h"

class MozzarellaCheese : public Cheese{
public:
    MozzarellaCheese(){
        std::cout << "Mozzarella cheese made" << std::endl;
    }
};