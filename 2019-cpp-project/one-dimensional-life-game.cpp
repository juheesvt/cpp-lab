/*************************************************************************
* Problem:																 *
*			1���� ������ ����                                            *
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
void lifeGame(int *,int, int);

int main() {

	int t, n, time;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> time;
		int *cell = new int[n]();
		for (int i = 0; i < n; i++)
			cin >> cell[i];
		lifeGame(cell, time, n);
	}
}

void lifeGame(int * cell, int time, int size) {

	int * newCell = new int[size]();

	for (int t = 0; t < time; t++) {

		for (int c = 0; c < size; c++) {
			if (c == 0) { // ���� ���� ��
				if ((cell[c + 1] < 3 || cell[c + 1] > 7) && cell[c] != 0)
					newCell[c] = cell[c]-1;
				else if ((cell[c + 1] == 4 || cell[c + 1] == 5 || cell[c + 1] == 6 || cell[c + 1] == 7) && cell[c] < 9)
					newCell[c] = cell[c]+1;
				else
					newCell[c] = cell[c];
			}

			else if( c == size -1 ){ // ���� ������ ��
				if ((cell[c -1 ] < 3 || cell[c - 1] >7) && cell[c] != 0)
					newCell[c] = cell[c]-1;
				else if ((cell[c - 1] == 4 || cell[c - 1] == 5 || cell[c - 1] == 6 || cell[c - 1] == 7) && cell[c] < 9)
					newCell[c] = cell[c]+1;
				else
					newCell[c] = cell[c];
			}

			else { // ��� ��ġ���ִ� ��
				if (((cell[c + 1] + cell[c - 1] < 3) || (cell[c + 1] + cell[c - 1]) > 7) && cell[c] != 0)
					newCell[c] = cell[c]-1;
				else if (((cell[c + 1] + cell[c - 1] == 4) || (cell[c + 1] + cell[c - 1] == 5) || (cell[c + 1] + cell[c - 1] == 6) || (cell[c + 1] + cell[c - 1] == 7)) && cell[c] < 9)
					newCell[c] = cell[c]+1;
				else
					newCell[c] = cell[c];
			}

		}

		// cell �� ����ȭ �ϱ�
		for (int i = 0; i < size; i++)
			cell[i] = newCell[i];
	}
	// ���� �ϳ��ϳ��� ����ΰ� ��� ��< 

	for (int i = 0; i < size; i++) {
		if (i == size - 1)
			cout << newCell[i];
		else
			cout << newCell[i] << " ";
		
	}
	cout << endl;
}
