/*************************************************************************
* Problem:																 *
*			�ٰ��� �������ϱ�                                            *
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
void  calculateArea(int *, int);

int main() {


	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int * poly = new int[2 * n];
		for (int i = 0; i < 2 * n; i++)
			cin >> poly[i];
		calculateArea(poly, 2*n);
	}
	return 0;
}

void  calculateArea(int * poly, int size) {

	int area = 0;

	for (int i = 0; i < size - 3; i+=2) 
		area += (poly[i] + poly[i + 2])*(poly[i + 3] - poly[i + 1]);
	area += (poly[size - 2] + poly[0])*(poly[1] - poly[size - 1]);

	if (area < 0)
		cout << -area << " " << -1 << endl;
	else if (area > 0)
		cout << area << " " << 1 << endl;
	else
		cout << 0 << " " << 0 << endl;

}