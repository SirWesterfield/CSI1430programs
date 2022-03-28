//Author: Wesley Anastasi
//Assignment Title: Program 9
//Assignment Description: Open file, do math with contents
//Due Date: 2/16/2022
//Date Created: 2/16/2022
//Date Last Modified: 2/16/2022

//Data Abstraction: create variables for the mathematical operations
//                  create the inputFile and a variable to store
//                  the file name
//Input: Get the file name
//
//Process: Open the file, loop through the contents
//         assign contents to appropriate variables.
//
//Output: output result of mathematical operations
//
//Assumptions: user wants to know the min/max/average/etc. of file contents
//             user has a file of numbers formated correctly


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    //Data Abstraction:
    ifstream inputFile;
    string fileName;
    int min, max, input;
    int sum = 0;
    int count = 0;
    double average;

    //Input:

    do
    {
        cout << "Enter Data File Name: ";
        cin >> fileName;
        cout << fileName << endl;
        inputFile.open(fileName);
        if(!inputFile)
        {
            cout << "Error:File Not Open." << endl;
        }
    }while(!inputFile);

    //Process:



    while (inputFile >> input)
    {
        if (count == 0)
        {
            min = max = input;
        }
        if (min > input)
        {
            min = input;
        }
        if (max < input)
        {
            max = input;
        }
        sum += input;
        count++;
    }

    average = static_cast<double>(sum)/count;

    inputFile.close();

    //Output:
    cout << setprecision(2) << fixed;
    cout << "Min     = " << min << endl;
    cout << "Max     = " << max << endl;
    cout << "Sum     = " << sum << endl;
    cout << "Count   = " << count << endl;
    cout << "Average = " << average << endl;







    return 0;
}
