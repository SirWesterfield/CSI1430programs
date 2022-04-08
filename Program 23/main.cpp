#include <iostream>
#include "Line.h"

using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    Point point1(x1,y1);
    point1.display(cout);
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;
    Point point2(x2,y2);
    point2.display(cout);
    Line line(point1, point2);
    Line line2;
    cout << "y-intercept: " << line.yIntercept() << endl;
    cout << "slope: " << line.slope() << endl;
    line.display(cout);
    cout << "line 2: ";
    line2.display(cout);
    cout << "y-intercept: " << line2.yIntercept() << endl;
    cout << "slope: " << line2.slope() << endl;
    if (line.isCollinear(line2))
    {
        cout << "Collinear" << endl;
    }
    if (line.isParallel(line2))
    {
        cout << "Parallel" << endl;
    }
    if (line.isPerpendicular(line2))
    {
        cout << "Perpendicular" << endl;
    }


    return 0;
}