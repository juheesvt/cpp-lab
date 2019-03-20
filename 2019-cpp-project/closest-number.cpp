#include <iostream>
#include <cmath>

using namespace std;


int closestNumber(int n, int m);

int main() {

	int t;
	int n, m;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n >> m;
		cout << closestNumber(n, m) << endl;
	}
	return 0;
}

int closestNumber(int n, int m) {

	double quotient = (double)n / (double)m;
	return round(quotient) * m;
}