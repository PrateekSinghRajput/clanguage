
Target=demo08

$(Target).exe: $(Target).o
	gcc -o $(Target).exe $(Target).o

$(Target).o: $(Target).c
	gcc -c $(Target).c

run:
	.\$(Target).exe

clean:
	del $(Target).exe $(Target).o

.phony: run clean