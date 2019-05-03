#include <iostream>
#include "Movie.h"

using namespace std;

class Theater {
private:
    string name;
    int capacity;
    Movie* mv;

public:
    Theater(string, int);
    string getName();
    void setCapacity(int);
    int getCapacity();

    void setMovie(Movie*);

    string showMovie();
};