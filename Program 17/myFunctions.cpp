//Author: Wesley Anastasi
//Assignment Title: Program 17
//Assignment Description: make a functions file
//Due Date: 3/23/2022
//Date Created: 3/22/2022
//Date Last Modified: 3/22/2022

#include "myFunctions.h"

int max(int a, int b){

    if(a < b){
        a = b;
    }
    return a;
}

double max(double a, double b){

    if(a < b){
        a = b;
    }
    return a;
}

int max(int m[], int size)
{
    int tempMax = m[0];
    for (int i = 0; i < size; i++)
    {
        if (tempMax < m[i])
        {
            tempMax = m[i];
        }
    }
    return tempMax;
}

double max(double m[], int size)
{
    double tempMax = m[0];
    for (int i = 0; i < size; i++)
    {
        if (tempMax < m[i])
        {
            tempMax = m[i];
        }
    }
    return tempMax;
}

int min(int a, int b){
    if(a > b){
        a = b;
    }
    return a;
}

double min(double a, double b){
    if(a > b){
        a = b;
    }
    return a;
}

int min(int m[], int size)
{
    int tempMin = m[0];
    for (int i = 0; i < size; i++)
    {
        if (tempMin > m[i])
        {
            tempMin = m[i];
        }
    }
    return tempMin;
}

double min(double m[], int size)
{
    double tempMin = m[0];
    for (int i = 0; i < size; i++)
    {
        if (tempMin > m[i])
        {
            tempMin = m[i];
        }
    }
    return tempMin;
}

int absoluteValue(int value)
{
    if (value < 0)
    {
        value *= -1;
    }
    return value;
}

double absoluteValue(double value)
{
    if (value < 0)
    {
        value *= -1;
    }
    return value;
}

double factorial(int num)
{
    double fact = 1;
    while (num > 0)
    {
        fact *= num;
        num--;
    }
    return fact;
}

double combination(int M, int N)
{
    double combo;
    combo = factorial(M) / (factorial(N)*factorial(M-N));
    return combo;
}

double permutation(int M, int N)
{
    double permu;
    permu = factorial(M) / (factorial(M-N));
    return permu;
}

void printToTheScreen(){
   cout << "Hello World!" << endl;
   return;
}
