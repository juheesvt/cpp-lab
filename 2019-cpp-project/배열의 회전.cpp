#include <iostream>
using namespace std;


const int SIZE = 10;
void rotateArray(int array[], int size, int rotateSize);
void printArray(int array[], int size);


int main() {
	int t;
	unsigned int size;
	unsigned int rotateSize;
	int array[SIZE];

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> size >> rotateSize;
		for (int j = 0; j < size; j++) {
			cin >> array[j];
		}

		rotateArray(array, size, rotateSize);
		printArray(array, size);
	}
	return 0;
}


void rotateArray(int array[], int size, int rotateSize) {
	int * temp = new int[rotateSize];
	for (int i = 0; i < rotateSize; i++) {
		temp[i] = array[i];
	}
	for (int i = rotateSize ; i < size; i++) {
		array[i - rotateSize] = array[i];
	}
	for (int i = size - rotateSize; i < size; i++) {
		array[i] = temp[i - (size - rotateSize)];
	}
}

void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}