#include "PizzaStores/ChicagoPizzaStore.h"
#include "PizzaStores/NYPizzaStore.h"

#include "Pizzas/ChicagoStylePizzas/ChicagoStyleCheesePizza.h"
#include "Pizzas/ChicagoStylePizzas/ChicagoStyleClamPizza.h"
#include "Pizzas/ChicagoStylePizzas/ChicagoStylePepperoniPizza.h"
#include "Pizzas/ChicagoStylePizzas/ChicagoStyleVeggiePizza.h"

#include "Pizzas/NYStylePizzas/NYStyleCheesePizza.h"
#include "Pizzas/NYStylePizzas/NYStyleClamPizza.h"
#include "Pizzas/NYStylePizzas/NYStylePepperoniPizza.h"
#include "Pizzas/NYStylePizzas/NYStyleVeggiePizza.h"
#include <iostream>

int main(){
    std::unique_ptr<PizzaStore> chicagoPizzaStore = std::make_unique<ChicagoPizzaStore>();
    std::unique_ptr<Pizza> pizza = chicagoPizzaStore->orderPizza("cheese");

    std::cout << "\n";

    std::unique_ptr<PizzaStore> nyPizzaStore = std::make_unique<NYPizzaStore>();
    std::unique_ptr<Pizza> pizza1 = nyPizzaStore->orderPizza("veggie");
    
    return 0;
}