#include "CurrentConditionsDisplay.h"
#include "WeatherData.h"

int main(){
    WeatherData weatherData;
    CurrentConditionsDisplay display(weatherData);


    weatherData.setMeasurements(66.0f, 30.0f, 30.0f);
    display.unregister();

    weatherData.setMeasurements(62.0f, 33.0f, 22.0f);

    return 0;
}