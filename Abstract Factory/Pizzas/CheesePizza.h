#pragma once

#include "Pizza.h"
#include "../IngredientFactories/PizzaIngredientFactory.h"

class CheesePizza : public Pizza{
private:
    PizzaIngredientFactory* ingredientFactory;

public: 
    CheesePizza(PizzaIngredientFactory* ingredientFactory) : ingredientFactory(ingredientFactory) {}

    void prepare(){
        cheese = ingredientFactory->createCheese();
        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
    }
};