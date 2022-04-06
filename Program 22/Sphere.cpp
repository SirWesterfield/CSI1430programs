//Author: Wesley Anastasi
//Assignment Title: Program 22
//Assignment Description: Sphere class
//Due Date: 4/8/2022
//Date Created: 4/4/2022
//Date Last Modified: 4/6/2022

#include "Sphere.h"

Sphere::Sphere()
{
    radius = 1;
    color = "green";
}

Sphere::Sphere(double r)
{
    radius = r;
    color = "green";
}

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
    return 4 * 3.14159 * pow(radius,2);
}

double Sphere::volume() const
{
    return (4.0/3.0) * 3.14159 * pow(radius,3);
}

bool Sphere::isEqual(const Sphere other) const
{
    bool equal = false;
    if (other.getColor() == color && other.getRadius() == radius)
    {
        equal = true;
    }
    return equal;
}