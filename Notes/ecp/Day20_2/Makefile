
# Make variables
TARGET=demo01

SRC=$(TARGET).c
# OBJ=$(TARGET).o
OBJ=$(SRC:.c=.o)

CC=gcc
DELETE=del

CFLAGS=-Wall -m32
LDFLAGS=-lm

# Automatic variables
# $@ - automatically evaluates to target of that rule
# $< - automatically evaluates to first/corresponding dependancy
# $^ - automatically evaluates to list of all dependancy

$(TARGET): $(OBJ)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $<

$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $<

run:
	.\$(TARGET)

clean:
	$(DELETE) $(TARGET).exe
	$(DELETE) $(OBJ)

.phony:
	run clean