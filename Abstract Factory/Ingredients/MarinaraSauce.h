#pragma once

#include "Sauce.h"

class MarinaraSauce : public Sauce{
public:
    MarinaraSauce(){
        std::cout << "Marinara sauce made" << std::endl;
    }
};