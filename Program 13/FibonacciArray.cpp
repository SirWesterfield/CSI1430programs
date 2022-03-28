//Author: Wesley Anastasi
//Assignment Title: Program 13
//Assignment Description: find the nth term in a Fibonacci sequence
//Due Date: 3/2/2022
//Date Created: 3/2/2022
//Date Last Modified: 3/2/2022



//Data Abstraction: make array to store the sequence
//                  make ints for testcases
//                  store input in a vector

//Input: get test cases then loop to get input for num of test cases 

//Process: fill the array with the fibonnaci sequence

//Output: loop through num of test cases and output the index of the fib array
//        that was gotten from the vector

//Assumptions: user will only input ints
//             user wants those index's of the fibonnaci array
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Data Abstraction:
    long long fibArray[91];
    int testCases;
    int input;
    vector<int> fibIndex;

    //Input:
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        cin >> input;
        fibIndex.push_back(input);
    }

    //Process:

    fibArray[0] = 0;
    fibArray[1] = 1;
    for (int i = 2; i < 91; i++)
    {
        fibArray[i] = fibArray[i-1] + fibArray[i-2];
    }

    //Output:

    for (int i = 0; i < testCases; i++)
    {
        cout << "Case " << i+1 <<": Fib(" << 
        fibIndex.at(i) << ") = " << fibArray[fibIndex.at(i)] << endl;
    }

    return 0;
}