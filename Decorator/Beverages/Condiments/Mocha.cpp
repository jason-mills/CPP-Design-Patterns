#include "Mocha.h"

Mocha::Mocha(std::unique_ptr<Beverage> aBeverage) : beverage(std::move(aBeverage)) {}

std::string Mocha::getDescription(){
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost(){
    return 0.20 + beverage->cost();
}