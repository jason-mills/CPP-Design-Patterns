#include "Duck.h"

Duck::Duck(){}

Duck::Duck(std::unique_ptr<QuackBehavior> &&aQuackBehavior, std::unique_ptr<FlyBehavior> &&aFlyBehavior) : 
quackBehavior(std::move(aQuackBehavior)), 
flyBehavior(std::move(aFlyBehavior)){}

void Duck::quack(){
    quackBehavior->quack();
}

void Duck::fly(){
    flyBehavior->fly();
}

void Duck::setQuackBehavior(std::unique_ptr<QuackBehavior> &&newQuackBehavior){
    quackBehavior = std::move(newQuackBehavior);
}

void Duck::setFlyBehavior(std::unique_ptr<FlyBehavior> &&newFlyBehavior){
    flyBehavior = std::move(newFlyBehavior);
}