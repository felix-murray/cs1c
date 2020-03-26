##Set flags and gcc variable for easier reading
ASSIGNMENT = hw09
CC = g++
FLAGS = -std=c++14 -Wall -g

##Objects created
OBJ_1 = shape.o
DEF_1 = shape.cpp

OBJ_2 = rectangle.o
DEF_2 = rectangle.cpp

OBJ_3 = triangle.o
DEF_3 = triangle.cpp

##Project Files
PROJFILES = makefile $(ASSIGNMENT).cpp shape.cpp shape.h rectangle.cpp rectangle.h triangle.cpp triangle.h $(ASSIGNMENT).scr

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(OBJ_1) $(OBJ_2) $(OBJ_3)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ_1) $(OBJ_2) $(OBJ_3)

##Define every object inside of project
$(OBJ_1): $(DEF_1) shape.h
	$(CC) $(FLAGS) -c $(DEF_1) -o $(OBJ_1)
$(OBJ_2): $(DEF_2) rectangle.h
	$(CC) $(FLAGS) -c $(DEF_2) -o $(OBJ_2)
$(OBJ_3): $(DEF_3) triangle.h
	$(CC) $(FLAGS) -c $(DEF_3) -o $(OBJ_3)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar $(ASSIGNMENT).scr
##Definition for function "empty"
empty:	
	rm -r $(ASSIGNMENT).dSYM

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)