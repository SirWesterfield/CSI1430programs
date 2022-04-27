//Author: Wesley Anastasi
//Assignment Title: Program 28
//Assignment Description: Time Class
//Due Date: 4/29/2022
//Date Created: 4/27/2022
//Date Last Modified: 4/27/2022



/*
Data Abstraction:
Input: 
Process:
Output: 
Assumptions:
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct Time{
	int hour;
	int min;
	int second;
};


int main()
{
    //Data Abstraction:
    ifstream inputFile;
    string input;
    int hours;
    int minutes;
    int seconds;
    int numCount = 0;
    Time times[100];

    inputFile.open("timeData.txt");

    if (!inputFile)
    {
        cout << "Data File Failed To Open." << endl;
    }

    //Input:
    if (inputFile)
    {
        getline(inputFile, input);

        while (inputFile >> hours >> minutes >> seconds)
        {
            times[numCount].hour = hours;
            times[numCount].min = minutes;
            times[numCount].second = seconds;
            numCount++;
        }


        //Process:

        


        //Output:
    
    }

    return 0;
}
