#include "WeatherData.h"

WeatherData::WeatherData(){}


void WeatherData::setMeasurements(float newTemperature, float newHumidity, float newPressure){
    temperature = newTemperature;
    humidity = newHumidity;
    pressure = newPressure;

    notifyObservers();
}

void WeatherData::registerObserver(WeatherDataObserver *observer){
    observers.push_back(observer);
}

void WeatherData::removeObserver(WeatherDataObserver *observer){
    observers.remove(observer);
}

void WeatherData::notifyObservers(){
    for (WeatherDataObserver *observer : observers) {
        observer->update(temperature, humidity, pressure);
    }
}