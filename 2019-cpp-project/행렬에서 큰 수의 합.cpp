
#include <iostream>
using namespace std;

const int SIZE = 10;

int sumMaxValuemMatrix(int matrix[][SIZE], int rowSize, int colSize);

int main() {

	int t;

	unsigned int rowSize, colSize;
	int matrix[SIZE][SIZE];

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> rowSize >> colSize;
		for (int j = 0; j < rowSize; j++)
			for (int k = 0; k < colSize; k++)
				cin >> matrix[j][k];

		cout << sumMaxValuemMatrix(matrix, rowSize, colSize) << endl;
	}
}

	int sumMaxValuemMatrix(int matrix[][SIZE], int rowSize, int colSize) {
		int sum = 0;

		int  * Col = new int[colSize];
		int * r = new int[rowSize];



		for (int i = 0; i < rowSize; i++) {
			int temp = matrix[i][0];
			for (int j = 0; j < colSize; j++) {
				if (temp < matrix[i][j])
					temp = matrix[i][j];
			}
			r[i] = temp;
		}

		for (int i = 0; i < colSize; i++) {
			int temp = matrix[0][i];
			for (int j = 0; j < rowSize; j++) {
				if (temp < matrix[i][j])
					temp = matrix[i][j];
			}
			Col[i] = temp;
		}

		for (int i = 0; i < colSize; i++) {

			sum += r[i];
		}

		for (int i = 0; i < rowSize; i++) {

			sum += Col[i];
		}


		
		return sum;
		
	}
	
