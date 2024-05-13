#pragma once

#include <iostream>

#include "WeatherDataObserver.h"
#include "../Observed/WeatherDataSubject.h"

class CurrentConditionsDisplay : public WeatherDataObserver{
private:
    WeatherDataSubject &weatherData;
    float temperature, humidity;

public:
    CurrentConditionsDisplay(WeatherDataSubject &weatherData);

    void display();
    void unregister();
    void update(const float newTemperature, const float newHumidity, const float newPressure) override;
};