/*************************************************************************
* Problem:																 *
*			1�� 1���� ���� ����ϱ�                                        *
*																		 *
*************************************************************************/
/*************************************************************************
*																		 *
*		���δ��б� ����Ʈ�������մ��� ����Ʈ�����к� 2 �� ��			 *
*														20181570  ������ *
*																		 *
*************************************************************************/
#include <iostream>
using namespace std;

int dayOfTheWeekCalculate(int);

int main() {
	int t, year;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> year;
		cout << dayOfTheWeekCalculate(year) << endl;
	}
	return 0;
}

int dayOfTheWeekCalculate(int year) {

	int day = 0;
	for (int i = 1582; i < year; i++) 
		day += ((i % 4 == 0 && i  % 100 != 0) || i % 400 == 0) ? 366 : 365;
	
	switch (day % 7) {
	case 0 :
		return 5;
	case 1:
		return 6;
	case 2:
		return 0;
	case 3:
		return 1;
	case 4:
		return 2;
	case 5:
		return 3;
	case 6:
		return 4;
	}
}