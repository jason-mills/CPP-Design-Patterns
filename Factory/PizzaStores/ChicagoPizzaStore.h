#pragma once

#include "PizzaStore.h"
#include "../Pizzas/ChicagoStylePizzas/ChicagoStyleCheesePizza.h"
#include "../Pizzas/ChicagoStylePizzas/ChicagoStyleClamPizza.h"
#include "../Pizzas/ChicagoStylePizzas/ChicagoStylePepperoniPizza.h"
#include "../Pizzas/ChicagoStylePizzas/ChicagoStyleVeggiePizza.h"

class ChicagoPizzaStore : public PizzaStore{
public:
    std::unique_ptr<Pizza> createPizza(std::string type) override;
};