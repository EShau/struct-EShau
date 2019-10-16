all: overwatch.o
	gcc -o program overwatch.o

overwatch.o: overwatch.c
	gcc -c overwatch.c

run:
	./program

clean:
	rm *.o
	rm *~
