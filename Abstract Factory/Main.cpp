#include <iostream>

#include "PizzaStores/NYPizzaStore.h"
#include "PizzaStores/ChicagoPizzaStore.h"

int main(){
    PizzaStore* nyPizzaStore = new NYPizzaStore();
    std::unique_ptr<Pizza> pizza = nyPizzaStore->orderPizza("cheese");

    std::cout << "\n";

    PizzaStore* chicagoPizzaStore = new ChicagoPizzaStore();
    pizza = chicagoPizzaStore->orderPizza("cheese");

    return 0;
}