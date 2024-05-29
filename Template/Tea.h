#pragma once

#include <iostream>

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage{
public:
    Tea(){}
    
    void brew(){
        std::cout << "Steeping the tea" << std::endl;
    }

    void addCondiments(){
        std::cout << "Adding Lemon" << std::endl;
    }
};