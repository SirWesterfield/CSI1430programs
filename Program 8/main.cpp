//Author: Wesley Anastasi
//Assignment Title: Program 8
//Assignment Description: Guessing Game
//Due Date: 2/11/2022
//Date Created: 2/11/2022
//Date Last Modified: 2/11/2022

//Data Abstraction: create integers for the min, max, random num,
//                  users guess, and num of tries.
//                  make bool for loop condition, generate seed.

//Input: Ask user for the min and max, and state min/max

//Process: assign value to random num, loop until user guess's right,
//         increment tries for each iteration

//Output: output win statment along with num of tries

//Assumptions: user will input valid integers
//             user knows how numbers work



#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //Data Abstraction:
    int minNum, maxNum, randNum, guess, tries;
    bool guessRight = false;
    srand(time(0));
    //Input:
    cout << "Please enter 2 integers: ";
    cin >> minNum >> maxNum;
    cout << minNum << " " << maxNum << endl;


    //Process:
    if (minNum > maxNum)
    {
        int temp = minNum;
        minNum = maxNum;
        maxNum = temp;
    }
    cout << "I'm thinking of a number between " << minNum;
    cout << " and " << maxNum << "." << endl;
    randNum = rand()%(maxNum - minNum) + minNum;
    tries = 0;
    while (!guessRight)
    {
        tries++;
        cout << "Enter guess: ";
        cin >> guess;
        cout << guess ;
        if (guess > randNum)
        {
            cout << " - " << "Too High" << endl;
        }
        else if (guess < randNum)
        {
            cout << " - " << "Too Low" << endl;
        }
        else if (guess == randNum)
        {
            guessRight = true;
        }
    }


    //Output:

    cout << endl;
    cout << "Correct, it took you " << tries << " tries to guess my number.";

    return 0;
}
