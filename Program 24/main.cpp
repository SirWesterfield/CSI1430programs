#include <iostream>
#include "matrix.h"
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    matrix_t matrix1(2,3);
    matrix_t matrix2(3,2);
    matrix_t matrix3;
    //matrix 1
    matrix1.setValue(0,0,1);
    matrix1.setValue(0,1,2);
    matrix1.setValue(0,2,3);
    matrix1.setValue(1,0,4);
    matrix1.setValue(1,1,5);
    matrix1.setValue(1,2,6);
    // matrix1.setValue(2,0,0);
    // matrix1.setValue(2,1,0);
    // matrix1.setValue(2,2,1);
    //matrix 2
    matrix2.setValue(0,0,7);
    matrix2.setValue(0,1,8);
    // matrix2.setValue(0,2,1);
    matrix2.setValue(1,0,9);
    matrix2.setValue(1,1,10);
    // matrix2.setValue(1,2,0);
    matrix2.setValue(2,0,11);
    matrix2.setValue(2,1,12);
    // matrix2.setValue(2,2,2);

    matrix1.display(cout);
    matrix2.display(cout);
    matrix3 = matrix1.multiply(matrix2);
    matrix3.display(cout);
    return 0;
}