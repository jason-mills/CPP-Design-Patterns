#pragma once

#include "Pizza.h"
#include "../IngredientFactories/PizzaIngredientFactory.h"

class ClamPizza : public Pizza{
private:
    PizzaIngredientFactory* ingredientFactory;

public: 
    ClamPizza(PizzaIngredientFactory* ingredientFactory) : ingredientFactory(ingredientFactory) {}

    void prepare(){
        cheese = ingredientFactory->createCheese();
        clams = ingredientFactory->createClams();
        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
    }
};