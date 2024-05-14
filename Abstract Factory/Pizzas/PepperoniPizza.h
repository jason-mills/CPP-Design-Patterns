#pragma once

#include "Pizza.h"
#include "../IngredientFactories/PizzaIngredientFactory.h"

class PepperoniPizza : public Pizza{
private:
    PizzaIngredientFactory* ingredientFactory;

public: 
    PepperoniPizza(PizzaIngredientFactory* ingredientFactory) : ingredientFactory(ingredientFactory) {}

    void prepare(){
        cheese = ingredientFactory->createCheese();
        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
        pepperoni = ingredientFactory->createPepperoni();
    }
};