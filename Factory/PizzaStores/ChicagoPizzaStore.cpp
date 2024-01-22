#include "ChicagoPizzaStore.h"

std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(std::string type){
    if(type == "cheese"){
        return std::make_unique<ChicagoStyleCheesePizza>();
    }
    else if(type == "clam"){
        return std::make_unique<ChicagoStyleClamPizza>();
    }
    else if(type == "pepperoni"){
        return std::make_unique<ChicagoStylePepperoniPizza>();
    }
    else if(type == "veggie"){
        return std::make_unique<ChicagoStyleVeggiePizza>();
    }
    else{
        return nullptr;
    }
}