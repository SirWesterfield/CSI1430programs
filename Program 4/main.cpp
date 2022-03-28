//Author: Wesley Anastasi
//Assignment Title: Sum the Digits
//Assignment Description: Get number and sum digits
//Due Date: 1/28/2022
//Date Created: 1/28/2022
//Date Last Modified: 1/28/2022

//Data Abstraction: create variable input, mod, finalValue
//and while condition

//Input: read input from user and assign to variable input

//Process: run input through a loop
//taking the modulus of input and dividing it by mod/10
//with increasing values of mod, adding each number to finalValue

//Output: print out finalValue

//Assumptions: It is assumed the user will only input whole numbers
//It is assumed the user will not input a number higher than 9999999

#include <iostream>
using namespace std;

int main()
{
    //Data Abstraction
    int input, finalValue;
    int mod = 10;
    int whileCondition = 0;

    //Input
    cout << "Enter an integer between 0 and 9999999: ";
    cin >> input;
    cout << input << endl;

    //Process:
    finalValue = input%mod;
    mod*=10;
    while (whileCondition < input)
    {
        finalValue = finalValue + ((input % mod)/(mod/10));
        whileCondition = input % mod;
        mod*=10;
    }



    //Output
    cout << "The sum of the digits is " << finalValue << ".";
    return 0;
}
