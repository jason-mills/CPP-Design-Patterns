#pragma once

#include "Command.h"
#include "../Controllable/CeilingFan.h"

class CeilingFanHighCommand : public Command{
private:
    CeilingFan* fan;
    int prevSpeed;

public:
    CeilingFanHighCommand(CeilingFan* fan) : fan(fan) {}

    void execute() override {
        prevSpeed = fan->getSpeed();
        fan->high();
    }

    void undo() override {
        switch(prevSpeed){
            case fan->High:
                fan->high();
                break;

            case fan->Medium:
                fan->medium();
                break;

            case fan->Low:
                fan->low();
                break;

            case fan->Off:
                fan->off();
                break;
        }
    }
};