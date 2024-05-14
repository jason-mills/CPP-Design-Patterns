#pragma once

#include "Pizza.h"
#include "../IngredientFactories/PizzaIngredientFactory.h"

class VeggiePizza : public Pizza{
private:
    PizzaIngredientFactory* ingredientFactory;

public: 
    VeggiePizza(PizzaIngredientFactory* ingredientFactory) : ingredientFactory(ingredientFactory) {}

    void prepare(){
        cheese = ingredientFactory->createCheese();
        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
        veggies = ingredientFactory->createVeggies();
    }
};