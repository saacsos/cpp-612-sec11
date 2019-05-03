#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>

using namespace std;

class Movie {
private:
    string name;
    int length;
public:
    Movie(string, int);
    string getName();
    int getLength();
};

#endif