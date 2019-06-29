#include "My2Matrix.h"

My2Matrix::My2Matrix():a11(0), a12(0),a21(0), a22(0) {

}
My2Matrix::My2Matrix(int a, int b, int c, int d):a11(a), a12(b),a21(c), a22(d)
{

}

My2Matrix& My2Matrix::operator+(const My2Matrix& m) {
	this->a11 += m.a11;
	this->a12 += m.a12;
	this->a21 += m.a21;
	this->a22 += m.a22;
	return *this;

}
My2Matrix operator*(const int a, const My2Matrix& n) {
	My2Matrix m(0,0,0,0);

	m.a11 = n.a11*a;
	m.a12 = n.a12*a;
	m.a21 = n.a21*a;
	m.a22 = n.a22*a;

	return m;
;

}
My2Matrix& My2Matrix::operator-() {
	this->a11 = -this->a11;
	this->a12 = -this->a12;
	this->a21 = -this->a21;
	this->a22 = -this->a22;
	return *this;

}

ostream& operator<<(ostream& os, const My2Matrix& m) {
	os << m.a11 << " " << m.a12 << endl;
	os << m.a21 << " " << m.a22 << endl;

	return os;
}