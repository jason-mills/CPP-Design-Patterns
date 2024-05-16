#pragma once

#include "Command.h"
#include "../Controllable/Stereo.h"

class StereoOnWithCDCommand : public Command{
private:
    Stereo* stereo;

public:
    StereoOnWithCDCommand(Stereo* stereo) : stereo(stereo) {}

    void execute(){
        stereo->on();
        stereo->setCd();
        stereo->setVolume(1);
    }

    void undo(){
        stereo->off();
    }
};