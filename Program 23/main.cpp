#include <iostream>
#include "Line.h"

using namespace std;

int main()
{
    Point p1(-4,1);
    Point p2;
    Line line(p1, p2);
    line.getFirstPoint().display(cout);
    line.getSecondPoint().display(cout);
    line.display(cout);
    cout << line.slope() << endl;
    cout << line.yIntercept() << endl;

    return 0;
}