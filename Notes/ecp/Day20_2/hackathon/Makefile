
# Make variables
TARGET=main

SRC=$(TARGET).c menu.c login.c edit_acc.c
SRC+= poll.c question.c report.c result.c vote.c file.c


# OBJ=$(TARGET).o
OBJ=$(SRC:.c=.o)

CC=gcc
DELETE=del

CFLAGS=-Wall -m32
LDFLAGS=-lm

$(TARGET): $(OBJ)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $^

# %.o or %.c		-- pattern
# %	-- stem

$(OBJ):%.o:%.c 
	$(CC) -c $(CFLAGS) $<

run:
	.\$(TARGET)

clean:
	$(DELETE) $(TARGET).exe
	$(DELETE) $(OBJ)

.phony:
	run clean