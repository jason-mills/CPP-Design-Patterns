#pragma once

#include "Pepperoni.h"

class StandardPepperoni : public Pepperoni{
public:
    StandardPepperoni(){
        std::cout << "Standard pepperoni made" << std::endl;
    }
};