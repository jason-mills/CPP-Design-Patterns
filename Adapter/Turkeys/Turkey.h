#pragma once

#include <iostream>

class Turkey{
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;

    virtual ~Turkey() {}
};