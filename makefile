all : visualAlgo

visualAlgo : main.o
	gcc main.o -o visualAlgo

main.o : main.c
	gcc -c main.c

clean :
	rm -f *.o mycc *.txt *.aux *.log
