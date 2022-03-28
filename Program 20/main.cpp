//Author: Wesley Anastasi
//Assignment Title: Program 20
//Assignment Description: Pascal's triangle
//Due Date: 4/1/2022
//Date Created: 3/28/2022
//Date Last Modified: 3/8/2022



/*
Data Abstraction:
Input: Get the number of rows
Process: 
Output: 
Assumptions: user will only input an integer
*/
#include <iostream>
#include "myFunctions.h" 

using namespace std;

int main()
{
    //Data Abstraction:
    int rows;
    int xRows;
    int middleRows = -2;
    int tempValue = 0;

    //Input:
    cout << "Please Enter The Number of Rows: ";
    cin >> rows;;
    cout << rows << endl;
    //Process/Output:

    xRows = rows;

    for (int a = 0; a < rows; a++)
    {
        //Spaces on the left
        for (int x = 0; x < xRows; x++)
        {
            cout << "    ";
        }
        cout << "1       ";
        //stuff in middle of pyramid
        for (int i = 0; i < middleRows; i++)
        {
            if (tempValue < 10)
            {
                cout << tempValue << "       ";
            }
            else if (tempValue < 100)
            {
                cout << tempValue << "      ";
            }
            else if (tempValue < 1000)
            {
                cout << tempValue << "     ";
            }
            else
            {
                cout << tempValue << "    ";
            }

        }
        if (middleRows >= 0)
        {
            cout << "1";
        }
        cout << endl;
        xRows--;
        middleRows++;
    }


    //Pascals's Matrix, figure out spacing for triangle
    /*
    for (int y = 0; y < rows; y++)
    {
        for (int x = 0; x < rows; x++)
        {
            if (x == 0 || y == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << factorial(x+y) / (factorial(x)*factorial(y)) << " ";
            }
        }
        cout << endl;
    }
    */
    

    return 0;
}