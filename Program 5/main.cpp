//Author: Wesley Anastasi
//Assignment Title: Program 5
//Assignment Description: calculate mean and deviation
//Due Date: 2/2/2022
//Date Created: 2/2/2022
//Date Last Modified: 2/2/2022


//Data Abstraction: create 5 integers and variable to store the
//                  separate means and deviation
//                  create bool for the sorting while loop

//Input:            get user input for a-e

//Process:          Sort a-e, and then calculate the means and deviation
//                  and assign them to variables

//Output:           output the result of the calculations
//                  and the sorted variables

//Assumptions:      user will only input integers
//                  user wont input integers that are too big

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;




int main()
{
    //Data Abstraction
    double a, b, c, d, e, powa, powb, powc, powd, powe;
    double aMean, gMean, hMean, sDev;
    bool isSorted = false;
    //Input:
    cout << "Enter five numbers:" << endl;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    //Process:

    while (!isSorted)
    {
        isSorted = true;
        if (a < b)
        {
            int temp = a;
            a = b;
            b = temp;
            isSorted = false;
        }
        if (b < c)
        {
            int temp = b;
            b = c;
            c = temp;
            isSorted = false;
        }
        if (c < d)
        {
            int temp = c;
            c = d;
            d = temp;
            isSorted = false;
        }
        if (d < e)
        {
            int temp = d;
            d = e;
            e = temp;
            isSorted = false;
        }
    }

    aMean = (a+b+c+d+e)/5.0;
    gMean = pow(a, .2)*pow(b, .2)*pow(c, .2)*pow(d, .2)*pow(e, .2);
    hMean = 5.0/((1.0/a)+(1.0/b)+(1.0/c)+(1.0/d)+(1.0/e));
    powa = pow(a-aMean,2.0);
    powb = pow(b-aMean,2.0);
    powc = pow(c-aMean,2.0);
    powd = pow(d-aMean,2.0);
    powe = pow(e-aMean,2.0);
    sDev = sqrt((powa+powb+powc+powd+powe)/5.0);

    //Output:

    cout << "Result:" << endl;
    cout << "Data:" << endl;
    cout << setprecision(0) << fixed;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << endl;
    cout << setprecision(2) << fixed << endl;
    cout << "Arithmetic Mean    = " << aMean << endl;
    cout << "Geometric  Mean    = " << gMean << endl;
    cout << "Harmonic   Mean    = " << hMean << endl;
    cout << "Standard Deviation = " << sDev << endl;

    return 0;
}
