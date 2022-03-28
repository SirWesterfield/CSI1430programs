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
#include <cstring>
using namespace std;

/*
 * description: takes an array of ints, an integer for size (s)
                and a integer value (v). Finds the frequency of
                value v in the array a.
 * return: integer of the frequency of the value v in the array a
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
 * return: integer of the frequency of value v in the array a
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
 * return: integer of the frequency of the value v in the array a
 * precondition: array of strings a exsits, size of array a s exsits,
 *               string v exsists
 * postcondition: array a, int s, and string v are unchange, and the frequency
 *                of the value v in the array a is returned
 *
*/
int arrayCount(string a[], int s , string v);

/*
 * description: takes a cstring and a char value v and returns the frequency 
                of v in cstring a
 * return: integer of the frequency of value v in the cstring a
 * precondition: cstring a and char v exist
 * postcondition: cstring a and char v have not been changed, and 
 *                a integer indicating the frequency of v in a 
 *                has been returned
 *
*/

int arrayCount(char a[], char v);

/*
 * description: takes vector of ints a, and int value v, and returns 
                the frequency of value v as an integer
 * return: integer of the frequency of value v
 * precondition: vector of ints a and integer v exists
 * postcondition: vector a and integer v have not been changed, and integer of
 *                the frequency of value v has been returned
 *
*/

int arrayCount(vector<int> a, int v);

/*
 * description: takes vector of strings a, and string value v, and returns 
                the frequency of value v as an integer
 * return: integer of the frequency of value v
 * precondition: vector of strings a and string v exists
 * postcondition: vector a and string v have not been changed, and integer of
 *                the frequency of value v has been returned
 *
*/

int arrayCount(vector<string> a, string v);

/*
 * description: takes vector of doubles a, and double value v, and returns 
                the frequency of value v as an integer
 * return: integer of the frequency of value v
 * precondition: vector of doubles a and double v exists
 * postcondition: vector a and double v have not been changed, and integer of
 *                the frequency of value v has been returned
 *
*/

int arrayCount(vector<double> a, double v);

/*
 * description: takes vector of chars a, and char value v, and returns 
                the frequency of value v as an integer
 * return: integer of the frequency of value v
 * precondition: vector of chars a and char v exists
 * postcondition: vector a and char v have not been changed, and integer of
 *                the frequency of value v has been returned
 *
*/

int arrayCount(vector<char> a, char v);


#endif // ARRAYCOUNT_H_INCLUDED