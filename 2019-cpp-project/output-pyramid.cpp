#include < iostream>

using namespace std;


void outputPyramid(int n, int m);

int main() {

	int t;
	int n, k;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n >> k;
		outputPyramid(n, k);
	}
	return 0;
}

void outputPyramid(int n, int k) {

	int sum = 0;
	for (int j = 0; j < k; ++j) {
		if (!j) {
			cout << k;
			sum += k;
		}
		else {
			cout << sum + (n - j);
			sum += (n - j);
		}
		if (j < k - 1)
			cout << '*';
	}
	cout << endl;
}