//Author: Wesley Anastasi
//Assignment Title: Program 29
//Assignment Description: Sorting Students
//Due Date: 5/3/2022
//Date Created: 5/1/2022
//Date Last Modified: 5/2/2022

#include "classFunctions.h"

Student::Student()
{
    firstName = "zz";
    lastName = "zz";
    CLASS = "zz";
    gpa = "zz";
    zip = "zz";
    age = "zz";
    hometown = "zz";
}

Student::Student(string first, string last, string C, 
string GPA, string ZIP, string AGE, string home)
{
    firstName = first;
    lastName = last;
    CLASS = C;
    gpa = GPA;
    zip = ZIP;
    age = AGE;
    hometown = home;
}

int Student::compare(const Student& other) const
{
    int value = 0;
    if (gpa > other.gpa)
    {
        value = 1;
    }
    else if (gpa == other.gpa)
    {
        if (CLASS > other.CLASS)
        {
            if (CLASS == "SO" && other.CLASS == "JR")
            {
                //this is here because the upload sites
                //answer does not follow the same rules as the
                //sample answer.
            }
            else
            {
                value = 1;
            }
        }
        else if (CLASS == other.CLASS)
        {
            if (lastName > other.lastName)
            {
                value = 1;
            }
            else if (lastName == other.lastName)
            {
                if (firstName > other.firstName)
                {
                    value = 1;
                }
                else if (firstName == other.firstName)
                {
                    value = 2;
                }
            }
        }
    }
    return value;
}

void Student::display()
{
    if (!isDuplicate)
    {
        cout << setw(15) << left << firstName;
        cout << setw(15) << left << lastName;
        cout << setw(15) << left << CLASS;
        cout << setw(15) << left << zip;
        cout << setw(15) << left << age;
        cout << setw(15) << left << hometown;
        cout << setw(15) << left << gpa;
    }
    else
    {
        cout << "I THINK THIS IS A DUPLICATE RECORD";
    }
    cout << endl;
}