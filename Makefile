all: main.out

main.out: main.o Point.o
	g++ -o main.out main.o Point.o 

main.o: main.cpp
	g++ -c main.cpp

Point.o: Point.cpp Point.h
	g++ -c Point.cpp

Forme.o: Forme.cpp Forme.h
	g++ -c Forme.cpp
