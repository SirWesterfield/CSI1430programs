//Author: Wesley Anastasi
//Assignment Title: Program 18
//Assignment Description: Implement C-style string functions.
//Due Date: 3/25/2022
//Date Created: 3/23/2022
//Date Last Modified: 3/23/2022

#include "Cstring.h"

int Strlen(const char s1[])
{
    int count = 0;
    while (s1[count] != '\0')
    {
        count++;
    }
    return count;
}

void Strcpy (char s1[], const char s2[])
{
    for (int i = 0; i < Strlen(s2) || i < Strlen(s1); i++)
    {
        s1[i] = s2[i];
    }
}

int Strcmp(const char s1[], const char s2[])
{
    int output = 0;
    int size2 = Strlen(s2);
    int size = Strlen(s1);
    if (Strlen(s2) < Strlen(s1))
    { 
        size = Strlen(s2);
        size2 = Strlen(s1);
    }
    for(int i = 0; i < size; i++)
    {
        if (s2[i] > s1[i])
        {
            output = 1;
            i = size;
        }
        if (s1[i] > s2[i])
        {
            output = -1;
            i = size;
        }
    }
    if (output == 0)
    {
        if (size > size2)
        {
            output = 1;
        }
        if (size < size2)
        {
            output = -1;
        }
    }
    return output;
}

void Strcat(char s1[], const char s2[])
{
    int size = Strlen(s1);
    for (int i = 0; i <= Strlen(s2); i++)
    {
        s1[i+size] = s2[i]; 
    }
}

