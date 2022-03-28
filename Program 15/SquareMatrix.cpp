//Author: Wesley Anastasi
//Assignment Title: Program 15
//Assignment Description: Square Matrix
//Due Date: 3/16/2022
//Date Created: 3/15/2022
//Date Last Modified: 3/15/2022



/*
Data Abstraction: create 2D matrix from 0 to 100
                  need variables for getting input
                  need vector to store input
                  maybe make vector to store arrays?

Input: get input and store in vector untill getting a zero

Process: loop through half of the matrix
         set all of the edges to be ones
         get the approporiate value by looking at
         the surrounding numbers
         Ex: 1 1
             1 ?
         1 = 1, 1+1 = 2, ? = 2
         Ex: 1 2
             1 ?
         2 > 1, ? = 2

         then run through the second half of the matrix backwards
         and apply the same logic

Output: if I store all the matricies in a vector
        loop through the vector and output
        otherwise, output the array immediately
        after creating it

Assumptions: user will only input integers
             user knows to input a zero to stop
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Data Abstraction:
    int xCount = 100;
    int yCount = 100;
    int array[xCount][yCount];
    int inputCount;
    int numInput;
    int elementPlace;
    vector<int> input;

    //Input:

    cin >> numInput;
    while (numInput > 0)
    {
        input.push_back(numInput);
        inputCount++;
        cin >> numInput;
    }
    cout << endl << endl;

    //Process & Output:

    for (int i = 0; i < inputCount;i++)
    {
        //Process
        elementPlace = input.at(i);
        //Create the first part of the matrix
        for (int y = 0; y < input.at(i); y++)
        {
            for (int x = 0; x < elementPlace; x++)
            {
                if (x == 0 || y == 0 || x == input.at(i)-1 
                || y == input.at(i)-1)
                {
                    array[x][y] = 1;
                }
                else
                {
                    if (array[x-1][y] == array[x][y-1])
                    {
                        array[x][y] = array[x-1][y] + 1;
                    }
                    else if (array[x-1][y] > array[x][y-1])
                    {
                        array[x][y] = array[x-1][y];
                    }
                    else
                    {
                        array[x][y] = array[x][y-1];
                    }
                }
            }
            elementPlace--;
        }
        elementPlace = 0;
        for (int y = input.at(i)-1; y > 0; y--)
        {
            for (int x = input.at(i)-1; x > elementPlace; x--)
            {
                if (x == 0 || y == 0 || x == input.at(i)-1 
                || y == input.at(i)-1)
                {
                    array[x][y] = 1;
                }
                else
                {
                    if (array[x+1][y] == array[x][y+1])
                    {
                        array[x][y] = array[x+1][y] + 1;
                    }
                    else if (array[x+1][y] > array[x][y+1])
                    {
                        array[x][y] = array[x+1][y];
                    }
                    else
                    {
                        array[x][y] = array[x][y+1];
                    }
                }
            }
            elementPlace++;
        }

        //Output
        for (int y = 0; y < input.at(i); y++)
        {
            for (int x = 0; x < input.at(i); x++)
            {
                if (array[x][y] < 10)
                {
                    cout << array[x][y] << "  ";
                }
                else
                {
                    cout << array[x][y] << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    

    return 0;
}
