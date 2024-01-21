#pragma once

#include "CondimentDecorator.h"

class SteamedMilk : public CondimentDecorator{
private:
    std::unique_ptr<Beverage> beverage;


public: 
    SteamedMilk(std::unique_ptr<Beverage> aBeverage);

    std::string getDescription() override;
    double cost();
};