##Set flags and gcc variable for easier reading
ASSIGNMENT = hw06
CC = g++
FLAGS = -std=c++14 -Wall -g

##Project Files
PROJFILES = makefile $(ASSIGNMENT).cpp $(ASSIGNMENT).scr

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp 
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar $(ASSIGNMENT).scr
##Definition for function "empty"
empty:	
	rm -r $(ASSIGNMENT).dSYM

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)