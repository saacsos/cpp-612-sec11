#include <iostream>
#include "Theater.h"
#include "Movie.h"

using namespace std;

int main() {
    Theater t1("Majee Cineplex", 1500);
    Movie m1("Avenger End Game", 3* 60 + 58);
    Movie* m2 = new Movie("Spider-man Far From Home", 300);

    t1.addMovie(&m1);
    t1.addMovie(m2);

    cout << "---------- " << t1.getName() 
         << " ---------- " << t1.getCapacity()
         << " ---------- " << endl; 
    cout << t1.showMovie() << endl;

    
    
}