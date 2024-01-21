#pragma once

#include "Beverage.h"

class HouseBlend : public Beverage{
public:
    HouseBlend(){
        description = "House Blend";
    }

    double cost() override;
};