CXX = g++
OUT ?= Main

SOURCES = $(shell find . -name "*.cpp")
OBJECTS = $(SOURCES:.cpp=.o)

$(OUT): $(OBJECTS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) -c -o $@ $^	

.PHONY: clean

clean: 
	find . -name Main -delete
	find . -name "*.o" -delete