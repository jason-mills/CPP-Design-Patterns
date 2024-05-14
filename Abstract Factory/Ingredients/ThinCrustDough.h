#pragma once

#include "Dough.h"

class ThinCrustDough : public Dough{
public:
    ThinCrustDough(){
        std::cout << "Thin crust dough made" << std::endl;
    }
};