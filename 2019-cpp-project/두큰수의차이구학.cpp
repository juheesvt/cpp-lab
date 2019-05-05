#include <iostream>

using namespace std;

int main() {
	int t, n,r;

	cin >> t;
	for (int i = 0; i < t; i++) {
		int max = 0, max2 = 0;
		cin >> r;
		for (int i = 0; i < r; i++) {
			cin >> n;
			if (n >= max) {
				max2 = max;
				max = n;
			}
			if (n > max2 && n != max)
				max2 = n;
		}
		cout << max - max2 << endl;

	}
}
