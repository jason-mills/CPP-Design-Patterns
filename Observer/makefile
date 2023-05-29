run:
	./Main.exe

all: CurrentConditionsDisplay.o Main.o WeatherData.o
	g++ -o Main CurrentConditionsDisplay.o Main.o WeatherData.o

Main.o: Main.cpp
	g++ -c Main.cpp

WeatherData.o: WeatherData.cpp
	g++ -c WeatherData.cpp

CurrentConditionsDisplay.o: CurrentConditionsDisplay.cpp
	g++ -c CurrentConditionsDisplay.cpp

clean:
	del *.o Main.exe