// https://en.wikipedia.org/wiki/Decorator_pattern#C++
// https://www.youtube.com/watch?v=rtfDbdSV4a8&t=289s

#include <iostream>
#include <memory>

// Including all of our drinks
#include "Beverages/Beverage.h"
#include "Beverages/DarkRoast.h"
#include "Beverages/Espresso.h"
#include "Beverages/Decaf.h"
#include "Beverages/HouseBlend.h"

// Including all of our beverages (which are techincally drinks here)
#include "Beverages/Condiments/Mocha.h"
#include "Beverages/Condiments/Soy.h"
#include "Beverages/Condiments/Whip.h"
#include "Beverages/Condiments/SteamedMilk.h"

int main(){
    std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>();

    std::cout << beverage ->getDescription() << " $" << beverage->cost() << std::endl;

    std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>();
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Whip>(std::move(beverage2));

    std::cout << beverage2 ->getDescription() << " $" << beverage2->cost() << std::endl;

    return 0;
}

