#include <iostream>
#include "Movie.h"

using namespace std;

class Theater {
private:
    string name;
    int capacity;
    Movie** movies;  
    int size;

public:
    Theater(string, int);
    string getName();
    void setCapacity(int);
    int getCapacity();

    void addMovie(Movie*); 

    string showMovie(); // ให้ show movie ทั้งหมดใน array/linked list
};