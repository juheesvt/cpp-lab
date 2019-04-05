#include <iostream>

using namespace std;

void list3Numbers(int a, int b, int c) {
	if (a <= b) {
		if (b <= c)
			cout << a << " " << b << " " <<  c << endl;
		else {
			if (a <= c)
				cout << a << " " << c << " " << b << endl;
			else
				cout << c << " " << a << " " << b << endl;
		}
	}
	else { // a > b
		if ( a <= c)
			cout << b << " " << a << " " << c << endl;
		else {
			if (b <= c)
				cout << b << " " << c << " " << a << endl;
			else
				cout << c << " " << b << " " << a << endl;
		}
	}
}

int main() {

	int t, a, b, c;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		list3Numbers(a, b, c);
	}

	return 0;
}
