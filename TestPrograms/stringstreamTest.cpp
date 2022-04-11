#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    stringstream ss;
    int n1, n2, n3, answer;
    char oper1, oper2;
    string s;
    ss << "12+47=59";
    cout << ss.str() << endl;
    ss >> n1;
    ss >> oper1;
    ss >> n2;
    ss >> oper2;
    ss >> n3;
    cout << n1 << endl;
    cout << oper1 << endl;

    switch(oper1)
    {
        case '+': answer = n1 + n2;
        break;
        case '-': answer = n1 - n2;
        break;
        //etc.
    }
    //resets stringstream
    ss.str("");
    ss.clear();

    return 0;
}