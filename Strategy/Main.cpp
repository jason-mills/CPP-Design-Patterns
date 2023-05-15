#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include <memory>

int main(){
    MallardDuck aMallardDuck;
    
    aMallardDuck.quack();
    aMallardDuck.fly();

    // aMallardDuck.setFlyBehavior(std::make_unique<>);
    // aMallardDuck.setQuackBehavior();

    return 0;
}