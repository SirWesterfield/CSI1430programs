//Author: Wesley Anastasi
//Assignment Title: Program 27
//Assignment Description: Variable data length
//Due Date: 4/27/2022
//Date Created: 4/22/2022
//Date Last Modified: 4/22/2022

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
using namespace std;


struct student
{
    string name;
    string major;
    int totalGrades = 0;
    int numOfGrades = 0;

    student(string name, string major);

    void addGrade(int grade);

    double getAvergae();
};


#endif // STUDENT_H_INCLUDED