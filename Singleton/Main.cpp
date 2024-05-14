#include <iostream>

#include "AltBoiler.h"
#include "ChoclateBoiler.h"
#include <thread>

ChoclateBoiler* ChoclateBoiler::boiler{nullptr};
std::mutex ChoclateBoiler::mutex_;

void thing1(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    ChoclateBoiler* boiler = ChoclateBoiler::GetInstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();
}

void thing2(){
    ChoclateBoiler* boiler = ChoclateBoiler::GetInstance();
    boiler->fill();
}

void thing3(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    AltBoiler& boiler = AltBoiler::GetInstance();
    boiler.fill();
    boiler.boil();
    boiler.drain();
}

void thing4(){
    AltBoiler& boiler = AltBoiler::GetInstance();
    boiler.fill();
}

int main(){
    std::thread t1(thing1);
    std::thread t2(thing2);

    t1.join();
    t2.join();

    std::thread t3(thing3);
    std::thread t4(thing4);

    t3.join();
    t4.join();

    return 0;
}