#include <iostream>

using namespace std;

void outputZigZag(int n, int k);

int main() {

	int t;
	int n, k;

	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n >> k;
		outputZigZag(n, k);
	}

	return 0;
}

void outputZigZag(int n, int k) {

	if (k % 2 == 0) {

		int even = k * (k / 2) + (k / 2);
		
		for (int i = even ; i > even - k; --i) {

			if (i == even - k+1)
				cout << i;
			else
				cout << i << "*";
		}
		cout << endl;
	}

	else {

		int odd = k * (k / 2) + 1;

		for (int i = odd; i < odd + k; ++i) {

			if (i == odd + k-1)
				cout << i;
			else
				cout << i << "*";

		}
		cout << endl;
	}

}