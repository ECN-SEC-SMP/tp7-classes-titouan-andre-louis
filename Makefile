all: main.out

main.out: main.o	Classe.o r
	g++ -o main.out main.o Classe.o 

main.o: main.cpp
	g++ -c main.cpp

Classe.o: Point.cpp Point.h
	g++ -c Point.cpp
