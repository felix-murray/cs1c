##Set flags and gcc variable for easier reading
ASSIGNMENT = hw03
CC = g++
FLAGS = -std=c++14 -Wall -g

##Objects created
OBJ_1 = employee.o
DEF_1 = employee.cpp

OBJ_2 = programmer.o
DEF_2 = programmer.cpp

OBJ_3 = softwareArchitect.o
DEF_3 = softwareArchitect.cpp

OBJ_4 = date.o
DEF_4 = date.cpp

##Project Files
PROJFILES = makefile $(ASSIGNMENT).cpp date.cpp employee.cpp programmer.cpp softwareArchitect.cpp $(ASSIGNMENT).scr

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(OBJ_1) $(OBJ_2) $(OBJ_3) $(OBJ_4)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ_1) $(OBJ_2) $(OBJ_3) $(OBJ_4)

##Define every object inside of project
$(OBJ_1): $(DEF_1) employee.h
	$(CC) $(FLAGS) -c $(DEF_1) -o $(OBJ_1)
$(OBJ_2): $(DEF_2) programmer.h
	$(CC) $(FLAGS) -c $(DEF_2) -o $(OBJ_2)
$(OBJ_3): $(DEF_3) softwareArchitect.h
	$(CC) $(FLAGS) -c $(DEF_3) -o $(OBJ_3)
$(OBJ_4): $(DEF_4) date.h
	$(CC) $(FLAGS) -c $(DEF_4) -o $(OBJ_4)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)                                                                                      