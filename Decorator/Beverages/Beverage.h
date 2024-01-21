#pragma once

#include <string>
#include <memory>
#include <iostream>

class Beverage{

public: 
    std::string description = "Unknown Beverage"; // This is public for the beverage class but private in classes that inherit from it
    
    // This needs to be virtual so that CondimentDecorator can override
    // If you just provide this as a base function that will be the default implementation
    // and you will not get the recursive calls that you want to happen
    virtual std::string getDescription(){
        return description;
    }

    virtual double cost() = 0;

    virtual ~Beverage(){};
};