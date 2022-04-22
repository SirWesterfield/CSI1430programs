//Author: Wesley Anastasi
//Assignment Title: Program 27
//Assignment Description: Variable data length
//Due Date: 4/27/2022
//Date Created: 4/22/2022
//Date Last Modified: 4/22/2022



/*
Data Abstraction:
Input: 
Process:
Output: 
Assumptions:
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>

using namespace std;

int main()
{
    //Data Abstraction:
    string input;
    fstream inputFile;

    //Input:
    cout << "Enter File Name: ";
    cin >> input;
    cout << input << endl;
    
    inputFile.open(input);
    assert(inputFile);

    //Process:

    inputFile.close();
    //Output:
    

    return 0;
}
