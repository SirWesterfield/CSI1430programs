//Author: Wesley Anastasi
//Assignment Title: Program 23
//Assignment Description: Matrix class
//Due Date: 4/13/2022
//Date Created: 4/11/2022
//Date Last Modified: 4/12/2022

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
    row = n;
}

void matrix_t::setCol(int n)
{
    col = n;
}

void matrix_t::setValue(int n1, int n2, double d)
{
    data[n1][n2] = d;
}

int matrix_t::getRow() const
{
    return row;
}

int matrix_t::getCol() const
{
    return col;
}

double matrix_t::getValue(int n1, int n2) const
{
    return data[n1][n2];
}

void matrix_t::display(ostream& out) const
{
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            out << setw(5);
            out << data[i][a];
        }
        out << endl;
    }
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
    matrix.setCol(col);
    matrix.setRow(row);
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            matrix.setValue(i,a,data[i][a] + m.getValue(i,a));
        }
    }
    return matrix;
}

matrix_t matrix_t::subtract(const matrix_t& m) const
{
    matrix_t matrix;
    matrix.setCol(col);
    matrix.setRow(row);
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            matrix.setValue(i,a,data[i][a] - m.getValue(i,a));
        }
    }
    return matrix;
}

matrix_t matrix_t::multiply(const matrix_t& m) const
{
    matrix_t matrix;
    double value;
    matrix.setRow(row);
    matrix.setCol(m.getCol());
    for (int i = 0; i < matrix.getRow(); i++)
    {
        for (int a = 0; a < matrix.getCol(); a++)
        {
            value = 0;
            for (int b = 0; b < col; b++)
            {
                value += getValue(i,b) * m.getValue(b,a);
            }
            matrix.setValue(i,a,value);
        }
    }
    return matrix;
}

matrix_t matrix_t::operator+(const matrix_t& m) const
{
    matrix_t matrix;
    matrix.setCol(col);
    matrix.setRow(row);
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            matrix.setValue(i,a,data[i][a] + m.getValue(i,a));
        }
    }
    return matrix;
}

matrix_t matrix_t::operator-(const matrix_t& m) const
{
    matrix_t matrix;
    matrix.setCol(col);
    matrix.setRow(row);
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            matrix.setValue(i,a,data[i][a] - m.getValue(i,a));
        }
    }
    return matrix;
}

matrix_t matrix_t::operator*(const matrix_t& m) const
{
    matrix_t matrix;
    double value;
    matrix.setRow(row);
    matrix.setCol(m.getCol());
    for (int i = 0; i < matrix.getRow(); i++)
    {
        for (int a = 0; a < matrix.getCol(); a++)
        {
            value = 0;
            for (int b = 0; b < col; b++)
            {
                value += getValue(i,b) * m.getValue(b,a);
            }
            matrix.setValue(i,a,value);
        }
    }
    return matrix;
}

double*  matrix_t::operator[](int n)
{
    return data[n];
}