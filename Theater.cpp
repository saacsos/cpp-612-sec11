#include <iostream>
#include "Theater.h"
#include "Movie.h"

using namespace std;

Theater::Theater(string name, int capacity) {
    this->name = name;
    this->capacity = (capacity > 0) ? capacity : 0;
}

string Theater::getName() {
    return name;
}

void Theater::setCapacity(int capacity) {
    this->capacity = (capacity > 0) ? capacity : 0;
}

int Theater::getCapacity() {
    return capacity;
}

// Scope Resolution Operator

void Theater::setMovie(Movie* movie) {
    mv = movie;
}

string Theater::showMovie() {
    return mv->getName() + " (" + 
            to_string(mv->getLength()) + ")";
}