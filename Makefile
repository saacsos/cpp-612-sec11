main : Movie.o Theater.o main.o
	g++ Movie.o Theater.o main.o -o main

Movie.o :
	g++ -c Movie.cpp -o Movie.o

Theater.o :
	g++ -c -std=c++11 Theater.cpp -o Theater.o

main.o :
	g++ -c main.cpp -o main.o

clean :
	rm *.o main.exe