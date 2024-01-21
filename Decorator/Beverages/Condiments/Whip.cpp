#include "Whip.h"

Whip::Whip(std::unique_ptr<Beverage> aBeverage) : beverage(std::move(aBeverage)) {}

std::string Whip::getDescription(){
    return beverage->getDescription() + ", Whip";
}

double Whip::cost(){
    return 0.10 + beverage->cost();
}