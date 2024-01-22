#pragma once

#include <string>
#include <memory>

#include "../Pizzas/Pizza.h"

class PizzaStore {
public:
    std::unique_ptr<Pizza> orderPizza(std::string type);

    virtual std::unique_ptr<Pizza> createPizza(std::string type) = 0;

    virtual ~PizzaStore(){}
};