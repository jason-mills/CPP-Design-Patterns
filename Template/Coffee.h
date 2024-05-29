#pragma once

#include <iostream>

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage {
private:
    char getUserInput(){
        char answer;

        std::cout << "Would you like milk and sugar with your coffee? (y/n)? " << std::endl;
        std::cin >> answer;

        return answer;
    }

public:
    Coffee(){}

    bool customerWantsCondiments() override {
        while(true){
            char answer = getUserInput();
            switch(answer){
                case('y'):
                    return true;
                case('n'):
                    return false;
                default:
                    std::cout << "Please enter a valid input (y/n)" << std::endl;
            }
        }
    }

    void brew() override {
        std::cout << "Dripping Coffee through filter" << std::endl;
    }

    void addCondiments() override {
        std::cout << "Adding Sugar and Milk" << std::endl;
    }
};