#pragma once

class WeatherDataObserver{
public:
    virtual void update(const float newTemperature, const float newHumidity, const float newPressure) = 0;

    virtual ~WeatherDataObserver(){};
};