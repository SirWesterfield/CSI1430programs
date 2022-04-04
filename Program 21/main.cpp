//Author: Wesley Anastasi
//Assignment Title: 
//Assignment Description: 
//Due Date: 
//Date Created: 
//Date Last Modified: 



/*
Data Abstraction:
Input: 
Process:
Output: 
Assumptions:
*/
#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    
    Point point(10,4);
    Point point2(4,80);
    point.display(cout);
    point2.display(cout);
    Point temp = point.midPoint(point2);
    temp.display(cout);

    return 0;
}
