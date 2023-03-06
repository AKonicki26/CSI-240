// Anne Konicki

#include "functions.h"

int promptSize() {

	int size = 0;
	cout << "Enter an array size: ";
	cin >> size;

	if (size <= 0) {
		cout << "Error, size must be a positive integer" << endl;
		size = promptSize();
	}

	return size;
}

int random(int min, int max) {
	return (rand() % (max - min + 1) + min);
}

void fillArray(int size, int* array) {
	for (int i = 0; i < size; i++) {
		array[i] = random(LOWER_BOUND, UPPER_BOUND);
	}
}

void displayArray(int size, int* array) {

	for (int i = 0; i < size; i++) {
		cout << setw(4) << left << array[i];
		if ((i % 10) == 9) { cout << "\n"; }
	}

	cout << endl << endl;
}

void sortArray(int size, int* array) {

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[i] > array[j]) { swap(array[i], array[j]); }
		}
	}

}