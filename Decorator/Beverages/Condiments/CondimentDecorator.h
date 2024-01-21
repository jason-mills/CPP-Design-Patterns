#pragma once

#include "../Beverage.h"

// This is just an interface class
// We want the condiments for the drinks behavior
class CondimentDecorator : public Beverage{
public:
    virtual std::string getDescription() = 0;
    virtual double cost() = 0;
    
    virtual ~CondimentDecorator(){};
};