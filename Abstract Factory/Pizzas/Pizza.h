#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "../Ingredients/Cheese.h"
#include "../Ingredients/Clams.h"
#include "../Ingredients/Dough.h"
#include "../Ingredients/Pepperoni.h"
#include "../Ingredients/Sauce.h"
#include "../Ingredients/Veggies.h"

class Pizza{
public:
    std::string name;
    std::unique_ptr<Dough> dough;
    std::unique_ptr<Sauce> sauce;
    std::vector<std::unique_ptr<Veggies>> veggies;
    std::unique_ptr<Cheese> cheese;
    std::unique_ptr<Pepperoni> pepperoni;
    std::unique_ptr<Clams> clams;

    virtual void prepare() = 0;

    void bake(){
        std::cout << "Baking pizza" << std::endl;
    }

    void cut(){
        std::cout << "Cutting pizza" << std::endl;
    }

    void box(){
        std::cout << "Boxing pizza" << std::endl;
    }

    virtual ~Pizza(){};
};