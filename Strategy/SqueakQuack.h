#pragma once

#include "QuackBehavior.h"

#include <iostream>

class SqueakQuack: public QuackBehavior{
    void quack() override;
};