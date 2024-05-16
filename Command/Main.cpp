#include "Commands/MacroCommand.h"
#include "RemoteControl.h"
#include "Commands/LightOnCommand.h"
#include "Commands/LightOffCommand.h"
#include "Commands/CeilingFanHighCommand.h"
#include "Commands/CeilingFanOffCommand.h"
#include "Commands/GarageDoorOpenCommand.h"
#include "Commands/GarageDoorCloseCommand.h"
#include "Commands/StereoOnWithCDCommand.h"
#include "Commands/StereoOffCommand.h"

int main(){
    RemoteControl remote;

    Light livingRoomLight;
    LightOnCommand livingRoomLightOn(&livingRoomLight);
    LightOffCommand livingRoomLightOff(&livingRoomLight);

    Light kitchenLight;
    LightOnCommand kitchenLightOn(&kitchenLight);
    LightOffCommand kitchenLightOff(&kitchenLight);

    CeilingFan livingRoomFan;
    CeilingFanHighCommand livingRoomFanOn(&livingRoomFan);
    CeilingFanOffCommand livingRoomFanOff(&livingRoomFan);

    GarageDoor door;
    GarageDoorOpenCommand garageDoorOn(&door);
    GarageDoorCloseCommand garageDoorOff(&door);

    Stereo stereo;
    StereoOnWithCDCommand stereoOn(&stereo);
    StereoOffCommand stereoOff(&stereo);

    remote.setCommand(0, &livingRoomLightOn, &livingRoomLightOff);
    remote.setCommand(1, &kitchenLightOn, &kitchenLightOff);
    remote.setCommand(2, &livingRoomFanOn, &livingRoomFanOff);
    remote.setCommand(3, &garageDoorOn, &garageDoorOff);
    remote.setCommand(4, &stereoOn, &stereoOff);

    remote.onButtonWasPushed(0);
    remote.offButtonWasPushed(0);
    remote.undoButtonWasPushed();

    remote.onButtonWasPushed(1);
    remote.offButtonWasPushed(1);
    remote.undoButtonWasPushed();

    remote.onButtonWasPushed(3);
    remote.offButtonWasPushed(3);
    remote.undoButtonWasPushed();

    remote.onButtonWasPushed(4);
    remote.offButtonWasPushed(4);
    remote.undoButtonWasPushed();

    remote.onButtonWasPushed(2);
    remote.undoButtonWasPushed();

    MacroCommand comingInMacro({&livingRoomLightOn, &kitchenLightOn, &livingRoomFanOn, &garageDoorOn, &stereoOn});
    MacroCommand goingOutMacro({&livingRoomLightOff, &kitchenLightOff, &livingRoomFanOff, &garageDoorOff, &stereoOff});

    remote.setCommand(5, &comingInMacro, &goingOutMacro);

    remote.onButtonWasPushed(5);
    remote.undoButtonWasPushed();

    return 0;
}