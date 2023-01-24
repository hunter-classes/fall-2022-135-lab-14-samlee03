main: main.o
	g++ -o main main.o

tests: tests.o
	g++ -o tests tests.o

main.o: main.cpp MyVector.h MyVector.cxx

tests.o: tests.cpp MyVector.h MyVector.cxx doctest.h

clean:
	rm -f main.o tests.o