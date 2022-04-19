//Author: Wesley Anastasi
//Assignment Title: Program 22
//Assignment Description: Sphere class
//Due Date: 4/8/2022
//Date Created: 4/4/2022
//Date Last Modified: 4/6/2022

#ifndef SPHERE_H_INCLUDED
#define SPHERE_H_INCLUDED

#include <iostream>
#include <cmath>
using namespace std;

class Sphere
{
    private:
    double radius;
    string color;
    public:

    /*
    * description: creates a Sphere Object with radius 1 and color green
    * return: constructs a Sphere Object
    * precondition: none
    * postcondition: a Sphere Object has been created
    *
    */

    Sphere();

    /*
    * description: creates a Sphere Object with radius r and color green
    * return: constructs a Sphere Object
    * precondition: none
    * postcondition: a Sphere Object has been created
    *
    */

    Sphere(double r);

    /*
    * description: creates a Sphere Object with radius r and color c
    * return: constructs a Sphere Object
    * precondition: none
    * postcondition: a Sphere Object has been created
    *
    */

    Sphere(double r, string c);

    /*
    * description: sets the radius of the Sphere
    * return: void
    * precondition: a Sphere Object exists
    * postcondition: the radius of the Object has been changed
    *
    */

    void setRadius(double r);

    /*
    * description: returns the radius of the Sphere
    * return: double
    * precondition: a Sphere Object exists
    * postcondition: the Object is unchnaged and a 
    *                double value has been returned
    *
    */

    double getRadius() const;

    /*
    * description: sets the color of the Sphere
    * return: void
    * precondition: A Sphere Object exists
    * postcondition: The color of the Sphere has been changed
    *
    */

    void setColor(string c);

    /*
    * description: returns the color of the Sphere
    * return: string
    * precondition: a Sphere Object exists
    * postcondition: the Object is unchanged and a 
    *                string value has been returned
    *
    */
    string getColor() const;
    
    /*
    * description: returns the area of the Sphere
    * return: double
    * precondition: a Sphere Object exists
    * postcondition: the Object is unchanged and a 
    *                double value has been returned
    *
    */

    double area() const;

    /*
    * description: returns the volume of the Sphere
    * return: double
    * precondition: a Sphere Object exists
    * postcondition: the Object is unchanged and a 
    *                double value has been returned
    *
    */

    double volume() const;

    /*
    * description: returns true if two Spheres have
                   have the same radius and color, false otherwise
    * return: boolean
    * precondition: two Sphere Objects exist
    * postcondition: neither of the Sphere Objects have been changed
    *                and a boolean has been returned
    *
    */

    bool isEqual(const Sphere other) const;
};

#endif // HEADERFILENAME_H_INCLUDED