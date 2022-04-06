#include <iostream>
#include "Sphere.h"
using namespace std;

int main()
{
    Sphere spellingIsHard;
    Sphere sphere(8);
    Sphere nah(8,"green");
    cout << spellingIsHard.getRadius() << " " << spellingIsHard.getColor() << endl;
    cout << sphere.getRadius() << " " << sphere.getColor() << endl;
    cout << nah.getRadius() << " " << nah.getColor() << endl;
    cout << spellingIsHard.volume() << " " << spellingIsHard.area() << endl;
    cout << sphere.isEqual(nah) << endl;

    return 0;
}