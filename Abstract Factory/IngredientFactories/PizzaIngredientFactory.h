#pragma once

#include <memory>
#include <vector>

#include "../Ingredients/Cheese.h"
#include "../Ingredients/Clams.h"
#include "../Ingredients/Dough.h"
#include "../Ingredients/Pepperoni.h"
#include "../Ingredients/Sauce.h"
#include "../Ingredients/Veggies.h"

class PizzaIngredientFactory{
public:
    virtual std::unique_ptr<Cheese> createCheese() = 0;
    virtual std::unique_ptr<Clams> createClams() = 0;
    virtual std::unique_ptr<Dough> createDough() = 0;
    virtual std::unique_ptr<Pepperoni> createPepperoni() = 0;
    virtual std::unique_ptr<Sauce> createSauce() = 0;
    virtual std::vector<std::unique_ptr<Veggies>> createVeggies() = 0;
};