//Author: Wesley Anastasi
//Assignment Title: 
//Assignment Description: 
//Due Date: 
//Date Created: 
//Date Last Modified: 

#include "matrix.h"

matrix_t::matrix_t()
{
    row = 0;
    col = 0;
}
matrix_t::matrix_t(int row1, int column)
{
    row = row1;
    col = column;
}

void matrix_t::setRow(int n)
{

}

void matrix_t::setCol(int)
{

}

void matrix_t::setValue(int n1, int n2, double d)
{

}

int matrix_t::getRow() const
{
    return -1;
}

int matrix_t::getCol() const
{
    return -1;
}

double matrix_t::getValue(int n1, int n2) const
{
    return -1.0;
}

void matrix_t::display(ostream& out) const
{
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            out << data[i][a] << " ";
        }
        out << endl;
    }
    out << row << "x" << col << endl;
}

double matrix_t::determinant() const{
   double det = 0;
   int subi, subj;
   matrix_t submatrix(row-1,col-1);
   if (row == 2)
      return ((data[0][0] * data[1][1]) - (data[1][0] * data[0][1]));
   else {
	  for (int n = 0; n < row; n++) {
		 subi = 0;
		 for (int i = 1; i < row; i++) {
			subj = 0;
			for (int j = 0; j < col; j++) {
			   if (j != n){
			      submatrix[subi][subj] = data[i][j];
			      subj++;
			   }
			}
			subi++;
		 }
		 det += (pow(-1, n) * data[0][n] * submatrix.determinant());
	  }
   }
   return det;
}

matrix_t matrix_t::add(const matrix_t& m) const
{
    matrix_t matrix;
    return matrix;
}

matrix_t matrix_t::subtract(const matrix_t& m) const
{
    matrix_t matrix;
    return matrix;
}

matrix_t matrix_t::multiply(const matrix_t& m) const
{
    matrix_t matrix;
    return matrix;
}

matrix_t matrix_t::operator+(const matrix_t& m) const
{
    matrix_t matrix;
    return matrix;
}

matrix_t matrix_t::operator-(const matrix_t& m) const
{
    matrix_t matrix;
    return matrix;
}

matrix_t matrix_t::operator*(const matrix_t& m) const
{
    matrix_t matrix;
    return matrix;
}

double*  matrix_t::operator[](int n)
{
    return data[n];
}