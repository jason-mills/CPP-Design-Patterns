#pragma once

#include "PizzaStore.h"
#include "../IngredientFactories/ChicagoPizzaIngredientFactory.h"


class ChicagoPizzaStore : public PizzaStore{
    PizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();

    std::unique_ptr<Pizza> createPizza(std::string type){
        if(type == "cheese"){
            return std::make_unique<CheesePizza>(ingredientFactory);
        }
        else if(type == "clam"){
            return std::make_unique<CheesePizza>(ingredientFactory);
        }
        else if(type == "pepperoni"){
            return std::make_unique<CheesePizza>(ingredientFactory);
        }
        else if(type == "veggie"){
            return std::make_unique<CheesePizza>(ingredientFactory);
        }
        else{
            return nullptr;
        }
    }
};