//Author: Wesley Anastasi
//Assignment Title: Program 6
//Assignment Description: calculate quadratic formula
//Due Date: 2/4/2022
//Date Created: 2/4/2022
//Date Last Modified: 2/4/2022


//Data Abstraction: create variables for a b c, x and y.
//                  make output variables quadroot1/quadroot2 and x/y
//                  bool hasRealRoots in case the discriminant is negative
//                  double root for ease of calculation

//Input:            get user input for variables a b and c

//Process:          calculate the root and the vertex using a b and c

//Output:           output the root(s) and the vertex
//                  unless hasRealRoots is false

//Assumptions:      user will input numbers of reasonable size

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    double a, b, c, quadRoot1, quadRoot2, root, x, y;
    bool hasRealRoots = true;


    //Input:
    cin >> a >> b >> c;

    //Process:
    root = pow(b, 2) - 4*a*c;
    if (root < 0)
    {
        hasRealRoots = false;
    }
    else
    {
        quadRoot1 = ((b*-1) + sqrt(root)) / (2*a);
        quadRoot2 = ((b*-1) - sqrt(root)) / (2*a);
        if (quadRoot1 > quadRoot2)
        {
            double temp = quadRoot1;
            quadRoot1 = quadRoot2;
            quadRoot2 = temp;
        }
    }

    x = (b*-1)/(2*a);
    y = a*pow(x, 2) + b*x + c;
    if (x == 0)
    {
        x = 0;
    }

    //Output:
    cout << setprecision(2) << fixed;
    if (hasRealRoots)
    {

        if (quadRoot1 == quadRoot2)
        {
            cout << quadRoot1 << " (" << x << ", " << y << ")";
        }
        else
        {
            cout << quadRoot1 << " " << quadRoot2;
            cout << " (" << x << ", " << y << ")";
        }
    }
    else
    {
        cout << "NO REAL ROOTS" << " (" << x << ", " << y << ")";
    }


    return 0;
}
