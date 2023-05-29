#pragma once

#include "WeatherDataObserver.h"

class WeatherDataSubject{
private:
    

public:
    virtual void registerObserver(WeatherDataObserver *observer) = 0;
    virtual void removeObserver(WeatherDataObserver *observer) = 0;
    virtual void notifyObservers() = 0;

    virtual ~WeatherDataSubject(){}
};