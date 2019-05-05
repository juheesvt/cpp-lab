/*************************************************************************
* Problem:																 *
*			1차원 라이프 게임                                            *
*																		 *
*************************************************************************/
/*************************************************************************
*																		 *
*		국민대학교 소프트웨어융합대학 소프트웨어학부 2 학 년			 *
*														20181570  강주희 *
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
			if (c == 0) { // 가장 왼쪽 셀
				if ((cell[c + 1] < 3 || cell[c + 1] > 7) && cell[c] != 0)
					newCell[c] = cell[c]-1;
				else if ((cell[c + 1] == 4 || cell[c + 1] == 5 || cell[c + 1] == 6 || cell[c + 1] == 7) && cell[c] < 9)
					newCell[c] = cell[c]+1;
				else
					newCell[c] = cell[c];
			}

			else if( c == size -1 ){ // 가장 오른쪽 셀
				if ((cell[c -1 ] < 3 || cell[c - 1] >7) && cell[c] != 0)
					newCell[c] = cell[c]-1;
				else if ((cell[c - 1] == 4 || cell[c - 1] == 5 || cell[c - 1] == 6 || cell[c - 1] == 7) && cell[c] < 9)
					newCell[c] = cell[c]+1;
				else
					newCell[c] = cell[c];
			}

			else { // 가운데 위치해있는 셀
				if (((cell[c + 1] + cell[c - 1] < 3) || (cell[c + 1] + cell[c - 1]) > 7) && cell[c] != 0)
					newCell[c] = cell[c]-1;
				else if (((cell[c + 1] + cell[c - 1] == 4) || (cell[c + 1] + cell[c - 1] == 5) || (cell[c + 1] + cell[c - 1] == 6) || (cell[c + 1] + cell[c - 1] == 7)) && cell[c] < 9)
					newCell[c] = cell[c]+1;
				else
					newCell[c] = cell[c];
			}

		}

		// cell 도 동기화 하기
		for (int i = 0; i < size; i++)
			cell[i] = newCell[i];
	}
	// 숫자 하나하나에 공백두고 출력 ㅆ< 

	for (int i = 0; i < size; i++) {
		if (i == size - 1)
			cout << newCell[i];
		else
			cout << newCell[i] << " ";
		
	}
	cout << endl;
}
