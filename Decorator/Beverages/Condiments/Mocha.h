#pragma once

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator {
private:
    std::unique_ptr<Beverage> beverage;

public: 
    Mocha(std::unique_ptr<Beverage> aBeverage);

    std::string getDescription() override;
    double cost();
};