#include <iostream>
#include "Line.h"

using namespace std;

int main()
{
    Point intersect;
    Line yEqualsX;
    Point p1(5,1);
    Point p2(5,0);
    Line xEquals5(p1,p2);
    Point p3(1,-1);
    Line yEqualsNegativeX(p3);
    Point p4(0,345);
    Point p5(1,331);
    Line yEqualsNegative14XPlus345(p4,p5);
    Point p6(0,5);
    Point p7(1,6);
    Line yEqualsXPlus5(p6,p7);
    /*yEqualsX.display(cout); 
    cout << " ----- ";
    xEquals5.display(cout);
    cout << endl;
    intersect = yEqualsX.intersect(xEquals5);
    intersect.display(cout);
    intersect = yEqualsNegativeX.intersect(yEqualsX);*/
    yEqualsNegative14XPlus345.display(cout);
    cout << endl;
    yEqualsXPlus5.display(cout);
    cout << endl;
    intersect = yEqualsNegative14XPlus345.intersect(yEqualsXPlus5);
    intersect.display(cout);
    return 0;
}