#include "Soy.h"

Soy::Soy(std::unique_ptr<Beverage> aBeverage) : beverage(std::move(aBeverage)) {}

std::string Soy::getDescription(){
    return beverage->getDescription() + ", Soy";
}

double Soy::cost(){
    return 0.15 + beverage->cost();
}