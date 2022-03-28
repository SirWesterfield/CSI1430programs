//Author: Wesley Anastasi
//Assignment Title: Program 19
//Assignment Description: Array processing
//Due Date: 3/30/2022
//Date Created: 3/28/2022
//Date Last Modified: 3/28/2022

#include "arrayCount.h"


int arrayCount(int a[], int s, int v)
{
    int frequency = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] == v)
        {
            frequency++;
        }
    }
    return frequency;
}

int arrayCount(double a[], int s, double v)
{
    int frequency = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] == v)
        {
            frequency++;
        }
    }
    return frequency;
}

int arrayCount(string a[], int s, string v)
{
    int frequency = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] == v)
        {
            frequency++;
        }
    }
    return frequency;
}

int arrayCount(char a[], char v)
{
    int frequency = 0;
    int cstringSize = strlen(a);
    for (int i = 0; i < cstringSize; i++)
    {
        if (a[i] == v)
        {
            frequency++;
        }
    }
    return frequency;
}

int arrayCount(vector<int> a, int v)
{
    int frequency = 0;
    int vectorSize = a.size();
    for (int i = 0; i < vectorSize; i++)
    {
        if (a.at(i) == v)
        {
            frequency++;
        }
    }
    return frequency;
}

int arrayCount(vector<string> a, string v)
{
    int frequency = 0;
    int vectorSize = a.size();
    for (int i = 0; i < vectorSize; i++)
    {
        if (a.at(i) == v)
        {
            frequency++;
        }
    }
    return frequency;
}

int arrayCount(vector<double> a, double v)
{
    int frequency = 0;
    int vectorSize = a.size();
    for (int i = 0; i < vectorSize; i++)
    {
        if (a.at(i) == v)
        {
            frequency++;
        }
    }
    return frequency;
}

int arrayCount(vector<char> a, char v)
{
    int frequency = 0;
    int vectorSize = a.size();
    for (int i = 0; i < vectorSize; i++)
    {
        if (a.at(i) == v)
        {
            frequency++;
        }
    }
    return frequency;
}