#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	int y;

	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> y;

		int century = y / 100;
		int N = y - (y / 19) * 19;
		int T = (century - 17) / 25;
		int I = (century - (century / 4) - ((century - T) / 3)) + (N * 19 + 15);
		int J = I - (I / 30) * 30;
		int K = J - (J / 28)*(1 - J / 28)*(29 / J + 1)*((21 - N) / 11);
		int L = ((y + (y / 4)) + J + 2) - century + century / 4;
		int P = L - (L / 7) * 7;
		int Q = K - P;
		int month = (Q + 40) / 44 + 3;
		int day = (Q + 28) - (month / 4 * 31);


		cout << month << " " << day << endl;
	}

	return 0;
	
}
