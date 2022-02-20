all : Test

Test : main.o
	g++ main.o -o Test -w

main.o : main.cpp
	g++ -c main.cpp -g -w

clean :
	rm -f *.o Test
