##Set flags and gcc variable for easier reading
ASSIGNMENT = hw03-ec
CC = g++
FLAGS = -std=c++14 -Wall -g

##These are the objects created
OBJ_1 = extendedTime.o
DEF_1 = extendedTime.cpp
OBJ_2 = invoice.o
DEF_2 = invoice.cpp
OBJ_3 = time.o
DEF_3 = time.cpp

##The list of all project files
PROJFILES = makefile $(ASSIGNMENT).cpp extendedTime.h extendedTime.cpp invoice.h invoice.cpp time.h time.cpp

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(OBJ_1) $(OBJ_2) $(OBJ_3)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ_1) $(OBJ_2) $(OBJ_3)

##Define every object inside of project (This is OBJ_1)
$(OBJ_1): $(DEF_1) extendedTime.h
	$(CC) $(FLAGS) -c $(DEF_1) -o $(OBJ_1)
$(OBJ_2): $(DEF_2) invoice.h
	$(CC) $(FLAGS) -c $(DEF_2) -o $(OBJ_2)
$(OBJ_3): $(DEF_3) time.h
	$(CC) $(FLAGS) -c $(DEF_3) -o $(OBJ_3)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)   