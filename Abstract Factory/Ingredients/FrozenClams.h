#pragma once

#include "Clams.h"

class FrozenClams : public Clams{
public:
    FrozenClams(){
        std::cout << "Frozen clams made" << std::endl;
    }
};