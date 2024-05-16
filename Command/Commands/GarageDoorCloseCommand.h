#pragma once

#include "Command.h"
#include "../Controllable/GarageDoor.h"

class GarageDoorCloseCommand : public Command{
private:
    GarageDoor* door;

public:
    GarageDoorCloseCommand(GarageDoor* door) : door(door) {}

    void execute(){
        door->down();
    }

    void undo(){
        door->up();
    }
};