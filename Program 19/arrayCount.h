//Author: Wesley Anastasi
//Assignment Title: Program 19
//Assignment Description: Array processing
//Due Date: 3/30/2022
//Date Created: 3/28/2022
//Date Last Modified: 3/28/2022

#ifndef ARRAYCOUNT_H_INCLUDED
#define ARRAYCOUNT_H_INCLUDED

#include <iostream>
#include <vector>
using namespace std;

/*
 * description: takes an array of ints, an integer for size (s)
                and a integer value (v). Finds the frequency of
                value v in the array a.
 * return: the frequency of the value v in the array a
 * precondition: array int a[], int s, and int v exist
 * postcondition: none of the original values are changed,
 *                and the frequency of the value of v has been returned
 *
*/

int arrayCount(int a[], int s, int v);

/*
 * description: takes array of doubles, integer for size,
                and double for specified value. Finds the frequency of V
                in the array and returns that number.
 * return: the frequency of value v in the array a
 * precondition: array of doubles (a) exsists, integer s for size exists
 *               double v for value exsists
 * postcondition: all input values are unchanged, and the frequency of
 *                of value v in array a has been returned
 *
*/

int arrayCount(double a[], int s, double v);

/*
 * description: takes array of strings (a), integer size (s)
                and string value (v). Returns the frequency of v in array a
 * return: the frequency of the value v in the array a
 * precondition: array of strings a exsits, size of array a s exsits,
 *               string v exsists
 * postcondition: array a, int s, and string v are unchange, and the fre
 *
*/
int arrayCount(string a[], int s , string v);

/*
 * description:
 * return:
 * precondition:
 * postcondition:
 *
*/

int arrayCount(char a[], char v);

/*
 * description:
 * return:
 * precondition:
 * postcondition:
 *
*/

int arrayCount(vector<int> a, int v);

/*
 * description:
 * return:
 * precondition:
 * postcondition:
 *
*/

int arrayCount(vector<string> a, string v);

/*
 * description:
 * return:
 * precondition:
 * postcondition:
 *
*/

int arrayCount(vector<double> a, double v);

/*
 * description:
 * return:
 * precondition:
 * postcondition:
 *
*/

int arrayCount(vector<char> a, char v);


#endif // ARRAYCOUNT_H_INCLUDED