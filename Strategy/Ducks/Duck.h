#pragma once

#include "../Behaviors/FlyBehavior.h"
#include "../Behaviors/QuackBehavior.h"

#include <memory>

class Duck{
public:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;

    Duck();
    Duck(std::unique_ptr<QuackBehavior> &&aQuackBehavior, std::unique_ptr<FlyBehavior> &&aFlyBehavior);

    void fly();
    void quack();

    void setFlyBehavior(std::unique_ptr<FlyBehavior> &&newFlyBehavior);
    void setQuackBehavior(std::unique_ptr<QuackBehavior> &&newQuackBehavior);

    virtual ~Duck() = default;
};

