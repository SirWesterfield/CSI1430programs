//Author: Wesley Anastasi
//Assignment Title: Program 28
//Assignment Description: Time Class
//Due Date: 4/29/2022
//Date Created: 4/27/2022
//Date Last Modified: 4/27/2022



/*
Data Abstraction: need ifstream for input,
                  string for input,
                  three ints for input,
                  one int for num of inputs
                  bool for sorting
                  array to store Times
Input: open file, if file is not open then error
Process: store all the times into the array,
         then sort the array.
Output: output the sorted array.
Assumptions: the data file is properly formatted.
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct Time{
	int hour;
	int min;
	int second;


    /*
    * description: displays the contents of the object
    * return: void
    * precondition: hour, min, and second have been set.
    * postcondition: none
    *
    */

    void display()
    {
        cout << hour << ":" << min << ":" << second << endl;
    }

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
    bool sorted = false;
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

        while (!sorted)
        {
            sorted = true;
            for (int i = 0; i < numCount-1; i++)
            {
                if (times[i].hour > times[i+1].hour)
                {
                    swap(times[i], times[i+1]);
                    sorted = false;
                }
                else if (times[i].hour == times[i+1].hour && 
                times[i].min > times[i+1].min)
                {
                    swap(times[i], times[i+1]);
                    sorted = false;
                }
                else if (times[i].hour == times[i+1].hour && 
                times[i].min == times[i+1].min && 
                times[i].second > times[i+1].second)
                {
                    swap(times[i], times[i+1]);
                    sorted = false;
                }
            }
        }


        //Output:

        for (int i = 0; i < numCount; i++)
        {
            times[i].display();
        }
    }

    return 0;
}
