/*
 * This is an example implementation of the strategy design pattern. 
 * The motivation behind the strategy design pattern is that we have a set behaviors and a set of things that use those behaviors.
 * If we make all of those things inherit a default way of behaving this can have bad consequences.
 * Further, it would be nice if behavior could change dynamically.
 * By creating behaviors as interfaces that a base class has we can make both of these things possible.
 */

#include "FlyWithWings.h"
#include "MallardDuck.h"
#include "NoFly.h"
#include "Quack.h"
#include "SqueakQuack.h"

#include <memory>

int main(){
    // We make a class of a certain model and make it perform actions
    MallardDuck aMallardDuck;
    aMallardDuck.fly();
    aMallardDuck.quack();

    // We dynamically change the way that this model behaves and make it perform those new actions
    aMallardDuck.setFlyBehavior(std::make_unique<NoFly>());
    aMallardDuck.setQuackBehavior(std::make_unique<SqueakQuack>());
    aMallardDuck.fly();
    aMallardDuck.quack();

    return 0;
}
