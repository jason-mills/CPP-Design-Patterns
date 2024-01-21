#pragma once

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator{
private:
    std::unique_ptr<Beverage> beverage;


public: 
    Soy(std::unique_ptr<Beverage> aBeverage);

    std::string getDescription() override;
    double cost();
};