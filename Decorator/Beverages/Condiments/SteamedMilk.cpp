#include "SteamedMilk.h"

SteamedMilk::SteamedMilk(std::unique_ptr<Beverage> aBeverage) : beverage(std::move(aBeverage)) {}

std::string SteamedMilk::getDescription(){
    return beverage->getDescription() + ", SteamedMilk";
}

double SteamedMilk::cost(){
    return 0.10 + beverage->cost();
}