//Author: Wesley Anastasi
//Assignment Title: Program 27
//Assignment Description: Variable data length
//Due Date: 4/27/2022
//Date Created: 4/22/2022
//Date Last Modified: 4/25/2022 

#include "student.h"

Student::Student(string name, string major)
{
    this->name = name;
    this->major = major;
}

void Student::addGrade(int grade)
{
    numOfGrades++;
    totalGrades+=grade;
}

void Student::display()
{

    cout << setw(10) << name;
    cout << setw(10) << major;
    cout << setw(10) << getAverage();
}

double Student::getAverage()
{
    double average;
    if (totalGrades == 0)
    {
        average = 0;
    }
    else
    {
        average = static_cast<double>(totalGrades)/numOfGrades;
    }
    return average;
}