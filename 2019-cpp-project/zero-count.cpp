/*************************************************************************
* Problem:																 *
*			끝자리 0의 개수 구하기                                       *
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

int zeroCount(int *);

int main() {
	int t,num;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		int *arr = new int[num+1];
		for (int r = 0; r < num; r++) {
			cin >> arr[r];
		}
		arr[num] = NULL;
		cout << zeroCount(arr) << endl;
		delete[] arr;
	}
	return 0;
}

int zeroCount(int *arr) {
	int twoCnt = 0;
	int fiveCnt = 0;
	for (; *arr != NULL; arr++) {
		
		while (*arr % 2 == 0) {
			twoCnt++;
			*arr /= 2;
		}

		while (*arr % 5 == 0) {
			fiveCnt++;
			*arr /= 5;
		}		
	}

	if (fiveCnt == twoCnt)
		return fiveCnt;
	else
		return fiveCnt - twoCnt > 0 ? twoCnt : fiveCnt;
}
