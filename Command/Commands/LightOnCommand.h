#pragma once

#include "Command.h"

class LightOnCommand : public Command{
private: 
    Light* light;
public:
    LightOnCommand(Light* light) : light(light) {}

    void execute() override {
        light->on();
    }

    void undo() override {
        light->off();
    }
};