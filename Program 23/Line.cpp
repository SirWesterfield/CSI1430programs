//Author: Wesley Anastasi
//Assignment Title: Program 23
//Assignment Description: Line class
//Due Date: 4/11/2022
//Date Created: 4/6/2022
//Date Last Modified: 4/6/2022

#include "Line.h"

Line::Line(Point point1, Point point2)
{
    p1 = point1;
    p2 = point2;
}

void Line::setFirstPoint(const Point& pointOther)
{
    p1 = pointOther;
}

void Line::setSecondPoint(const Point& pointOther)
{
    p2 = pointOther;
}

Point Line::getFirstPoint() const
{
    return p1;
}

Point Line::getSecondPoint() const
{
    return p2;
}

bool Line::hasSlope() const
{
    bool containsSlope = false;
    if (p1.x == p2.x || p1.y == p2.y)
    {
        containsSlope = true;
    }
    return containsSlope;
}

double Line::slope() const
{
    double getSlope;
    //If they are in the correct order, may need to change this
    //Also, do I need to check if it has slope?
    getSlope = (p1.y - p2.y)/(p1.x-p2.x);
    return getSlope;
}

double Line::yIntercept() const
{
    //check if it has a yIntercept, then find equation of line? Specficially b in y = mx + b
    return -1;
}