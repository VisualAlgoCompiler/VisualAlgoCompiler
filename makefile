all : mycc

mycc : main.o
	gcc main.o -o mycc

main.o : main.c
	gcc -c main.c

clean :
	rm -f *.o mycc *.txt *.aux *.log
