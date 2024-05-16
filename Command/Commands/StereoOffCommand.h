#pragma once

#include "Command.h"
#include "../Controllable/Stereo.h"

class StereoOffCommand : public Command{
private:
    Stereo* stereo;

public:
    StereoOffCommand(Stereo* stereo) : stereo(stereo) {}

    void execute(){
        stereo->off();
    }

    void undo(){
        stereo->on();
    }
};