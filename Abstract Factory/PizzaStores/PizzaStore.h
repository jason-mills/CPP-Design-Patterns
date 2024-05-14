#pragma once

#include "../Pizzas/Pizza.h"
#include "../Pizzas/CheesePizza.h"
#include "../Pizzas/ClamPizza.h"
#include "../Pizzas/PepperoniPizza.h"
#include "../Pizzas/VeggiePizza.h"

class PizzaStore{
public: 
    std::unique_ptr<Pizza> orderPizza(std::string type){
        std::unique_ptr<Pizza> pizza;

        pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

    virtual std::unique_ptr<Pizza> createPizza(std::string type) = 0;
};