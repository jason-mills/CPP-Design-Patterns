#pragma once

#include "FlyBehavior.h"

#include <iostream>

class NoFly: public FlyBehavior{
public:
    void fly() override;
};