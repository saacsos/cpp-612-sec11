#include <iostream>
#include "Theater.h"
#include "Movie.h"

using namespace std;

int main() {
    Theater t1("Majee Cineplex", 1500);
    Movie m1("Avenger End Game", 3* 60 + 58);
    t1.setMovie(&m1);

    cout << "---------- " << t1.getName() 
         << " ---------- " << t1.getCapacity()
         << " ---------- " << endl; 
    cout << t1.showMovie() << endl;

    
    
}