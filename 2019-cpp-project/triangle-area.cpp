/*************************************************************************
* Problem:																 *
*			�ﰢ�� �������ϱ�                                            *
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
void  calculateArea(int, int, int, int, int, int);

int main() {

	int t;
	cin >> t;
	int ax, ay, bx, by, cx, cy;
	for (int i = 0; i < t; i++) {
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		calculateArea(ax, ay, bx, by, cx, cy);
	}
	return 0;
}

void calculateArea(int ax, int ay, int bx, int by, int cx, int cy) {

	float area = 0.5 * ((bx - ax)*(cy - ay) - (cx - ax)*(by - ay));
	
	if (area ==0) 
		cout << 0 << " " << 0 << endl;
	else if (area < 0)
		cout << -area * 2 << " " << -1 << endl;
	else
		cout << area * 2 << " " << 1 << endl;	
}