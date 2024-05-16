#pragma once

#include <iostream>
#include "Controllables.h"

class Command{
public: 
    virtual void execute() = 0;
    virtual void undo() = 0;

    virtual ~Command() = default;
};