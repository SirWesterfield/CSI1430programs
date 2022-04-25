//Author: Wesley Anastasi
//Assignment Title: Program 27
//Assignment Description: Variable data length
//Due Date: 4/27/2022
//Date Created: 4/22/2022
//Date Last Modified: 4/25/2022



/*
Data Abstraction: need fstream to open file,
                  need stringstream to get data from file
                  need string for name and major
                  need ints for grades
                  need vector for student struct
                  need bool for sorting student vector

Input: open file and check if it is open
       assert that the file is open

Process: skip first line of file, the get each line, store in sstream
         then get contents of sstream and store in student object,
         then store in vector.
         also get a list of all unique majors
         sort student and unique major vectors

Output: output data properley formatted, find the weighted average
        for each major.

Assumptions: data file is properly formatted
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <sstream>
#include <vector>
#include "student.h"
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    string input;
    fstream inputFile;
    stringstream studentLine;
    string name, major;
    vector<Student> students;
    vector<string> majors;
    bool sorted;
    bool hasMajor;
    int grade;
    double average;
    int averageCount;

    //Input:
    cout << "Enter File Name: ";
    cin >> input;
    cout << input << endl;
    
    inputFile.open(input);
    assert(inputFile);

    //Process:

    getline(inputFile, input);

    while (getline(inputFile, input))
    {
        studentLine.str("");
        studentLine.clear();
        studentLine << input;
        studentLine >> name >> major;
        Student temp(name, major);
        hasMajor = false;
        for (unsigned int i = 0; i < majors.size(); i++)
        {
            if (majors.at(i) == major)
            {
                hasMajor = true;
            }
        }
        if (!hasMajor)
        {
            majors.push_back(major);
        }
        for (int i = 0; i < 10; i++)
        {
            studentLine >> grade;
            if (!studentLine.fail())
            {
                temp.addGrade(grade);
            }
            else
            {
                i = 10;
            }
        }
        students.push_back(temp);
    }
    inputFile.close();
    
    //sort students by major and grades
    sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (unsigned int i = 0; i < students.size() - 1; i++)
        {
            if (students.at(i).major > students.at(i+1).major)
            {
                sorted = false;
                swap(students.at(i), students.at(i+1));
            }
            else if (students.at(i).major == students.at(i+1).major 
            && students.at(i).getAverage() < students.at(i+1).getAverage())
            { 
                sorted = false;
                swap(students.at(i), students.at(i+1));   
            }
        }
    }

    //sort majors
    sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (unsigned int i = 0; i < majors.size() - 1; i++)
        {
            if (majors.at(i) > majors.at(i+1))
            {
                swap(majors.at(i), majors.at(i+1));
                sorted = false;
            }
        }
    }

    //Output:
    cout << fixed << setprecision(2);

    cout << "Total Number of Students = " << students.size() << "\n";
    cout << "Total Number of Unique Majors = " << majors.size() << "\n";
    cout << endl;

    cout << setw(10) << "Major";
    cout << setw(20) << "Weighted Average\n";
    for (unsigned int i = 0; i < majors.size(); i++)
    {
        average = 0;
        averageCount = 0;
        cout << setw(10) << majors.at(i);
        for (unsigned int j = 0; j < students.size(); j++)
        {
            if (students.at(j).major == majors.at(i))
            {
                average += students.at(j).totalGrades;
                averageCount += students.at(j).numOfGrades;
            }
        }
        cout << setw(10) << average/averageCount << endl;
    }
    cout << endl;

    cout << setw(10) << "Name";
    cout << setw(10) << "Major";
    cout << setw(10) << "Average\n";
    for (unsigned int i = 0; i < students.size(); i++)
    {
        students.at(i).display();
        cout << endl;
    }

    return 0;
}
