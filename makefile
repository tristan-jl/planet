CXX = g++
CXXFLAGS = -Wall -g

main: main.o Planet.o
	$(CXX) $(CXXFLAGS) -o bin/main main.o Planet.o

main.o: main.cpp Planet.hpp utils.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Planet.o: Planet.hpp utils.hpp
