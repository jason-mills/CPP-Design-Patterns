#include "MallardDuck.h"

MallardDuck::MallardDuck(){
    flyBehavior = std::move(std::make_unique<FlyWithWings>());
    quackBehavior = std::move(std::make_unique<Quack>());
}