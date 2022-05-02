//Author: Wesley Anastasi
//Assignment Title: Program 30
//Assignment Description: closest pair
//Due Date: 5/5/2022
//Date Created: 5/2/2022
//Date Last Modified: 5/2/2022

#ifndef HEADERTEMPLATE_H_INCLUDED
#define HEADERTEMPLATE_H_INCLUDED

#include <iostream>
#include <cmath>
using namespace std;

/*
 * description:
 * return:
 * precondition:
 * postcondition:
 *
*/

struct Point
{
     double x;
     double y;

     Point(double a = 0, double b = 0)
     {
        x = a;
        y = b;
     }
};

struct Pair
{
     int indexPointOne;
     int indexPointTwo;
};

/*
 * description: loops through the array and finds the points
                that are closest. If multiple are the same distance apart,
                the one with the smallest average index will be returned
 * return: Pair object
 * precondition: a array of points and an integer of the length of the array
 * postcondition: a Pair object has been returned
 *
*/

Pair Closest_Pair( Point  P[ ], int n);


#endif // HEADERFILENAME_H_INCLUDED