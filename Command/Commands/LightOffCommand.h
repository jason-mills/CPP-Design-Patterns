#pragma once

#include "Command.h"

class LightOffCommand : public Command{
private:
    Light* light;

public:
    LightOffCommand(Light* light) : light(light) {}

    void execute() override {
        light->off();
    }

    void undo() override {
        light->on();
    }
};