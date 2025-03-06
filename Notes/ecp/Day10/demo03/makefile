# comment
# Name of file should be GNUMakefile/Makefile/makefile
# It is set of rule to compile your program

# Each rule is made up of two parts:
#	1. Dependancy: it is list of all dependant files to create target
#	2. receipe/command:	it is command to create target

# Target is final output of each rule

# Syntax:
# <Target>: [List of all dependant files]
# 		<command to create target file>

# On receipe line one tab is compulsory

# Rule of your final target should be the first one.

# Rule 1
main.exe: main.o menu.o math.o div.o
	gcc -o main.exe main.o menu.o math.o div.o

# Rule 2
main.o: main.c
	gcc -c main.c 

# Rule 3
menu.o:	menu.c
	gcc -c menu.c 

# Rule 4
math.o: math.c 
	gcc -c math.c

# Rule 5
div.o: div.c 
	gcc -c div.c 


# Rule 6
run:
	.\main.exe

# Rule 7
clean:
	del main.exe
	del main.o menu.o math.o div.o


.phony: run clean