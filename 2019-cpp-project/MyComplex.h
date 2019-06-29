#ifndef __MYCOMPLEX_H__
#define __MYCOMPLEX_H__
#include <iostream>
using namespace std;

class myComplex {
public:
	// constructor
	myComplex(int real = 0, int imag = 0);
	// copy constructor
	myComplex(const myComplex& number);

	// accessor function ( getter )
	int getRealPart() const;
	int getImaginaryPart() const;

	// mutator function ( setter )
	void setRealPart(int real);
	void setImaginaryPart(int imag);
	void set(int real, int imag);

	// overloaded binary operators
	myComplex operator +(const myComplex& number) const;
	myComplex operator +(int value) const;


	myComplex operator -(const myComplex& number) const;
	myComplex operator -(int value) const;


	// overloaded assignment operators
	myComplex& operator =(const myComplex& number);
	myComplex& operator +=(const myComplex& number);
	myComplex& operator -=(const myComplex& number);
	myComplex& operator *=(const myComplex& number);
	myComplex& operator =(int value);

	// overloading relational operators
	bool operator ==(const myComplex& number) const;
	bool operator >(const myComplex& number) const;

	// overloaded unary operators
	myComplex operator -();

private:
	int realPart;
	int imaginaryPart;
	int norm() const;
};


#endif