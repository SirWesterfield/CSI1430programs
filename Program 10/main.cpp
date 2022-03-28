//Author: Wesley Anastasi
//Assignment Title: Program 10
//Assignment Description: encrypt/decrypt file
//Due Date: 2/18/2022
//Date Created: 2/18/2022
//Date Last Modified: 2/18/2022

//Data Abstraction: setup the input and output files,
//                  make strings for input
//                  string for line of input text
//                  bools for entering correct/incorrect data
//                  ints for the vowel counts
//
//Input: loop until received valid file name and command
//
//Process: if encrypting, put each line of data into string,
//         loop through that line and output each character
//         to the output file after moving forward by 3;
//         if decrypting same but - 3 instead of plus
//         also output each character to the console
//         check each character to see if it is a vowel
//         and increment the appropriate counter
//
//Output:  output the vowel counts
//
//Assumptions: user has a file they want decrypted or encrypted
//             user knows the correct commands
//             user is not using any special characters


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //Data Abstraction:
    ifstream inputFile;
    ofstream outFile;
    string fileName;
    string command;
    string text;
    bool encrypt = false;
    bool runProgram = true;
    int A = 0;
    int E = 0;
    int I = 0;
    int O = 0;
    int U = 0;
    int Y = 0;

    //Input:


    cout << "Enter File Name: ";
    cin >> fileName;
    cout << fileName << endl;
    cout << "Enter encrypt or decrypt: ";
    cin >> command;
    cout << command << endl;
    if (command == "encrypt")
    {
        encrypt = true;
        runProgram = true;
    }
    else if (command == "decrypt")
    {
        encrypt = false;
        runProgram = true;
    }
    else
    {
        cout << "Error: Bad Command." << endl;
        runProgram = false;
    }
    inputFile.open(fileName);
    if(!inputFile)
    {
        cout << "Error: File did NOT open." << endl;
        runProgram = false;
    }
    else
    {
        runProgram = true;
    }


    cout << endl;

    //Process:
    if (runProgram)
    {
        outFile.open("message");
        if (!encrypt)
        {
            while (getline(inputFile, text))
            {
                int length = text.size();
                for (int b = 0; b < length; b++)
                {
                    if (text[b] == 'A' || text[b] == 'a')
                    {
                        A++;
                    }
                    if (text[b] == 'E' || text[b] == 'e')
                    {
                        E++;
                    }
                    if (text[b] == 'I' || text[b] == 'i')
                    {
                        I++;
                    }
                    if (text[b] == 'O' || text[b] == 'o')
                    {
                        O++;
                    }
                    if (text[b] == 'U' || text[b] == 'u')
                    {
                        U++;
                    }
                    if (text[b] == 'Y' || text[b] == 'y')
                    {
                        Y++;
                    }
                    if (text[b] == '\n')
                    {
                        outFile << endl;
                        cout << endl;
                    }
                    else
                    {
                        if (int(text[b] -3) < 32)
                        {
                            //outFile<<static_cast<char>
                            //(127-(32-(int(text[b])-3)));
                            outFile << text[b];
                            //cout<<static_cast<char>
                            //(127-(32-(int(text[b])-3)));
                            cout << text[b];
                        }
                        else
                        {
                            outFile << static_cast<char>(text[b]-3);
                            cout << static_cast<char>(text[b]-3);
                            //cout << text[b];
                        }
                    }

                }
                outFile << endl;
                cout << endl;
            }
        }
        if (encrypt)
        {
            while (getline(inputFile, text))
            {
                int length = text.size();
                for (int i = 0; i < length; i++)
                {
                    if (text[i] == 'A' || text[i] == 'a')
                    {
                        A++;
                    }
                    if (text[i] == 'E' || text[i] == 'e')
                    {
                        E++;
                    }
                    if (text[i] == 'I' || text[i] == 'i')
                    {
                        I++;
                    }
                    if (text[i] == 'O' || text[i] == 'o')
                    {
                        O++;
                    }
                    if (text[i] == 'U' || text[i] == 'u')
                    {
                        U++;
                    }
                    if (text[i] == 'Y' || text[i] == 'y')
                    {
                        Y++;
                    }
                    if (int(text[i] + 3) > 126)
                    {
                        outFile<<static_cast<char>(31+(126-(int(text[i])+3)));
                        cout<<static_cast<char>(31+(126-(int(text[i])+3)));
                    }
                    else
                    {
                        outFile << static_cast<char>(text[i]+3);
                        cout << static_cast<char>(text[i]+3);
                    }
                }
                outFile << endl;
                cout << endl;
            }
        }
        outFile.close();
        inputFile.close();
    }



    //Output:
    if (runProgram)
    {
        cout << endl;
        cout << "Letter Frequency" << endl;
        cout << "   A    " << A << endl;
        cout << "   E    " << E << endl;
        cout << "   I    " << I << endl;
        cout << "   O    " << O << endl;
        cout << "   U    " << U << endl;
        cout << "   Y    " << Y << endl;
    }



    return 0;
}
