#include <iostream>

using namespace std;

int answer(long long);

int main() {
	int t;
	long long n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << answer(n) << endl;
	}
} 

int answer(long long n) {
	int nArr[15] = { 0, };
	int target=0, evenSum = 0, oddSum = 0, i = 0, cnt = 0;
	while (true) {
		target = n % 10;
		n /= 10;

		nArr[14 - i] = target;
		i++, cnt++;
		
		if (!n)		break;
	}
	for (int i = 0; i < 15; i++) {
		if (nArr[i] > 0) {
			for (int j = 1; j <= cnt; j++) {
				if (j % 2 == 0)
					evenSum += nArr[i];
				else
					oddSum += nArr[i];
				i++;
			}
			break;
		}
	}
	if (oddSum > evenSum)
		return 1;
	else if (oddSum < evenSum)
		return -1;
	else
		return 0;
}
