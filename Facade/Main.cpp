#include "HomeTheaterFacade/HomeTheaterFacade.h"

int main(){
    Amplifier amplifier;
    Tuner tuner(&amplifier);
    DvdPlayer dvdPlayer(&amplifier);
    CdPlayer cdPlayer(&amplifier);
    Projector projector(&dvdPlayer);
    TheaterLights lights;
    Screen screen;
    PopcornPopper popcornPopper;

    HomeTheaterFacade homeTheater(&amplifier, &tuner, &dvdPlayer, &cdPlayer, &projector, &lights, &screen, &popcornPopper);
    homeTheater.watchMovie("Indiana Jones");
    homeTheater.endMovie();

    return 0;
}