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
    int totalRows;
    int middleRows = 0;
    bool everyOtherRow = false;
    bool firstPass;

    //Input:
    cout << "Please Enter The Number of Rows: ";
    cin >> rows;;
    cout << rows << endl;
    //Process/Output:

    totalRows = rows*2;
    xRows = totalRows;

    for (int y = 0; y < totalRows; y++)
    {
        firstPass = true;
        for (int i = 0; i < 2; i++)
        {
            //Spaces on either side
            for (int x = 0; x < xRows; x++)
            {
                cout << " ";
            }
            if (firstPass)
            {
                //does everything in the middle of the pyramid
                if (middleRows == 0)
                {
                    cout << "1";
                }
                else
                {
                    if (everyOtherRow)
                    {
                        cout << "1";
                        for (int a = 0; a < middleRows; a++)
                        {
                            cout << " ";
                        }
                        cout << "1";
                    }
                }
                firstPass = false;
            }
        }
        cout << endl;
        if (everyOtherRow)
        {
            everyOtherRow = false;
        }
        else
        {
            everyOtherRow = true;
        }
        xRows--;
        if (middleRows == 0)
        {
            middleRows = 1;
        }
        else
        {
            middleRows+=2;
        }
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