#pragma once

#include <iostream>

class CeilingFan{
private:
    int speed = 0;

public: 
    enum Speeds {High = 3, Medium = 2, Low = 1, Off = 0};

    CeilingFan(){}

    void high(){
        speed = High;
    }

    void medium(){
        speed = Medium;
    }

    void low(){
        speed = Low;
    }

    void off(){
        speed = Off;
    }

    int getSpeed(){
        return speed;
    }
};