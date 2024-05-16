#pragma once

#include <iostream>

class GarageDoor{
public:
    GarageDoor(){}

    void up(){
        std::cout << "Garage door is open" << std::endl;
    }

    void down(){
        std::cout << "Garage door is closed" << std::endl; 
    }

    void stop(){
        std::cout << "Garage door has stopped moving" << std::endl; 
    }

    void lightOn(){
        std::cout << "Garage light is on" << std::endl; 
    }

    void lightOff(){
        std::cout << "Garage light is off" << std::endl; 
    }
};