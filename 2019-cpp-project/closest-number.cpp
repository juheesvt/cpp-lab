#include < iostream>

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

	int absN = n > 0 ? n : -n;
	int absM = m > 0 ? m : -m;

	if (absN < m) 
		return n > 0 ? m : -m;

	int remainder = absN % absM ;

	if (remainder == absM - remainder)
		return n > 0 ? n + remainder : n - remainder;

	else if (remainder < absM - remainder)
		return n > 0 ? n - remainder : n + remainder;

	else
		return n > 0 ? n + (absM - remainder) : n - (absM - remainder);

}