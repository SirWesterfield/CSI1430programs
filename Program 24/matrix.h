#ifndef MATRIX_H_
#define MATRIX_H_


#include <ostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;
const int WIDTH = 4;

class matrix_t{
private:
	int row, col;
	double data[MAX_SIZE][MAX_SIZE] = {{0}};

public:

    /*
    * description: constructs a matrix object with default values
                   for row and column being 0
    * return: matrix object
    * precondition: none
    * postcondition: a matrix object has been constructed
    *
    */

	matrix_t();

    /*
    * description: constructs a matrix object and sets the first integer to row,
                   and the second integer to col;
    * return: matrix object
    * precondition: two integers exist
    * postcondition: a matrix object has been created
    *
    */

	matrix_t(int, int);

    /*
    * description: sets row to the integer
    * return: void
    * precondition: a integer exists
    * postcondition: the row value has been changed
    *
    */

	void setRow(int);

    /*
    * description: sets col to the integer
    * return: void 
    * precondition: a integer exists
    * postcondition: the col value is changed
    *
    */

	void setCol(int);

    /*
    * description: sets a cell in the matrix to the value of the double
    * return: void
    * precondition: two integers and a double exist
    * postcondition: a cell in the matrix has been changed
    *
    */

	void setValue(int, int, double);

    /*
    * description: returns the value of row
    * return: integer
    * precondition: none
    * postcondition: the value of row is unchanged
    *
    */

	int getRow() const;

    /*
    * description: returns the value of col
    * return: integer
    * precondition: none
    * postcondition: the value of col is unchanged
    *
    */

	int getCol() const;

    /*
    * description: returns the value of a cell in the matrix
    * return: double
    * precondition: two integers exist
    * postcondition: the matrix is unchanged
    *
    */

	double getValue(int, int) const;

    /*
    * description: displays the contents of the matrix
    * return: void
    * precondition: some ostream exists
    * postcondition: the matrix is unchanged
    *
    */

	void display(ostream&) const;

    /*
    * description: returns the determinant of the matrix
    * return: double
    * precondition: none
    * postcondition: the matrix is unchanged
    *
    */

	double determinant() const;

    /*
    * description: adds two matrices together
    * return: matrix object
    * precondition: a matrix object exists
    * postcondition: the both matricies are unchanged
    *
    */

	matrix_t add(const matrix_t&) const;

    /*
    * description: subtracts two matrices
    * return: matrix object
    * precondition: a matrix object exists
    * postcondition: both matrices are unchanged
    *
    */

	matrix_t subtract(const matrix_t&) const;

    /*
    * description: multiplies two matricies together
    * return: matrix
    * precondition: the matrices can be multiplied together
    * postcondition: both matrices are ucnhanged
    *
    */

	matrix_t multiply(const matrix_t&) const;

    /*
    * description: adds two matrices together
    * return: matrix object
    * precondition: a matrix object exists
    * postcondition: the both matricies are unchanged
    *
    */

	matrix_t operator+(const matrix_t&) const;

    /*
    * description: subtracts two matrices
    * return: matrix object
    * precondition: a matrix object exists
    * postcondition: both matrices are unchanged
    *
    */

	matrix_t operator-(const matrix_t&) const;

    /*
    * description: multiplies two matricies together
    * return: matrix
    * precondition: the matrices can be multiplied together
    * postcondition: both matrices are ucnhanged
    *
    */

	matrix_t operator*(const matrix_t&) const;

    /*
    * description: returns data at n
    * return: double
    * precondition: a integer exists
    * postcondition: none
    *
    */

	double*  operator[](int n);

};

#endif /* MATRIX_H_ */