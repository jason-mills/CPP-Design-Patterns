run: 
	./Main.exe

all: Main.cpp DarkRoast.o Decaf.o Espresso.o HouseBlend.o Mocha.o Soy.o SteamedMilk.o Whip.o beverage_headers beverage_headers condiment_headers
	g++ -o Main.exe Main.cpp DarkRoast.o Decaf.o Espresso.o HouseBlend.o Mocha.o Soy.o SteamedMilk.o Whip.o

DarkRoast.o: Beverages/DarkRoast.cpp
	g++ -c Beverages/DarkRoast.cpp

Decaf.o: Beverages/Decaf.cpp
	g++ -c Beverages/Decaf.cpp

Espresso.o: Beverages/Espresso.cpp
	g++ -c Beverages/Espresso.cpp

HouseBlend.o: Beverages/HouseBlend.cpp
	g++ -c Beverages/HouseBlend.cpp

Mocha.o: Beverages/Condiments/Mocha.cpp
	g++ -c Beverages/Condiments/Mocha.cpp

Soy.o: Beverages/Condiments/Soy.cpp
	g++ -c Beverages/Condiments/Soy.cpp

SteamedMilk.o: Beverages/Condiments/SteamedMilk.cpp
	g++ -c Beverages/Condiments/SteamedMilk.cpp

Whip.o: Beverages/Condiments/Whip.cpp
	g++ -c Beverages/Condiments/Whip.cpp

clean:
	del *.o Main.exe