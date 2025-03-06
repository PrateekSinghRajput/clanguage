
# this is a make variable
Target=demo08

# to use make variable in remaining makfile
# add that varaible in () and add $ before it
# to declare variable - syntax ==> <Var name>=<value>
# to use variable - syntax ==> $(<Var name>)

# Rules for compiling
$(Target).exe: $(Target).o
	gcc -o $(Target).exe $(Target).o

$(Target).o: $(Target).c
	gcc -c $(Target).c

# Rule for running your program
run:
	.\$(Target).exe

# Rule for cleaning your project
clean:
	del $(Target).exe $(Target).o

.phony: run clean