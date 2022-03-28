//Author: Wesley Anastasi
//Assignment Title: Program 3
//Assignment Description: display the complex numbers
//Due Date: 1/26/2022
//Date Created: 1/26/2022
//Date Last Modified: 1/26/2022
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d;
    a = 1.2;
    b = -3;
    c = -5.7;
    d = 6.3;

    double a1, b1, a2, b2, a3, b3, a4, b4;
    a1 = a + c;
    b1 = b + d;
    a2 = a - c;
    b2 = b - d;
    a3 = (a*c - b*d);
    b3 = a*d + b*c;
    a4 = (a*c + b*d)/(c*c + d*d);
    b4 = (b*c - a*d)/(c*c + d*d);

    cout << fixed << setprecision(1);
    cout << "n1 + n2 = " << a1 << " + " << b1 << "i" << endl;
    cout << "n1 - n2 = " << a2 << " + " << b2 << "i" << endl;
    cout << "n1 * n2 = " << a3 << " + " << b3 << "i" << endl;
    cout << "n1 / n2 = " << a4 << " + " << b4 << "i" << endl;

    return 0;
}
