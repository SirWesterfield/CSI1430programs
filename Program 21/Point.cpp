//Author: Wesley Anastasi
//Assignment Title: Program 21
//Assignment Description: Point Struct
//Due Date: 4/6/2022
//Date Created: 4/4/2022
//Date Last Modified: 4/4/2022

#include "Point.h"

struct Point
{
    int x, y;
    
    Point(int yInput, int xInput)
    {

    }
    
    void display(ostream&) const;
    double distance(const Point&) const;
    Point midPoint(const Point&) const;
};