#pragma once

#include "Beverage.h"

class Espresso : public Beverage{
public:
    Espresso(){
        description = "Espresso";
    }

    double cost() override;
};