//Author: Wesley Anastasi
//Assignment Title: Program 20
//Assignment Description: Pascal's triangle
//Due Date: 4/1/2022
//Date Created: 3/28/2022
//Date Last Modified: 3/8/2022



/*
Data Abstraction: number of rows, number of rows in the middle,
                  number of spaces in front of each row, value
                  for each entry
Input: Get the number of rows
Process: set rowSpace = to rows
Output: output the spaces in front of each row, then if
                it is the outside of the pyramid output a 1
                otherwise, use combination to find the value to output
Assumptions: user will only input an integer
*/
#include <iostream>
#include "myFunctions.h" 

using namespace std;

int main()
{
    //Data Abstraction:
    int rows;
    int rowSpaces;
    int middleRows = -1;
    int value = 0;

    //Input:
    cout << "Please Enter The Number of Rows: ";
    cin >> rows;;
    cout << rows << endl;
    //Process
    
    rowSpaces = rows;

    //Output:

    for (int a = 0; a < rows; a++)
    {
        //Spaces on the left
        for (int r = 0; r < rowSpaces; r++)
        {
            cout << "    ";
        }
        cout << "1       ";
        //stuff in middle of pyramid
        for (int i = 0; i < middleRows; i++)
        {
            value = combination(a,i+1);
            if (value < 10)
            {
                cout << value << "       ";
            }
            else if (value < 100)
            {
                cout << value << "      ";
            }
            else if (value < 1000)
            {
                cout << value << "     ";
            }
            else
            {
                cout << value << "    ";
            }

        }
        if (middleRows >= 0)
        {
            cout << "1";
        }
        cout << endl;
        rowSpaces--;
        middleRows++;
    }
    return 0;
}