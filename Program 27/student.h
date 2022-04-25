//Author: Wesley Anastasi
//Assignment Title: Program 27
//Assignment Description: Variable data length
//Due Date: 4/27/2022
//Date Created: 4/22/2022
//Date Last Modified: 4/25/2022

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct Student
{
    string name;
    string major;
    int totalGrades = 0;
    int numOfGrades = 0;

    /*
    * description: constructs the Student object
    * return: a student object
    * precondition: two strings exist
    * postcondition: a Student object has been created
    *
    */

    Student(string name, string major);

    /*
    * description: adds the grade to the totalGrades and increments numGrades
    * return: void
    * precondition: a integer exists
    * postcondition: none
    *
    */

    void addGrade(int grade);

    /*
    * description: displays the data in the order:
                   name major average
    * return: void
    * precondition: none
    * postcondition: none
    *
    */

    void display();

    /*
    * description: returns the students average
    * return: double
    * precondition: none
    * postcondition: none
    *
    */

    double getAverage();
};

#endif // STUDENT_H_INCLUDED