all: Duck.o FlyWithWings.o Main.o MallardDuck.o NoFly.o Quack.o SqueakQuack.o
	g++ -o Main Duck.o FlyWithWings.o Main.o MallardDuck.o NoFly.o Quack.o SqueakQuack.o

Duck.o: Duck.cpp
	g++ -c Duck.cpp

FlyWithWings.o: FlyWithWings.cpp
	g++ -c FlyWithWings.cpp

Main.o: Main.cpp
	g++ -c Main.cpp

MallardDuck.o: MallardDuck.cpp
	g++ -c MallardDuck.cpp

NoFly.o: NoFly.cpp
	g++ -c NoFly.cpp

Quack.o: Quack.cpp
	g++ -c Quack.cpp

SqueakQuack.o: SqueakQuack.cpp
	g++ -c SqueakQuack.cpp

clean:
	del *.o Main.exe