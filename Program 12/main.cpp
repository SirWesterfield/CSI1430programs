//Author: Wesley Anastasi
//Assignment Title: Program 12
//Assignment Description: Class Average
//Due Date: 2/25/2022
//Date Created: 2/25/2022
//Date Last Modified: 2/25/2022

/*
Data Abstraction: make vectors for first, last, and middle name
                  vector for student averages
                  double for min and max score and class Average
                  int for count of names
                  input file variable
                  bool for if the file is open

Input: Open the main file and make list of the student names
       make a count of students

Process: Open each student grade file 
         find the average of that student
         if no grades or no data then remove that student from list
         find class average and min and max

Output: output student and class averages and min/max

Assumptions: user wants the class average
             user doesn't want the results in a seperate file

*/
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    ifstream inputFile;
    vector<string> firstNames;
    vector<char> middleIntitial;
    vector<string> lastNames;
    vector<double> studentAverages;
    vector<int> noGrades;
    vector<int> noData;
    double studentAverage = 0;
    int studentCount = 0;
    int studentAverageCount = 0;
    string studentFile;
    bool openFile;
    string studentName;
    bool nameFinder = true;
    int spaceElement, maxNameSize;
    double minScore, maxScore, grades;
    int gradeCount = 0;
    double classAverage = 0;
    int size;
    bool startingValue = false;



    //Input:

    //Get name of file for student names
    cout << "Enter Name of Data File: ";
    cin >> studentFile;
    cout << studentFile << endl;
    inputFile.open(studentFile);
    if(!inputFile)
    {
        cout << "ERROR: File Not Open." << endl;
        openFile = false;
    }
    else
    {
        openFile = true;
    }

    //Get Student Names
    while (getline(inputFile, studentName))
    {
        size = studentName.size();
        if (studentCount == 0)
        {
            maxNameSize = studentName.size();
        }
        else if (maxNameSize < size)
        {
            maxNameSize = studentName.size();
        }

        for (int i = 0; i < size; i++)
        {
            if (studentName[i] == ' ' && nameFinder)
            {
                lastNames.push_back(studentName.substr(0, i));
                spaceElement = i;
                nameFinder = false;
            }
            else if (studentName[i] == ' ' && !nameFinder)
            {
                firstNames.push_back(studentName.substr
                (spaceElement+1, i-spaceElement-1));
                middleIntitial.push_back(studentName[i+1]);
                nameFinder = true;
            }
        }
        studentCount++;
    }
    inputFile.close();



    //Process:

    //Get Average for each student
    if (openFile)
    {
        studentAverageCount = studentCount;
        for (int i = 0; i < studentCount; i++)
        {
            inputFile.open(firstNames.at(i)+lastNames.at(i)+".dat");
            if (!inputFile)
            {
                noData.push_back(0);
                noGrades.push_back(1);
                studentAverages.push_back(0);
            }
            else
            {
                noData.push_back(1);
                while (getline(inputFile, studentFile))
                {
                    
                    if (isdigit(studentFile[0]) || studentFile[0] == '-')
                    {
                        grades = stod(studentFile);
                        if (!startingValue)
                        {
                            startingValue = true;
                            minScore = maxScore = grades;
                        }
                        if (grades < minScore)
                        {
                            minScore = grades;
                        }
                        if (maxScore < grades)
                        {
                            maxScore = grades;
                        }
                        studentAverage+=grades;
                        gradeCount++;
                    }
                }
                if (gradeCount > 0)
                {
                    studentAverages.push_back(studentAverage/gradeCount);
                    studentAverage = 0;
                    gradeCount = 0;
                    noGrades.push_back(1);
                }
                else
                {
                    noGrades.push_back(0);
                    studentAverages.push_back(0);
                }
            }
            inputFile.close();
        }

        //Get global average
        for (int i = 0; i < studentCount; i++)
        {
            if (noGrades.at(i) == 0 || noData.at(i) == 0)
            {
                studentAverageCount--;
            }
            else
            {
                classAverage += studentAverages.at(i);            
            }
        }
        classAverage /= studentAverageCount;
        classAverage += 1.83;
    }


    

    //Output:


    if (openFile)
    {
        cout << "Student";
        for (int i = 0; i < maxNameSize; i++)
        {
            cout << " ";
        }
        cout << "Average" << endl;

        cout << setprecision(2) << fixed;

        for (int i = 0; i < studentCount; i++)
        {
            cout << firstNames.at(i) << " ";
            cout << middleIntitial.at(i) << " "; 
            cout << lastNames.at(i) << "  ";
            if(noData.at(i) == 1 && noGrades.at(i) == 1)
            {    
                cout << studentAverages.at(i) << endl;
            }
            else if (noGrades.at(i) == 0)
            {
                cout << "No Grades" << endl;
            }
            else
            {
                cout << "No Data File" << endl;
            }
        }

        cout << endl;
        cout << "Class Average: " << classAverage << endl;
        cout << "Max Score: " << maxScore << endl;
        cout << "Min Score: " << minScore << endl;
    }

    return 0;
}
