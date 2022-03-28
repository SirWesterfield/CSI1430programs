//Author: Wesley Anastasi
//Assignment Title: Program 18
//Assignment Description: Implement C-style string functions.
//Due Date: 3/25/2022
//Date Created: 3/23/2022
//Date Last Modified: 3/23/2022

#ifndef CSTRING_H_INCLUDED
#define CSTRING_H_INCLUDED

#include <iostream>
using namespace std;

/*
 * description: finds the length of cstring s1
 * return: The length of s1
 * precondition: cstring s1 exists
 * postcondition: s1 is unchanged
 *                length of s1 is returned
 *
*/

int Strlen(const char s1[]);

/*
 * description: copys the cotents of s2 over to s1
 * return: void
 * precondition: cstrings s1 and s2 exist
 *               size of s1 is not less than the size of s2
 * postcondition: contents of s2 have been copied to s1
 *                s2 has not been changed
 *
*/

void Strcpy(char s1[], const char s2[]);

/*
 * description: returns an integer indicating
                the relationship between the strings
                a zero value indicates that both strings are equal
                A value greater than zero indicates that the first character
                that does not match has a greater value in s1 than in s2;
                and a value less than zero indicates the opposite.
 * return: integer value indicating the relationship between the strings
 * precondition: cstring's s1 and s2 exist
 * postcondition: s1 and s2 have not been changed
 *                an integer has been returned indicating
 *                the relationship between the strings
 *
*/

int Strcmp(const char s1[], const char s2[]);

/*
 * description: adds a s2 onto the end of s1
 * return: void
 * precondition: cstrings s1 and s2 exist and s1 is large 
 *               enough to contain the contents of s1
 * postcondition: s1 will be equal to s1 with the contents of s2
 *                added onto the end
 *
*/

void Strcat(char s1[], const char s2[]);

#endif // CSTRING_H_INCLUDED