CC = gcc
CXX = g++
RM = rm -rf
CXXFLAGS = -g

BUILD = build

SRC = main.cpp Planet.cpp
OBJ = $(BUILD)/main.o $(BUILD)/Planet.o
DEP = Planet.hpp utils.hpp

main: main.o Planet.o
	$(CXX) $(CXXFLAGS) -o bin/main $(BUILD)/main.o $(BUILD)/Planet.o

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $(BUILD)/$@

clean:
	$(RM) $(OBJ) bin/main
