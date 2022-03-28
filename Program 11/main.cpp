//Author: Wesley Anastasi
//Assignment Title: Program 11
//Assignment Description: gps
//Due Date: 2/23/2022
//Date Created: 2/22/2022
//Date Last Modified: 2/22/2022

//Data Abstraction:
//
//Input:
// 
//Process: 
//
//Output: 
//
//Assumptions:
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    //Data Abstraction:
    ifstream inputFile;
    string fileName;
    double finalLocation[2];
    int count = 0;
    int spaces[4];
    int space = 0;
    int x = 0;
    int y = 0;
    vector<string> inputLine;
    vector<double> xPoints;
    vector<double> yPoints;
    string input;
    double totalDistanceTraveled = 0;
    bool start = false;
    bool findDigit = true;
    bool data = false;
    double distanceToStart;
    double averageDistanceToStart;

    //Input:

    do
    {
        cout << "Please Enter The Name Of The Data File: ";
        cin >> fileName;
        cout << fileName << endl;
        inputFile.open(fileName);
        if(!inputFile)
        {
            cout << "Error:File Not Open." << endl;
        }
    }while(!inputFile);

    //skip first two lines
    getline(inputFile, input);
    getline(inputFile, input);

    while (getline(inputFile, input))
    {
        inputLine.push_back(input);
        count++;
    }

    //Process:

    for (int i = 0; i < count; i++)
    {
        input = inputLine.at(i);
        if (inputLine.at(i).find("START") == 0)
        {
            start = true;
            data = true;
        }
        if (inputLine.at(i).find("DATA") == 0 && start)
        {
            data = true;
        }
        if (inputLine.at(i).find("STOP") == 0)
        {
            data = true;
        }

        if (start && data)
        {
            for (int a = 0; a < input.size(); a++)
            {                    if (findDigit)
                   {
                    if (isdigit(input[a]))
                    {
                        spaces[space] = a;
                        findDigit = false;
                        space++;
                    }
                    if (a == input.size()-1)
                    {
                        spaces[space] = a;
                        findDigit = true;
                        space = 0;
                    }
                }
                else
                {
                if (input[a] == ' ')
                    {
                        spaces[space] = a-1;
                        findDigit = true;
                        space++;
                    }
                    if (a == input.size()-1)
                    {
                        spaces[space] = a;
                        findDigit = true;
                        space = 0;
                    }
                }        
            }
            if (spaces[0]!=spaces[1])
            {
                x = stoi(input.substr(spaces[0],spaces[1]));
                if (input[spaces[0]-1] == '-')
                {
                    x *=-1;
                }

            }
            else
            {
                x = input[spaces[0]] - 48;
                if (input[spaces[0]-1] == '-')
                {
                    x *=-1;
                }
            }
            if (spaces[2]!=spaces[3])
            {
                y = stoi(input.substr(spaces[2],spaces[3]));
                if (input[spaces[2]-1] == '-')
                {
                    y *=-1;
                }
            }
            else
            {
                y = input[spaces[2]] - 48;
                if (input[spaces[2]-1] == '-')
                {
                    y *=-1;
                }
            }
            xPoints.push_back(x);
            yPoints.push_back(y);
        }
        data = false;
        if (inputLine.at(i).find("STOP") == 0)
        {
            start = false;
        }
    }

    for (int i = 1; i < count; i++)
    {
        double pointx = pow((xPoints.at(i) - xPoints.at(i-1)), 2);
        double pointy = pow((yPoints.at(i) - yPoints.at(i-1)), 2);
        totalDistanceTraveled += sqrt(pointx + pointy);
    }

    finalLocation[0] = xPoints.at(count-1);
    finalLocation[1] = yPoints.at(count-1);
    distanceToStart = sqrt(pow(finalLocation[0],2) + pow(finalLocation[1],2));
    averageDistanceToStart = totalDistanceTraveled/count;

    inputFile.close();
    //Output: 

    cout << setprecision(1) << fixed;
    cout << "Final Location: (" << finalLocation[0] << ", " << finalLocation[1] << ")" << endl;
    cout << "Total distance traveled " << totalDistanceTraveled << endl;
    cout << "Distance to starting point " << distanceToStart << endl;
    cout << "Average distance to start point = " << averageDistanceToStart << endl;


    return 0;
}