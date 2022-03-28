#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool runProgram = true;
    double totalDistance;
    double num1, num2, num3, num4;
    string command;
    num1 = 0;
    num2 = 0;
    while(runProgram)
    {
        cout << "Input y or n" << endl;
        cin >> command;
        if (command == "n")
        {
            runProgram = false;
        }
        cout << "Please Input two numbers: ";
        cin >> num3 >> num4;
        totalDistance += (sqrt(pow((num3 - num1), 2) + pow((num4-num2), 2)));


    }
    
    cout << "Total Distance = :" << totalDistance;

    return 0;
}