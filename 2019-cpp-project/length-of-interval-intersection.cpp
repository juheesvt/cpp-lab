
/*************************************************************************
* Problem:																 *
*			�� ������ ������ ����                                        *
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
int lengthOfIntervalIntersection(int a, int b, int c, int d);
void swap(int*, int*);

int main(void)
{
	int t;
	int a, b, c, d;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c >> d;
		cout << lengthOfIntervalIntersection(a, b, c, d) << endl;
	}
	return 0;
}
int lengthOfIntervalIntersection(int a, int b, int c, int d)
{
	if (c < a) {
		swap(&a, &c);
		swap(&b, &d);
	}

	if (c <= b) {
		if (b <= d)
			return b - c;
		return d - c;
	}
	return -1;
}
void swap(int *n, int *m) {
	int temp = *n;
	*n = *m;
	*m = temp;
}