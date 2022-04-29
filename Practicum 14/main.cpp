//Author: Wesley Anastasi
//Assignment Title: Pract 14
//Assignment Description: cone class
//Due Date: 4/29/2022
//Date Created: 4/29/2022
//Date Last Modified: 4/29/2022



/*
Data Abstraction: need: int for num of cones
				  array to store cones
                  double for average volume
                  double for average SA
                  int smallest volume index
                  int largest volume index
                  double smallest volume
                  double largest volume
Input: open file, if not open loop till opened
Process: loop through contents of file,
		 find index of smallest and largest volume
         fill array of cones
         get num of cones
Output: output collected data properly formatted
Assumptions: data file is properly formatted
*/
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "cone.h"

using namespace std;

int main()
{
  //Data Abstraction:
  ifstream inputFile;
  ofstream outputFile;
  double volume = 0;
  double SA = 0;
  int smallestIndex;
  int largestIndex;
  cone cones[1001];
  string input;
  double height, radius;
  string color;
  int coneCount = 0;

  //Input:
  
  do
  {
    cout << "Enter name of data file: ";
    cin >> input;
    cout << input << endl;
    inputFile.open(input);
    if (!inputFile)
    {
      cout << "Error: File Failed to Open." << endl;
    }
  }while(!inputFile);
  

  //Process:
  
  getline(inputFile, input);
  getline(inputFile, input);
  getline(inputFile, input);
  
  while (getline(inputFile, input, ','))
  {
    height = stod(input);
    getline(inputFile, input, ',');
    radius = stod(input);
    getline(inputFile, color);
    cone temp(height, radius, color);
    if (coneCount == 0)
    {
      smallestIndex = 0;
      largestIndex = 0;
    }
    else
    {
      if (cones[smallestIndex].volume() > temp.volume())
      {
        smallestIndex = coneCount;
      }
      else if (cones[largestIndex].volume() < temp.volume())
      {
        largestIndex = coneCount;
      }
    }
    volume+=temp.volume();
    SA+=temp.surfaceArea();
    cones[coneCount] = temp;
    coneCount++;
  }

  inputFile.close();
  
  volume /= coneCount;
  SA /= coneCount;
  
  //Output:

  outputFile.open("coneReport.txt");

  outputFile << fixed << setprecision(2);
  outputFile << "Total Count = " << coneCount << endl;
  outputFile << "Average Volume = " << volume << endl;
  outputFile << "Average Area = " << SA << endl;
  outputFile << endl;
  outputFile << setw(22) << "Color";
  outputFile << setw(22) << "Height";
  outputFile << setw(22) << "Radius" << endl;
  outputFile << "Min Cone       = ";
  outputFile << setw(20) << left << cones[smallestIndex].getColor();
  outputFile << setw(20) << left << cones[smallestIndex].getHeight();
  outputFile << setw(20) << left << cones[smallestIndex].getRadius();
  outputFile << endl;
  outputFile << "Max Cone       = ";
  outputFile << setw(20) << left << cones[largestIndex].getColor();
  outputFile << setw(20) << left << cones[largestIndex].getHeight();
  outputFile << setw(20) << left << cones[largestIndex].getRadius();
  outputFile << endl;

  outputFile.close();

  inputFile.open("coneReport.txt");

  while (getline(inputFile, input))
  {
      cout << input << endl;
  }

  return 0;
}