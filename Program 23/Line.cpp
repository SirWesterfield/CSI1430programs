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
    bool containsSlope = true;
    if (p1.x == p2.x || p1.y == p2.y)
    {
        containsSlope = false;
    }
    return containsSlope;
}

double Line::slope() const
{
    double getSlope;
    getSlope = static_cast<double>(p1.y - p2.y)/(p1.x-p2.x);
    //cout << "TODO: check if the slope exists before finding it" << endl;
    return getSlope;
}

double Line::yIntercept() const
{
    double yInt;
    yInt = slope()*(-p1.x) + p1.y;
    return yInt;
}

bool Line::isParallel(const Line& otherLine) const
{
    //cout << "TODO: write this function" << endl;
    return false;
}

bool Line::isCollinear(const Line& otherLine) const
{
    bool isIt = false;
    if (slope() == otherLine.slope() && yIntercept() == otherLine.yIntercept())
    {
        isIt = true;
    }
    return isIt;
}

bool Line::isPerpendicular(const Line& otherLine) const
{
    //cout << "TODO: write this function" << endl;
    return false;
}

Point Line::intersect(const Line& otherLine) const
{
    //cout << "TODO: write this function" << endl;
    return false;
}

void Line::display(ostream& out) const
{
    //Incorrect display, need to fix
    if (!hasSlope())
    {
        cout << "y = " << p1.y << endl;
    }
    else if (slope() == 1 && yIntercept() == 0)
    {
        cout << "y = x" << endl;
    }
    else if (slope() == 1)
    {
        cout << "y = x + " << p1.y << endl;
    }
    else
    {
        cout << "y = " << slope() << "x + " << yIntercept() << endl;
    }
}