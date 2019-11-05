CXX = g++
RM = rm -rf
CXXFLAGS = -g

BUILD = build
TARGET = bin

SRC = main.cpp Planet.cpp
OBJ = $(BUILD)/main.o $(BUILD)/Planet.o
DEP = Planet.hpp utils.hpp

main: main.o Planet.o
	$(CXX) $(CXXFLAGS) -o $(TARGET)/main $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $(BUILD)/$@

clean:
	$(RM) $(OBJ) $(TARGET)/main
