all : visualAlgo

visualAlgo : main.o usage.o version.o lexer.o
	g++ main.o usage.o version.o lexer.o -o visualAlgo -w

main.o : main.cpp
	g++ -c main.cpp -g -w

usage.o : usage.cpp
	g++ -c usage.cpp -g -w

version.o : version.cpp
	g++ -c version.cpp -g -w

lexer.o : lexer.cpp lexer.h
	g++ -c lexer.cpp -g -w

clean :
	rm -f *.o visualAlgo
