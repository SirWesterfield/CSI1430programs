//Author: Wesley Anastasi
//Assignment Title: Program 18
//Assignment Description: Implement C-style string functions.
//Due Date: 3/25/2022
//Date Created: 3/23/2022
//Date Last Modified: 3/23/2022



/*Data Abstraction:
Input: 
Process:
Output: 
Assumptions:
*/
#include <iostream>
#include "Cstring.h"

using namespace std;

int main()
{
    char ccNumber1[] = "potato";
	char buffer[50];
	string input;
	char ccNumber2[] = "this is a test";


	cout << "Enter Input: ";
	getline(cin, input);

	cout <<"ccNumber1 = "<< ccNumber1 << endl;
	cout <<"ccNumber2 = "<< ccNumber2 << endl;
	Strcpy(buffer, input.c_str());
	Strcat(buffer, ccNumber1);
	cout << Strlen(buffer) << endl;
	cout << buffer << endl;
	cout << Strcmp(buffer, ccNumber1) << endl; 
	cout <<"ccNumber1 = "<< ccNumber1 << endl;
	cout <<"ccNumber2 = "<< ccNumber2 << endl;


	return 0;

    return 0;
}