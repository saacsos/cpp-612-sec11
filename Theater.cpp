#include <iostream>
#include "Theater.h"
#include "Movie.h"

using namespace std;

Theater::Theater(string name, int capacity) {
    this->name = name;
    this->capacity = (capacity > 0) ? capacity : 0;
    size = 0;
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

void Theater::addMovie(Movie* movie) {
    movies[size++] = movie;
}

string Theater::showMovie() {
    string result = "";
    for (int i = 0; i < size; i++) {
        result += to_string(i+1) + ": " + movies[i]->getName() + " (" + 
            to_string(movies[i]->getLength()) + " minutes)\n";
    }
    return result;
}