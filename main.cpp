//============================================================================
// Name        : programmingAssignment.cpp
// Author      : Abdelrahman Ibrahim
// Version     :
// Copyright   : Matrix operations
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <valarray>
//#include <cassert>

using namespace std;

// A structure to store a matrix
struct matrix
{
    valarray<int> data;       //valarray that will simulate matrix
    int row, col;
};

// Already implemented
void createMatrix (int row, int col, int num[], matrix& mat);

// Student #2 with the middle ID (e.g., 20170082)
// The last operator >> takes an istream and a matrix and return the
// the same istream so it is possible to cascade input like
// cin >> matrix1 >> matrix2 << endl;
matrix operator+= (matrix& mat1, matrix mat2); // mat1 changes & return
// new matrix with the sum
matrix operator-= (matrix& mat1, matrix mat2); // mat1 changes + return new
// matrix with difference
matrix operator+= (matrix& mat, int scalar);   // change mat & return new matrix
matrix operator-= (matrix& mat, int scalar);   // change mat & return new matrix
void   operator++ (matrix& mat);   	// Add 1 to each element ++mat
void   operator-- (matrix& mat);    	// Sub 1 from each element --mat
istream& operator>> (istream& in, matrix& mat);
// Input matrix like this (dim 2 x 3) cin >> 2 3 4 6 8 9 12 123
// and return istream to allow cascading input
//__________________________________________

int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {13,233,3,4,5,6};
    int data3 [] = {10,100,10,100,10,100,10,100};

    matrix mat1, mat2, mat3;
    createMatrix (4, 2, data1, mat1);
    createMatrix (2, 3, data2, mat2);
    createMatrix (4, 2, data3, mat3);

    /* The next code will not work until you write the functions
      cout << mat1 << endl;
      cout << mat2 << endl;
      cout << mat3 << endl;

      cout << (mat1 + mat3) << endl << endl;
      cout << (mat3 + mat3) << endl << endl;

      ++mat1;
      cout << mat1 << endl;

      mat1+= mat3 += mat3;
      cout << mat1 << endl;
      cout << mat2 << endl;
      cout << mat3 << endl;

    */

    return 0;
}

//__________________________________________
// Takes an array of data and stores in matrix according
// to rows and columns
void createMatrix (int row, int col, int num[], matrix& mat)
{
    mat.row = row;
    mat.col = col;
    mat.data.resize (row * col);
    for (int i = 0; i < row * col; i++)
        mat.data [i] = num [i];
}

matrix operator+= (matrix& mat1, matrix mat2)
{

    for (int i = 0; i < mat1.row * mat1.col; i++)
        mat1.data [i] += mat2.data [i];

    return mat1 ;
}

matrix operator-= (matrix& mat1, matrix mat2)
{

    for (int i = 0; i < mat1.row * mat1.col; i++)
        mat1.data [i] += mat2.data [i];

    return mat1 ;
}

matrix operator+= (matrix& mat, int scalar)
{
    for (int i = 0; i < mat.row * mat.col; i++)
        mat.data [i] += scalar;

    return mat ;
}

matrix operator-= (matrix& mat, int scalar)
{
    for (int i = 0; i < mat.row * mat.col; i++)
        mat.data [i] -= scalar;

    return mat ;

}
void   operator++ (matrix& mat)
{

    for (int i = 0; i < mat.row * mat.col; i++)
        mat.data [i] ++;

}

void   operator-- (matrix& mat)
{

    for (int i = 0; i < mat.row * mat.col; i++)
        mat.data [i] --;

}

