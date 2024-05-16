#pragma once

#include "../Ducks/Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck{
private:
    Turkey *turkey;
public:
    TurkeyAdapter(Turkey* turkey) : turkey(turkey) {}

    void quack(){
        turkey->gobble();
    }

    void fly(){
        for(int i = 0; i < 5; i++){
            turkey->fly();
        }
    }
};