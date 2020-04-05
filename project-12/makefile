##Set flags and gcc variable for easier reading
ASSIGNMENT = hw12
CC = g++
FLAGS = -std=c++14 -Wall -g

##Objects created
OBJ_1 = queue.o
DEF_1 = queue.cpp

##Project Files
PROJFILES = makefile $(ASSIGNMENT).cpp queue.cpp queue.h $(ASSIGNMENT).scr

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(OBJ_1)
    $(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ_1)

##Define every object inside of project
$(OBJ_1): $(DEF_1) queue.h
    $(CC) $(FLAGS) -c $(DEF_1) -o $(OBJ_1)

##Definition for function "clean"
define clean_directory
    rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar $(ASSIGNMENT).scr

    rm -r $(ASSIGNMENT).dSYM
endef

##Definition for function "clean"
clean:
     $(call clean_directory)
    
##Definition for function "tar"
tar:
    tar cf $(ASSIGNMENT).tar $(PROJFILES)