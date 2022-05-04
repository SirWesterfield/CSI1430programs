//Author: Wesley Anastasi
//Assignment Title: Program 30
//Assignment Description: closest pair
//Due Date: 5/5/2022
//Date Created: 5/2/2022
//Date Last Modified: 5/4/2022

#include "ClosestPair.h"

Pair Closest_Pair( Point  P[], int n)
{
    Pair pair;
    int indexOne = 0; 
    int indexTwo = 1;
    double distance;
    bool defaultValue = false;
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < n; a++)
        {
            double temp = pow(pow(P[i].x-P[a].x,2)+pow(P[i].y-P[a].y,2),.5);
            if (temp > 0)
            {
                if (!defaultValue)
                {
                    defaultValue = true;
                    distance = temp;
                }
                else if (temp < distance)
                {
                    indexOne = i;
                    indexTwo = a;
                    distance = temp;
                }
                else if (temp == distance)
                {
                    if ((i+a)/2 < (indexOne+indexTwo)/2)
                    {
                        indexOne = i;
                        indexTwo = a;
                    }
                }
            }
        }
    }
    pair.indexPointOne = indexOne;
    pair.indexPointTwo = indexTwo;
    return pair;
}