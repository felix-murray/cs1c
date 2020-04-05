##Set flags and gcc variable for easier reading
ASSIGNMENT = hw10
CC = g++
FLAGS = -std=c++14 -Wall -g

##The list of all project files
PROJFILES = makefile $(ASSIGNMENT).cpp $(ASSIGNMENT).scr

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT)

##Definition for function "clean_directory"
define clean_directory
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar $(ASSIGNMENT).scr

	rm -r $(ASSIGNMENT).dSYM
endef

##Definition for function "clean"
clean:
	 $(call clean_directory)

tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES) 