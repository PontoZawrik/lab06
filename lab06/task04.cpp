#include "main.h"

void task04() {
	const int maxSize = 30;
	float array[maxSize];

	int size;
	do {
		cout << "Введите размер массива (не больше 30): ";
		cin >> size;
	} while (size > maxSize || size <= 0);

	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "]: ";
		cin >> array[i];
	}

	cout << "\nИзначальный массив: \n";
	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "] = " << array[i] << endl;
	}
	cout << endl;

	cout << "\nОтсортированный массив: \n";
	for (int i = 0; i < size; i++) {
		if ((i < 4 || i > 7) && (i % 2 != 0)) {
			cout << "array[" << i << "] = " << array[i] << endl;
		}
	}
	cout << endl;

	return;
}