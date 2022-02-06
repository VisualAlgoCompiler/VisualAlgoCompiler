all : mycc pdf

mycc : main.o
	gcc main.o -o mycc

main.o : main.c
	gcc -c main.c

clean :
	rm -f *.o mycc *.txt *.pdf *.aux *.log

pdf :
	pdflatex developers.tex
