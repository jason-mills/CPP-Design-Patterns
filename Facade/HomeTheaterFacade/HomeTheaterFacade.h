#pragma once

#include "HomeTheaterComponents/Amplifier.h"
#include "HomeTheaterComponents/Projector.h"
#include "HomeTheaterComponents/TheaterLights.h"
#include "HomeTheaterComponents/Screen.h"
#include "HomeTheaterComponents/PopcornPopper.h"

class HomeTheaterFacade{
private:
    Amplifier* amplifier;
    Tuner* tuner;
    DvdPlayer* dvdPlayer;
    CdPlayer* cdPlayer;
    Projector* projector;
    TheaterLights* lights;
    Screen* screen;
    PopcornPopper* popcornPopper;

public:
    HomeTheaterFacade(
    Amplifier* amplifier,
    Tuner* tuner,
    DvdPlayer* dvdPlayer,
    CdPlayer* cdPlayer,
    Projector* projector,
    TheaterLights* lights,
    Screen* screen,
    PopcornPopper* popcornPopper) :
        amplifier(amplifier), 
        tuner(tuner), 
        dvdPlayer(dvdPlayer), 
        cdPlayer(cdPlayer),
        projector(projector),
        lights(lights),
        screen(screen),
        popcornPopper(popcornPopper) {}
    
    void watchMovie(std::string movie){
        popcornPopper->on();
        popcornPopper->pop();
        lights->dim(10);
        screen->down();
        projector->on();
        projector->wideScreenMode();
        amplifier->on();
        amplifier->setDvd(dvdPlayer);
        amplifier->setVolume(5);
        dvdPlayer->on();
        dvdPlayer->play(movie);
    }

    void endMovie(){
        popcornPopper->off();
        lights->on();
        screen->up();
        projector->off();
        amplifier->off();
        dvdPlayer->stop();
        dvdPlayer->eject();
        dvdPlayer->off();
    }
};