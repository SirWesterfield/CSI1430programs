//Author: Wesley Anastasi
//Assignment Title: Program 25
//Assignment Description: Array of Spheres
//Due Date: 4/20/2022
//Date Created: 4/19/2022
//Date Last Modified: 4/19/2022



/*
Data Abstraction: need array of spheres, the inputfile, 
                  string and int for input.
                  count of red spheres, doubles for 
                  average area and 
                  percentage of voulmes greater than 215.
                  Need int for count of spheres

Input: get filename and open the file

Process: go through file, and store the data in the 
         appropriate variables.
         make sure to calculate the average annd percentage as well

Output: output collected data in a properly formatted way

Assumptions: users data file is formatted properly
*/

#include <iostream>
#include "Sphere.h"
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    Sphere spheres[100];
    ifstream inputFile;
    string input;
    double radius;
    string color;
    int outputWidth = 15;
    double averageArea = 0;
    double redSpheres = 0;
    int largeVolumes = 0;
    int count = 0;

    //Input:

    do
    {
        cout << "Enter file name: ";
        cin >> input;
        cout << input << endl;
        inputFile.open(input);
        if (!inputFile)
        {
            cout << "Error: File Not Open." << endl;
        }
    } while (!inputFile);



    //Process:
    getline(inputFile, input);
    getline(inputFile, input);

    while (inputFile >> radius >> color)
    {
        Sphere temp(radius, color);
        spheres[count] = temp;
        averageArea += temp.area();
        if (temp.area() > 215)
        {
            largeVolumes++;
        }
        if (color == "red")
        {
            redSpheres++;
        }
        count++;
    }
    inputFile.close();
    redSpheres /= count;
    redSpheres *= 100;
    averageArea /= count;
    //Output:
    cout << setw(outputWidth) << "Number";
    cout << setw(outputWidth) << "Radius";
    cout << setw(outputWidth) << "Color";
    cout << setw(outputWidth) << "Area";
    cout << setw(outputWidth) << "Volume\n";
    cout << setprecision(2) << fixed;
    for (int i = 0; i < count; i++)
    {
        cout << setw(outputWidth) << i;
        cout << setw(outputWidth) << spheres[i].getRadius();
        cout << setw(outputWidth) << spheres[i].getColor();
        cout << setw(outputWidth) << spheres[i].area();
        cout << setw(outputWidth) << spheres[i].volume();
        cout << "\n";
    }
    cout << "Total Number of Spheres = " << count << ".\n";
    cout << redSpheres << "% of Spheres are red.\n";
    cout << largeVolumes << " Spheres have a Volume over 215.\n";
    cout << "Average Area = " << averageArea << endl;
    return 0;
}
