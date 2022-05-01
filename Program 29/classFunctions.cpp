//Author: Wesley Anastasi
//Assignment Title: Program 29
//Assignment Description: Sorting Students
//Due Date: 5/3/2022
//Date Created: 5/1/2022
//Date Last Modified: 5/1/2022

#include "classFunctions.h"

Student::Student(string first, string last, string C)
{
    firstName = first;
    lastName = last;
    CLASS = C;
}

int Student::compare(const Student&) const
{
    int value = 0;
    return value;
}