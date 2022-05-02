//Author: Wesley Anastasi
//Assignment Title: Program 29
//Assignment Description: Sorting Students
//Due Date: 5/3/2022
//Date Created: 5/1/2022
//Date Last Modified: 5/2/2022



/*
Data Abstraction: ifstream for file
                  strings for all of student data
                  array of Students
                  int for num of students
                  bool for sorting
Input: open file and fill the student array.
Process: sort the student array using the compare function
Output: output the sorted array using the display function
Assumptions: the data file is formatted properly
*/

#include <iostream>
#include "classFunctions.h"
#include <fstream>

using namespace std;

int main()
{
    //Data Abstraction:
    ifstream inputFile;
    string input;
    string firstName, lastName, CLASS, zip, age, hometown, gpa;
    Student students[100];
    int numOfStudents = 0;
    bool sorted;

    //Input:
    inputFile.open("stDATA.txt");
    getline(inputFile,input);
    while (inputFile>>firstName>>lastName>>CLASS>>zip>>age>>hometown>>gpa)
    {
        students[numOfStudents].firstName = firstName;
        students[numOfStudents].lastName = lastName;
        students[numOfStudents].CLASS = CLASS;
        students[numOfStudents].gpa = gpa;
        students[numOfStudents].zip = zip;
        students[numOfStudents].age = age;
        students[numOfStudents].hometown = hometown;
        numOfStudents++;
    }

    //Process:

    sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 0; i < numOfStudents-1; i++)
        {
            int compareValue = students[i].compare(students[i+1]);
            if (compareValue==1)
            {
                swap(students[i],students[i+1]);
                sorted = false;
            }
            else if (compareValue == 2)
            {
                students[i+1].isDuplicate=true;
            }
        }
    }


    //Output:
    cout << setw(15) << left << "First Name";
    cout << setw(15) << left << "Last Name";
    cout << setw(15) << left << "Class";
    cout << setw(15) << left << "Zip";
    cout << setw(15) << left << "Age";
    cout << setw(15) << left << "Hometown";
    cout << setw(15) << left << "GPA";
    cout << endl;
    for (int i = 0; i < numOfStudents; i++)
    {
        students[i].display();
    }
    

    return 0;
}
