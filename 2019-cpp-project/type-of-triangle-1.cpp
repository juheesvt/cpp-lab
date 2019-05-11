/*************************************************************************
* Problem:																 *
*			�ﰢ���� ���� (1)                                            *
*																		 *
*************************************************************************/
/*************************************************************************
*																		 *
*		���δ��б� ����Ʈ�������մ��� ����Ʈ�����к� 2 �� ��			 *
*														20181570  ������ *
*																		 *
*************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;
int triangleDiscrimination(int, int, int);
void sort(int*, int*, int*);

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << triangleDiscrimination(a, b, c) << endl;
	}
}

int triangleDiscrimination(int a, int b, int c) {
	sort(&a, &b, &c);

	if (a >= b + c)
		return 0;

	else if (a == b && b == c)
		return 1;

	else if (a*a == b * b + c * c)
		return 2;

	else if (a == b || b == c || c == a)
		return 3;
	else
		return 4;
}

void sort(int *A, int *B, int * C) {
	int temp;
	if (*A < *B) {
		temp = *A;
		*A = *B;
		*B = temp;
	}
	if (*A < *C) {
		temp = *A;
		*A = *C;
		*C = temp;
	}
	if (*B < *C) {
		temp = *B;
		*B = *C;
		*C = temp;
	}
}