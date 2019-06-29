#include "My2Matrix.h"

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a11, a12, a21, a22;
		cin >> a11 >> a12 >> a21 >> a22;
		My2Matrix m1(a11, a12, a21, a22);

		cin >> a11 >> a12 >> a21 >> a22;
		My2Matrix m2(a11, a12, a21, a22);

		cout << m1  << m2 ;
		cout << -m1 + 2 * m2 ;
	}


}