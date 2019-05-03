#include <iostream>
#include "Movie.h"
using namespace std;

Movie::Movie(string name, int length) {
    this->name = name;
    this->length = length > 0 ? length : 0;
}

string Movie::getName() {
    return name;
}

int Movie::getLength() {
    return length;
}