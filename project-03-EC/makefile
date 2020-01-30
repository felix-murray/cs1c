##Set flags and gcc variable for easier reading
ASSIGNMENT = hw03-ec
CC = g++
FLAGS = -std=c++14 -Wall -g

##These are the objects created
OBJ_1 = card.o
DEF_1 = card.cpp

##The list of all project files
PROJFILES = makefile $(ASSIGNMENT).cpp card.h card.cpp

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(OBJ_1)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ_1)

##Define every object inside of project (This is OBJ_1)
$(OBJ_1): $(DEF_1) card.h
	$(CC) $(FLAGS) -c $(DEF_1) -o $(OBJ_1)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)   