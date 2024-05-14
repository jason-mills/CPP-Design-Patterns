#pragma once

#include "PizzaIngredientFactory.h"
#include "IngredientIncludes.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory{
    std::unique_ptr<Cheese> createCheese(){
        return std::make_unique<ReggianoCheese>();
    }

    std::unique_ptr<Clams> createClams(){
        return std::make_unique<FrozenClams>();
    }

    std::unique_ptr<Dough> createDough(){
        return std::make_unique<ThickCrustDough>();
    }

    std::unique_ptr<Pepperoni> createPepperoni(){
        return std::make_unique<StandardPepperoni>();
    }

    std::unique_ptr<Sauce> createSauce(){
        return std::make_unique<MarinaraSauce>();
    }

    std::vector<std::unique_ptr<Veggies>> createVeggies(){
        std::vector<std::unique_ptr<Veggies>> veggies;

        veggies.push_back(std::make_unique<Mushroom>());
        
        return veggies;
    }
};