#include "NYPizzaStore.h"

std::unique_ptr<Pizza> NYPizzaStore::createPizza(std::string type){
    if(type == "cheese"){
        return std::make_unique<NYStyleCheesePizza>();
    }
    else if(type == "clam"){
        return std::make_unique<NYStyleClamPizza>();
    }
    else if(type == "pepperoni"){
        return std::make_unique<NYStylePepperoniPizza>();
    }
    else if(type == "veggie"){
        return std::make_unique<NYStyleVeggiePizza>();
    }
    else{
        return nullptr;
    }
}