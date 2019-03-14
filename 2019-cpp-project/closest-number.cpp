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

	int closeNum;

	int diffMinus = -1;
	int diffPlus =-1;

	for (int kp = n, km = n; ; ++kp, --km) {
		
		if (kp % m == 0 && kp != 0)
			diffPlus = n - kp >= 0 ? n - kp : kp - n;
		
		if (km % m == 0 && km != 0)
			diffMinus = n - km >= 0 ? n - km : km - n;

	
		if (diffPlus != -1 || diffMinus != -1) {

			if (diffPlus == -1 && diffMinus != -1) {
				closeNum = km;
				break;		
			}

			else if (diffPlus != -1 && diffMinus == -1) {
				closeNum = kp;
				break;
			}
			else {

				if (diffPlus == diffMinus) {

					int temp_km = km;
					int temp_kp = kp;

					km = km >= 0 ? km : -km;
					kp = kp >= 0 ? kp : -kp;

					closeNum = kp > km ? temp_kp : temp_km;
					break;
				}
			}
		}				
	}
	
	return closeNum;
}