//Author: Wesley Anastasi
//Assignment Title: Program 26
//Assignment Description: System of Linear equations
//Due Date: 4/22/2022
//Date Created: 4/19/2022
//Date Last Modified: 4/21/2022



/*
Data Abstraction: need string and stringstream for input
                  need two line objects to store the lines
                  need bool for whether the lines intersect
Input: get the two equations and store in Lines with getLine
Process: determine if the lines intersect
Output: output the results of the process
Assumptions: equations will be properly spaced and formatted
*/


#include <iostream>
#include <sstream>
#include <string>
#include "Line.h"

/*
 * description: retreives the coefficent from a string
 * return: double
 * precondition: the string must have only one letter
 *               and if it has numbers, they must be before the letter
 * postcondition: a double has been returned
 *
*/

double getCoef(string);

/*
 * description: returns a line given an equation via stringstream
 * return: Line object
 * precondition: the stringstream must contain a properly formatted equation
 * postcondition: a Line object has been returned
 *
*/

Line getLine(stringstream&);

using namespace std;

int main()
{
    //Data Abstraction:
    string input1;
    string input2;
    stringstream ss;
    Line line1;
    Line line2;
    Point solution;
    bool intersects;

    //Input
    
    getline(cin, input1);
    ss << input1;
    line1 = getLine(ss);
    ss.str("");
    ss.clear();

    getline(cin, input2);
    ss << input2;
    line2 = getLine(ss);
        
    //Process

    if (!line1.isCollinear(line2)&& !line1.isParallel(line2))
    {
        intersects = true;
        solution = line1.intersect(line2);
    }

    //Output:
    if (intersects)
    {
        cout << "SOLUTION: ";
        solution.display(cout);
        cout << endl;
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }

    return 0;
}

double getCoef(string input)
{
    double coef;
    int size = input.length();
    if (size == 1)
    {
        coef = 1;
    }
    else if (size == 2 && input[0] == '-')
    {
        coef = -1;
    }
    else
    {
        coef = stod(input.substr(0,size-1));
    }
    return coef;
}

Line getLine(stringstream& ss)
{
    string input;
    int side = -1;
    int sign = 1;
    int size;
    double a = 0;
    double b = 0;
    double c = 0;
    bool hasY = false;
    Point p1;
    Point p2;
    Line line;
    while (ss >> input)
    {
        size = input.length();
        switch (input[size-1])
        {
            case 'y':
                b = getCoef(input);
                b*=sign;
                hasY = true;
                break;
            case 'x':
                a = getCoef(input);
                a*=side;
                a*=sign;
                break;
            case '=':
                side = 1;
                break;
            case '-':
                sign = -1;
                break;
            case '+':
                sign = 1;
                break;
            default:
                c = stod(input);
                c*=sign;
                break;
        }
    }
    if (hasY)
    {
        p1.x = 0;
        p2.x = 1;
        p1.y = c/b;
        p2.y = a/b + c/b;
        line.setFirstPoint(p1);
        line.setSecondPoint(p2);
    }
    else
    {
        p1.y = 0;
        p1.x = c;
        p2.y = 1;
        p2.x = c;
        line.setFirstPoint(p1);
        line.setSecondPoint(p2);
    }
    return line;
}