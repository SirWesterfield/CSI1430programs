//Author: Wesley Anastasi
//Assignment Title: Program 16
//Assignment Description: Print Multiplication table
//Due Date: 3/18/2022
//Date Created: 3/18/2022
//Date Last Modified: 3/18/2022



/*
Data Abstraction: need variables for each input, and one for
                  outputing the multiplied value
                  need two vectors for numbers to multiply
                  need the size of both vectors

Input: ask for the 4 ints and store them in the variables

Process: get all the numbers for the vectors
         maybe store all multiplied values in 2D vector

Output: loop through each line and output the values then wierd line

Assumptions: user will only input integers
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Data Abstraction:
    int x1, x2, y1, y2, outputValue;
    vector<int> vectorX;
    vector<int> vectorY;
    int sizeX = 0;
    int sizeY = 0;
    

    //Input:
    cout << "Please Enter Four Integers R1 R2 C1 C2: ";
    cin >> y1 >> y2 >> x1 >> x2;
    cout << y1 << " " << y2 << " " 
    << x1 << " " << x2 << " " << endl;
    //Process:

    if (x1 < x2)
    {
        for (int i = x1; i <= x2; i++)
        {
            sizeX++;
            vectorX.push_back(i);
        }
    }
    else
    {
        for (int i = x1; i >= x2; i--)
        {
            sizeX++;
            vectorX.push_back(i);
        }
    }
    if (y1 < y2)
    {
        for (int i = y1; i <= y2; i++)
        {
            sizeY++;
            vectorY.push_back(i);
        }
    }
    else
    {
        for (int i = y1; i >= y2; i--)
        {
            sizeY++;
            vectorY.push_back(i);
        }
    }

    //Output:
    for (int y = 0; y <= sizeY; y++)
    {
        if (y == 0)
        {
            cout << "        ";
            for (int i = 0; i < sizeX; i++)
            {
                if (vectorX.at(i) < -9)
                {
                    cout << vectorX.at(i) << "   ";
                }
                else if (vectorX.at(i) < 0)
                {
                    cout << vectorX.at(i) << "    ";
                }
                else if (vectorX.at(i) < 10)
                {
                    cout << vectorX.at(i) << "     ";
                }
                else if (vectorX.at(i) < 100)
                {
                    cout << vectorX.at(i) << "    ";
                }
                else
                {
                    cout << vectorX.at(i) << "   ";
                }
            }
        }
        else
        {
            //first value in line
            if (vectorY.at(y-1) < -9)
            {
                cout << vectorY.at(y-1) << "   ";
            }
            else if (vectorY.at(y-1) < 0)
            {
                cout << vectorY.at(y-1) << "    ";
            }
            else if (vectorY.at(y-1) < 10)
            {
                cout << vectorY.at(y-1) << "       ";
            }
            else if (vectorY.at(y-1) < 100)
            {
                cout << vectorY.at(y-1) << "      ";
            }
            else
            {
                cout << vectorY.at(y-1) << "     ";
            }
            //multiplication values
            for (int x = 0; x < sizeX; x++)
            {
                outputValue = vectorY.at(y-1) * vectorX.at(x);
                if (outputValue < -9)
                {
                    cout << outputValue << "   ";
                }
                else if (outputValue < 0)
                {
                    cout << outputValue << "    ";
                }
                else if (outputValue < 10)
                {
                    cout << outputValue << "     ";
                }
                else if (outputValue < 100)
                {
                    cout << outputValue << "    ";
                }
                else
                {
                    cout << outputValue << "   ";
                }
            }
        }
        cout << endl;
        //middle line
        for (int i = 0; i <= sizeX; i++)
        {
            cout << "-----|";
        }
        cout << endl;
    }

    return 0;
}
