#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherDataSubject &whetherData): weatherData(whetherData){
    weatherData.registerObserver(this);
}

void CurrentConditionsDisplay::display(){
    std::cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << std::endl;
}

void CurrentConditionsDisplay::unregister(){
    weatherData.removeObserver(this);
}

void CurrentConditionsDisplay::update(const float newTemperature, const float newHumidity, const float newPressure){
    temperature = newTemperature;
    humidity = newHumidity;

    display();
}