#pragma once

#include <list>

#include "WeatherDataSubject.h"

class WeatherData : public WeatherDataSubject{
private:
    std::list<WeatherDataObserver *> observers;
    float temperature, humidity, pressure;
public:
    WeatherData();

    void setMeasurements(float newTemperature, float newHumidity, float newPressure);

    void registerObserver(WeatherDataObserver *observer) override;
    void removeObserver(WeatherDataObserver *observer) override;
    void notifyObservers() override;
};