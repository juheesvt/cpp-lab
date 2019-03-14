#include <iostream>
using namespace std;

int angleClock(int h, int m);

int main() {
	int t;
	int h, m;

	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> h >> m;
		cout << angleClock(h, m) << endl;
	}

	return 0;
}

int angleClock(int h, int m) {

	float m_angle = m * 6;
	float h_angle = h * 30 + m * 0.5;

	float result = m_angle - h_angle;

	if (result < 0)
		result = -result;
	if (result > 180)
		result = 360 - result;

	return (int)result;
}
