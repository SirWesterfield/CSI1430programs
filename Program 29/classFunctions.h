//Author: Wesley Anastasi
//Assignment Title: Program 29
//Assignment Description: Sorting Students
//Due Date: 5/3/2022
//Date Created: 5/1/2022
//Date Last Modified: 5/2/2022

#ifndef HEADERTEMPLATE_H_INCLUDED
#define HEADERTEMPLATE_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    string CLASS;
    string gpa;
    string zip;
    string age;
    string hometown;
    bool isDuplicate = false;

    /*
    * description: constructs a student with default values
    * return: student object
    * precondition: none
    * postcondition: none
    *
    */

    Student();

    /*
    * description: constructs a Student with the inputed values
    * return: student object
    * precondition: none
    * postcondition: none
    *
    */

    Student(string firstName, string lastName, string CLASS, string gpa, 
    string zip, string age, string hometown);


    /*
    * description: returns 0 if the original student
                   should be higher than other, returns 1 if 
                   other is > than orignal
                   returns 2 if they are equal
    * return: integer
    * precondition: a student exists
    * postcondition: no student object has been changed
    *
    */

    int compare(const Student& other) const;

    /*
    * description: displays the contents of the student
    * return: void
    * precondition: none
    * postcondition: none
    *
    */

    void display();

};


#endif // HEADERFILENAME_H_INCLUDED