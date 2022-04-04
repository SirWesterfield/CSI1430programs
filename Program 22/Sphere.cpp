//Author: Wesley Anastasi
//Assignment Title: 
//Assignment Description: 
//Due Date: 
//Date Created: 
//Date Last Modified: 

#include "Sphere.h"

Sphere::Sphere(double r, string c)
{
    radius = r;
    color = c;
}

void Sphere::setRadius(double r)
{
    radius = r;
}

double Sphere::getRadius() const
{
    return radius;
}

void Sphere::setColor(string c)
{
    color = c;
}

string Sphere::getColor() const
{
    return color;
}

double Sphere::area() const
{
    return 4 * PI * pow(radius,2);
}

double Sphere::volume() const
{
    return (4.0/3.0) * PI * pow(radius,3);
}