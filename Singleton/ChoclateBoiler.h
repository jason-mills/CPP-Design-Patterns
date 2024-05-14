#pragma once

#include <iostream>
#include <memory>
#include <mutex>
#include <string>

class ChoclateBoiler{
private:
    static ChoclateBoiler* boiler;
    static std::mutex mutex_;
    bool empty, boiled;

    ChoclateBoiler() : empty(true), boiled(false) {}
    ~ChoclateBoiler(){}

public:
    ChoclateBoiler(ChoclateBoiler &boiler) = delete;

    void operator=(const ChoclateBoiler &) = delete;

    static ChoclateBoiler* GetInstance(){
        std::lock_guard<std::mutex> lock(mutex_);
        if(boiler == nullptr){
            boiler = new ChoclateBoiler();
        }

        return boiler;
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

};