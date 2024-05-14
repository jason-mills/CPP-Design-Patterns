#pragma once

#include <iostream>
#include <memory>
#include <mutex>
#include <string>

class AltBoiler{
public:
    static AltBoiler& GetInstance(){
        static AltBoiler instance;

        return instance;
    }

    void fill(){
        if(isEmpty()){
            std::cout << "Filling" << std::endl;
            empty = false;
            boiled = false;
        }
        else{
            std::cout << "Already full" << std::endl;
        }
    }

    void drain(){
        if(!isEmpty() && isBoiled()){
            std::cout << "Draining" << std::endl;
            empty = true;
        }
    }

    void boil(){
        if(!isEmpty() && !isBoiled()){
            std::cout << "Boiling" << std::endl;
            boiled = true;
        }
    }

    bool isEmpty(){
        return empty;
    }

    bool isBoiled(){
        return boiled;
    }
private:
    bool empty, boiled;
    AltBoiler() : empty(true), boiled(false) {}

public:
    AltBoiler(const AltBoiler &boiler) = delete;
    void operator=(const AltBoiler &) = delete;
};