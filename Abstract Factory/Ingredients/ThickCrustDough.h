#pragma once

#include "Dough.h"

class ThickCrustDough : public Dough{
public:
    ThickCrustDough(){
        std::cout << "Thick crust dough made" << std::endl;
    }
};