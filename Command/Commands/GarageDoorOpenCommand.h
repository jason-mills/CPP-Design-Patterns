#pragma once

#include "Command.h"
#include "../Controllable/GarageDoor.h"

class GarageDoorOpenCommand : public Command{
private:
    GarageDoor* door;

public:
    GarageDoorOpenCommand(GarageDoor* door) : door(door) {}

    void execute(){
        door->up();
    }

    void undo(){
        door->down();
    }
};