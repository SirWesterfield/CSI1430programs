//Author: Wesley Anastasi
//Assignment Title: Program 14
//Assignment Description: Array Backwards
//Due Date: 3/4/2022
//Date Created: 3/3/2022
//Date Last Modified: 3/3/2022



/*Data Abstraction: need variables for size, min, max, and duplicate count
                    need normal array, reverse array, and duplicate array
                    need input size, and size of duplicate array

Input: get the num of ints, and then store all the ints in the normal array
       then output the normal array

Process: run through normal array and store values in reverse array
         update min max and sum
         for each int in the normal array, run through the duplicate array

Output: output reverse array, min, max, sum, and dup count

Assumptions: user will only input ints
*/
#include <iostream>

using namespace std;

int main()
{
    //Data Abstraction:
    int size, min, max;
    int dupCount = 0;
    int sum = 0;
    int count = 0;
    int array[25];
    int reverseArray[25];
    int dupArray[25];
    int dupdupArray[25];
    int dupSize = 1;
    int dupdupSize = 0;
    bool isDup = false;
    bool isDupDup = false;

    //Input:

    cout << "Input the number of elements to store in the array: ";
    cin >> size;
    cout << size << endl;
    cout << endl;

    cout << "Input "<< size << " integers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "integer - " << i << ": ";
        cin >> array[i];
        cout << array[i] << endl;
    }
    cout << endl;

    cout << "The values stored into the array are :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << endl;

    //Process:

    for (int i = size-1; i >= 0; i--)
    {
        reverseArray[count] = array[i];
        if (count == 0)
        {
            min = max = array[i];
            dupArray[0] = array[i];
        }
        for (int a = 0; a < dupSize; a++)
        {
            if (array[i] == dupArray[a] && !isDup && count > 0)
            {
                isDupDup = false;
                for (int b = 0; b < dupdupSize; b++)
                {
                    if (dupdupArray[b] == array[i])
                    {
                        isDupDup = true;
                    }
                }
                if (!isDupDup)
                {
                    dupCount++;
                    dupdupArray[dupdupSize] = array[i];
                    dupdupSize++;
                    isDup = true;
                    isDupDup = false;
                }
            }
        }
        if (!isDup)
        {
            dupArray[dupSize] = array[i];
            dupSize++;
        }
        else
        {
            isDup = false;
        }
        if (min > array[i])
        {
            min = array[i];
        }
        if (max < array[i])
        {
            max = array[i];
        }
        sum+=array[i];
        count++;
    }


    //Output:

    cout << "The values stored into the array in reverse are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << reverseArray[i] << " ";
    }
    cout << endl << endl;

    cout << "The sum of all elements of the array is " << sum << endl;
    cout << "The total number of duplicate elements in the array is " << 
    dupCount << endl;
    cout << "The maximum and minimum element in the array are " << 
    max << ", " << min << endl;
    

    return 0;
}
