#pragma once

#include <vector>

#include "Command.h"

class MacroCommand : public Command{
private:
    std::vector<Command*> commands;

public:
    MacroCommand(std::vector<Command*>&& commands) : commands(commands) {}

    void execute(){
        for(Command* command : commands){
            command->execute();
        }
    }

    void undo(){
        for(Command* command : commands){
            command->undo();
        }
    }
};