#pragma once

#include "PizzaStore.h"
#include "../Pizzas/NYStylePizzas/NYStyleCheesePizza.h"
#include "../Pizzas/NYStylePizzas/NYStyleClamPizza.h"
#include "../Pizzas/NYStylePizzas/NYStylePepperoniPizza.h"
#include "../Pizzas/NYStylePizzas/NYStyleVeggiePizza.h"

class NYPizzaStore : public PizzaStore{
public:
    std::unique_ptr<Pizza> createPizza(std::string type) override;
};