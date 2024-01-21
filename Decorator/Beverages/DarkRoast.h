#pragma once

#include "Beverage.h"

class DarkRoast : public Beverage {
public:
    DarkRoast();
    DarkRoast(const DarkRoast& darkRoast);

    double cost() override;
};