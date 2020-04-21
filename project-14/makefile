##Set flags and gcc variable for easier reading
ASSIGNMENT = hw14
CC = g++
FLAGS = -std=c++14 -Wall -g

HDR_1 = doublylinkedlist.h

##The list of all project files
PROJFILES = makefile $(ASSIGNMENT).cpp $(ASSIGNMENT).scr $(HDR_1)

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(HDR_1)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT)

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