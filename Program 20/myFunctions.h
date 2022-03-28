//Author: Wesley Anastasi
//Assignment Title: Program 17
//Assignment Description: make a functions file
//Due Date: 3/23/2022
//Date Created: 3/22/2022
//Date Last Modified: 3/22/2022

#ifndef MYFUNCTIONS_H_INCLUDED
#define MYFUNCTIONS_H_INCLUDED

#include <iostream>
using namespace std;


/*
 * description: Function returns the value of the larger of two integers.
 * return: integer
 * precondition: two integer values exist
 * postcondition: The value of the largest integer is returned.
    The original integers are unchanged
    If the integers have the same value 
    then the value of either integer is returned.
 *
*/

int max(int, int);

/*
 * description: Function returns the value of the larger of two doubles.
 * return: double
 * precondition: two double values exist
 * postcondition: The value of the largest double is returned.
    The original doubles are unchanged
    If the doubles have the same value 
    then the value of either double is returned.
 *
*/

double max(double, double);


/*
 * description: Function returns the value of the largest integers in an array
 * return: integer
 * precondition: an array of integer values exist
 * postcondition: The largest value in the array is returned.
                  The original array is unchanged
 *
*/

int max (int m[], int n);

/*
 * description: Function returns the value of the largest doubles in an array
 * return: double
 * precondition: an array of double values exist
 * postcondition: The largest value in the array is returned.
                  The original array is unchanged
 *
*/

double max (double m[], int n);

/*
 * description: Function returns the value of the smaller of two integers.
 * return: integer 
 * precondition: two integer values exist
 * postcondition: The value of the smallest integer is returned.
    The original integers are unchanged
    If the integers have the same value 
    then the value of either integer is returned.
 *
*/

int min(int x, int w);

/*
 * description: Function returns the value of the smaller of two doubles.
 * return: double 
 * precondition: two double values exist
 * postcondition: The value of the smallest double is returned.
    The original doubles are unchanged
    If the integers have the same value 
    then the value of either double is returned.
 *
*/

double min(double, double);

/*
 * description: Function returns the value of the smallest integers in an array
 * return: integer
 * precondition: an array of integer values exist
 * postcondition: The largest value in the array is returned.
                  The original array is unchanged
 *
*/

int min(int m[], int n);

/*
 * description: Function returns the value of the smallest doubles in an array
 * return: double
 * precondition: an array of double values exist
 * postcondition: The largest value in the array is returned.
                  The original array is unchanged
 *
*/

double min (double m[], int n);

/*
 * description: This function returns the absolute value of an integer
 * return: integer
 * precondition: Some integer value exists
 * postcondition: Integer value is unchanged
 *
*/

int absoluteValue(int);

/*
 * description: This function returns the absolute value of a double
 * return: double
 * precondition: Some double value exists
 * postcondition: Double value is unchanged
 *
*/

double absoluteValue(double);

/*
 * description: The function calculates factorial.
 * return: double
 * precondition: Some integer value N exists
 * postcondition: The value of the N unchanged
 *
*/

double factorial(int);

/*
 * description: The function calculates the number 
    of combinations of M items taken N at a time.
 * return: The number of combinations of M items taken N at a time.
 * precondition: Two integer value M and N exists
 * postcondition: The value of the M and N unchanged
 *
*/

double combination(int M, int N);

/*
 * description: The function calculates the number 
    of permutations of M items taken N at a time.
 * return: The number of permutations of M items taken N at a time.
 * precondition: Two integer value M and N exists
 * postcondition: The value of the M and N unchanged
 *
*/

double permutation (int M, int N);

/*
 * description:
 * return:
 * precondition:
 * postcondition:
 *
*/

void printToTheScreen();


#endif // MYFUNCTIONS_H_INCLUDED
