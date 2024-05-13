/*
 * This is an example implementation of the observer design pattern.
 * The motivation behind the observer design pattern is to be able to notify a set of objects when a particular object changes its state.
 * This is a publisher-subscriber type of approach.
 * Whenever the publisher/subject has an update to its state it can send that update to all of the objects that have registered with it.
 * This is better than giving the responsibility of checking for updates to other objects that would have to constantly poll for updates.
*/

#include "Observed/WeatherData.h"
#include "Observer/CurrentConditionsDisplay.h"

int main(){
    // We make a WeatherData object and a CurrentConditionsDisplay object
    // The display object is given a weather data object that it registers with
    WeatherData weatherData;
    CurrentConditionsDisplay display(weatherData);

    // Now when changes to the WeatherData object occur the display shows them
    weatherData.setMeasurements(66.0f, 30.0f, 30.0f);
    display.unregister();

    // Now when we make changes the display no longer displays them because we have unregistered the object
    weatherData.setMeasurements(62.0f, 33.0f, 22.0f);

    // We can reregister the object using a pointer if we have unregistered the object
    CurrentConditionsDisplay* displayPtr = &display;
    weatherData.registerObserver(displayPtr);
    weatherData.setMeasurements(62.0f, 33.0f, 22.0f);

    return 0;
}