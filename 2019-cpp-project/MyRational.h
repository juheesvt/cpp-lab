#ifndef _MYRATIONAL_H_
#define _MYRATIONAL_H_
#include <iostream>
using namespace std;

class MyRational
{
private:

	// �м��� �׻� ���������� ��� �м��� ǥ�� 
	// �׻� _den > 0

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
	// ��� �м��� ������ ����
	MyRational reciprocal() const;

	// friend ���ϸ� ������ �̤� �ֿ� ?
	friend ostream &operator<< (ostream &outStream, const MyRational& r);
	friend istream &operator >> (istream &inStream, MyRational& r);

	// �м��� �м������� ��Ģ����


	// �м��� �������� ��Ģ����

	// ����������, ����������

	// �ݴ� ��ȣ

	// �м������� �м��� ������ ��Һ� 

	// ��
};

#endif

