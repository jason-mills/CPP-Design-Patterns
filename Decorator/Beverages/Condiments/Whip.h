#pragma once

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator {
private:
    std::unique_ptr<Beverage> beverage;

public: 
    Whip(std::unique_ptr<Beverage> aBeverage);

    std::string getDescription() override;
    double cost();
};