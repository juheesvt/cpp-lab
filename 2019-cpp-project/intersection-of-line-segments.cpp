/*************************************************************************
* Problem:																 *
*			����/���� ������ ����                                        *
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
int intersection(int, int, int, int, int ,int ,int ,int);
void swap(int*, int*, int*, int*, int*, int*, int*, int*);

int main() {
	int t;
	int x1, y1, x2, y2, x3, y3, x4, y4;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> x3 >> y3 >> x4 >> y4;
		cout << intersection(x1, y1, x2, y2, x3, y3, x4, y4) << endl;
	}
}

int intersection(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {

	// y�� ���� ������ ���� ������ ��, �׸��� ũ�� �� ����
	swap(&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

	if (y3 <= y2 && y3 >= y1) { // y���� �ȿ� ����� ��
		if (x1 > x3 && x1 < x4) {
			if (y1 != y3 && y1 != y4 && y2 != y3 && y2 != y4)
				return 1;
			return 2;
		}
		
		else if (x1 == x3 || x1 == x4)
			return 2;
		return 0;
	}
	return 0;
}

void swap(int *x1, int* y1, int* x2, int* y2, int* x3, int* y3, int* x4, int* y4) {
	
	int temp;

	if (*x1 != *x2) {
		temp = *x1;
		*x1 = *x3;
		*x3 = temp;

		temp = *x2;
		*x2 = *x4;
		*x4 = temp;

		temp = *y1;
		*y1 = *y3;
		*y3 = temp;

		temp = *y2;
		*y2 = *y4;
		*y4 = temp;
	}

	if (*y1 > *y2) {
		temp = *y1;
		*y1 = *y2;
		*y2 = temp;
	}

	if (*x3 > *x4) {
		temp = *x3;
		*x3 = *x4;
		*x4 = temp;
	}


}