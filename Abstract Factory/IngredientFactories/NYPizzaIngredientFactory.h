#pragma once

#include "PizzaIngredientFactory.h"
#include "IngredientIncludes.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory{
public:
    std::unique_ptr<Cheese> createCheese(){
        return std::make_unique<MozzarellaCheese>();
    }

    std::unique_ptr<Clams> createClams(){
        return std::make_unique<FreshClams>();
    }

    std::unique_ptr<Dough> createDough(){
        return std::make_unique<ThinCrustDough>();
    }

    std::unique_ptr<Pepperoni> createPepperoni(){
        return std::make_unique<StandardPepperoni>();
    }

    std::unique_ptr<Sauce> createSauce(){
        return std::make_unique<PlumTomatoSauce>();
    }

    std::vector<std::unique_ptr<Veggies>> createVeggies(){
        std::vector<std::unique_ptr<Veggies>> veggies;

        veggies.push_back(std::make_unique<Mushroom>());
        veggies.push_back(std::make_unique<RedPepper>());

        return veggies;
    }
};