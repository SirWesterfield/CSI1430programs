//Author: Wesley Anastasi
//Assignment Title: Pract 14
//Assignment Description: cone class
//Due Date: 4/29/2022
//Date Created: 4/29/2022
//Date Last Modified: 4/29/2022

#include "cone.h"

cone::cone()
{
  color = "BLUE";
  height = 2.0;
  radius = 1.0;
}

cone::cone(double h, double r)
{
  color = "BLUE";
  height = h;
  radius = r;
}

cone::cone(double h, double r, string c)
{
  height = h;
  radius = r;
  color = c;
}

void cone::setRadius(double r)
{
  radius = r;
}

void cone::setHeight(double h)
{
  height = h;
}

void cone::setColor(string c)
{
  color = c;
}

double cone::getRadius() const
{
  return radius;
}

double cone::getHeight() const
{
  return height;
}

string cone::getColor() const
{
  return color;
}

double cone::surfaceArea() const
{
  double value;
  value = 3.14159*radius*(radius+pow(pow(height,2)+pow(radius,2),.5));
  return value;
}

double cone::volume() const
{
  double value;
  value = 3.14159*pow(radius,2)*(height/3);
  return value;
}