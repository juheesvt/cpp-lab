#ifndef _MY_2MATRIX_H
#define _MY_2MATRIX_H

#include <iostream>
using namespace std;


class My2Matrix {
public :

	My2Matrix();
	My2Matrix(int, int, int, int);
	My2Matrix& operator+(const My2Matrix& );
	friend My2Matrix operator*(const int a, const My2Matrix&);
	My2Matrix& operator-();

	friend ostream& operator<<(ostream&, const My2Matrix&);

private:
	int a11, a12, a21, a22;
};

#endif
