/*************************************************************************
* Problem:																 *
*			삼각형의 종류 (1)                                            *
*																		 *
*************************************************************************/
/*************************************************************************
*																		 *
*		국민대학교 소프트웨어융합대학 소프트웨어학부 2 학 년			 *
*														20181570  강주희 *
*																		 *
*************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;
int triangleDiscrimination(int ax, int ay, int bx, int by, int cx, int cy);
void sort(int*, int*, int*);
int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int ax, ay, bx, by, cx, cy;
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		cout << triangleDiscrimination(ax, ay, bx, by, cx, cy) << endl;
	}
}

int triangleDiscrimination(int ax, int ay, int bx, int by, int cx, int cy) {
	int A = (ax-bx)*(ax-bx) + (ay-by)*(ay - by);
	int B =(bx - cx)*(bx - cx) + (by - cy)*(by - cy);
	int C =(cx - ax)*(cx - ax) + (cy - ay)*(cy - ay);

	sort(&A, &B, &C);

	if (sqrt(A) >= sqrt(B) + sqrt(C))
		return 0;

	else if (B + C == A) {
		return 1;
	}
	else if (B + C < A) {
		return 2;
	}
	else if (B + C > A)
		return 3;

}

void sort(int * A, int * B, int *C) {
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
	