#pragma once

#include <iostream>

class CaffeineBeverage{
public:
    void prepareRecipe(){
        boilWater();
        brew();
        pourInCup();
        if(customerWantsCondiments()){
            addCondiments();
        }
    }

    virtual void brew() = 0;

    virtual void addCondiments() = 0;

    void boilWater(){
        std::cout << "Boiling water" << std::endl;
    }

    void pourInCup(){
        std::cout << "Pouring into cup" << std::endl;
    }

    virtual bool customerWantsCondiments(){
        return true;
    }

    virtual ~CaffeineBeverage(){}
};