/*************************************************************************
* Problem:																 *
*			패리티 비트                                                  *
*																		 *
*************************************************************************/
/*************************************************************************
*																		 *
*		국민대학교 소프트웨어융합대학 소프트웨어학부 2 학 년			 *
*														20181570  강주희 *
*																		 *
*************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

long long parityBit(int);

int main() {
	int t, data;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> data;
		cout << parityBit(data) <<endl;
	}
}

long long parityBit(int data) {

	int originalData = data;
	int binData[32];
	int i = 0;
	for (; data > 0; i++) {
		int binary = data % 2;
		binData[32 - i -1] = binary;
		data /= 2;
	}
	for (; i < 32; i++)
		binData[32 - i - 1] = 0;

	int sum = 0;
	for (i = 0; i < 32; i++)
		sum += binData[i];

	if (sum % 2 == 0)
		return originalData;
	else {
		binData[0] = 1;
		long long result = 0;
		for (int i = 0; i < 32; i++) {
			result += binData[i] * pow(2.0, (double)(31 - i));
		}
		return result;
	}

}