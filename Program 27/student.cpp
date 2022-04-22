//Author: Wesley Anastasi
//Assignment Title: Program 27
//Assignment Description: Variable data length
//Due Date: 4/27/2022
//Date Created: 4/22/2022
//Date Last Modified: 4/22/2022 

#include "student.h"

student::student(string name, string major)
{
    this->name = name;
    this->major = major;
}

void student::addGrade(int grade)
{
    numOfGrades++;
    totalGrades+=grade;
}

double student::getAvergae()
{
    double average;
    average = static_cast<double>(totalGrades)/numOfGrades;
    return average;
}