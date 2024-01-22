all: Main.o PizzaStore.o ChicagoPizzaStore.o NYPizzaStore.o ChicagoStyleCheesePizza.o ChicagoStyleClamPizza.o ChicagoStylePepperoniPizza.o ChicagoStyleVeggiePizza.o NYStyleCheesePizza.o NYStyleClamPizza.o NYStylePepperoniPizza.o NYStyleVeggiePizza.o 
	g++ Main.o PizzaStore.o ChicagoPizzaStore.o NYPizzaStore.o ChicagoStyleCheesePizza.o ChicagoStyleClamPizza.o ChicagoStylePepperoniPizza.o ChicagoStyleVeggiePizza.o NYStyleCheesePizza.o NYStyleClamPizza.o NYStylePepperoniPizza.o NYStyleVeggiePizza.o  -o Main.exe

PizzaStore.o: PizzaStores/PizzaStore.cpp
	g++ -c PizzaStores/PizzaStore.cpp

ChicagoPizzaStore.o: PizzaStores/ChicagoPizzaStore.cpp
	g++ -c PizzaStores/ChicagoPizzaStore.cpp

NYPizzaStore.o: PizzaStores/NYPizzaStore.cpp
	g++ -c PizzaStores/NYPizzaStore.cpp

ChicagoStyleCheesePizza.o: Pizzas/ChicagoStylePizzas/ChicagoStyleCheesePizza.cpp
	g++ -c Pizzas/ChicagoStylePizzas/ChicagoStyleCheesePizza.cpp

ChicagoStyleClamPizza.o: Pizzas/ChicagoStylePizzas/ChicagoStyleClamPizza.cpp
	g++ -c Pizzas/ChicagoStylePizzas/ChicagoStyleClamPizza.cpp

ChicagoStylePepperoniPizza.o: Pizzas/ChicagoStylePizzas/ChicagoStylePepperoniPizza.cpp
	g++ -c Pizzas/ChicagoStylePizzas/ChicagoStylePepperoniPizza.cpp

ChicagoStyleVeggiePizza.o: Pizzas/ChicagoStylePizzas/ChicagoStyleVeggiePizza.cpp
	g++ -c Pizzas/ChicagoStylePizzas/ChicagoStyleVeggiePizza.cpp

NYStyleCheesePizza.o: Pizzas/NYStylePizzas/NYStyleCheesePizza.cpp
	g++ -c Pizzas/NYStylePizzas/NYStyleCheesePizza.cpp

NYStyleClamPizza.o: Pizzas/NYStylePizzas/NYStyleClamPizza.cpp
	g++ -c Pizzas/NYStylePizzas/NYStyleClamPizza.cpp

NYStylePepperoniPizza.o: Pizzas/NYStylePizzas/NYStylePepperoniPizza.cpp
	g++ -c Pizzas/NYStylePizzas/NYStylePepperoniPizza.cpp

NYStyleVeggiePizza.o: Pizzas/NYStylePizzas/NYStyleVeggiePizza.cpp
	g++ -c Pizzas/NYStylePizzas/NYStyleVeggiePizza.cpp

clean: 
	del *.o Main.exe