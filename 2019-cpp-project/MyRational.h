#ifndef _MYRATIONAL_H_
#define _MYRATIONAL_H_
#include <iostream>
using namespace std;

class MyRational
{
private:

	// 분수는 항상 내부적으로 기약 분수로 표현 
	// 항상 _den > 0

	long _num;
	long _den;

	long gcd(long m, long n);
	void reduce();
public:

	// constructors
	MyRational(long num = 0, long den =1);
	MyRational(const MyRational & rat);
	~MyRational();

	// Accessor function
	long getNumerator() const;
	long getDenominator() const; 

	// member function
	// 기약 분수의 역수를 리턴
	MyRational reciprocal() const;

	// friend 안하면 에러남 ㅜㅜ 왜요 ?
	friend ostream &operator<< (ostream &outStream, const MyRational& r);
	friend istream &operator >> (istream &inStream, MyRational& r);

	// 분수와 분수끼리의 사칙연산


	// 분수와 정수와의 사칙연산

	// 후위연산자, 전위연산자

	// 반대 부호

	// 분수끼리나 분수와 정수의 대소비교 

	// 분
};

#endif

